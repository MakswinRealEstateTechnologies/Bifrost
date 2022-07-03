import com.android.build.gradle.internal.tasks.factory.dependsOn
import com.codingfeline.buildkonfig.compiler.FieldSpec.Type
import org.apache.tools.ant.taskdefs.condition.Os
import org.gradle.api.tasks.testing.logging.TestLogEvent

plugins {
    kotlin(Plugins.multiPlatform)
    id(Plugins.androidLibrary)
    id(Plugins.mavenPublish)
    id(Plugins.swiftPackage) version Versions.swiftPackage
    id(Plugins.apollo) version Versions.apollo
    id(Plugins.koTest) version Versions.koTest
    id(Plugins.buildConfig) version Versions.buildConfig
}

kotlin {

    jvm {
        testRuns["test"].executionTask.configure {
            useJUnitPlatform()
            testLogging {
                events(
                    TestLogEvent.PASSED,
                    TestLogEvent.FAILED
                )
                showStandardStreams = true
            }
        }
    }

    android {
        publishLibraryVariants("release")
    }

    ios {
        binaries {
            framework {
                baseName = Config.projectName
            }
        }
    }

    multiplatformSwiftPackage {
        packageName(Config.projectName)
        swiftToolsVersion(Config.swiftToolsVersion)
        targetPlatforms {
            iOS { v(Config.minIosVersion) }
        }
        outputDirectory(File(Config.iosSdkOutFile, ""))
        buildConfiguration { debug() }
    }

    sourceSets {

        sourceSets["commonMain"].dependencies {
            implementation(Dependencies.stdlibCommon)
            api(Dependencies.apolloRunTime)
            api(Dependencies.apolloApi)
            api(Dependencies.coroutinesCore)
            api(Dependencies.settings)
            api(Dependencies.klockDate)
        }

        sourceSets["androidMain"].dependencies {
            implementation(Dependencies.stdlib)
        }

        sourceSets["commonTest"].dependencies {
            implementation(kotlin("test"))
            implementation(Dependencies.koTestEngine)
            implementation(Dependencies.koTestAssertionsCore)
            implementation(Dependencies.koTestProperty)
            implementation(Dependencies.koTestDataTest)
        }

        sourceSets["jvmTest"].dependencies {
            implementation(Dependencies.jUnit5)
        }

        val androidAndroidTestRelease by getting
        val androidTestFixtures by getting
        val androidTestFixturesDebug by getting
        val androidTestFixturesRelease by getting

        sourceSets["androidTest"].dependsOn(androidAndroidTestRelease)
        sourceSets["androidTest"].dependsOn(androidTestFixtures)
        sourceSets["androidTest"].dependsOn(androidTestFixturesDebug)
        sourceSets["androidTest"].dependsOn(androidTestFixturesRelease)

    }

}

android {

    if (Os.isFamily(Os.FAMILY_MAC)) {
        project.tasks.preBuild.dependsOn("graphqlSchemaDownloadTask")
    }

    compileSdk = Config.compileSdk
    sourceSets["main"].manifest.srcFile("src/androidMain/AndroidManifest.xml")

    defaultConfig {
        minSdk = Config.minSdk
        targetSdk = Config.targetSdk
    }

}

publishing {
    publications {
        create<MavenPublication>("maven") {
            groupId = Config.packageName
            artifactId = Config.projectName
            from(components["kotlin"])
            withBuildIdentifier()
        }
    }
}

apollo {
    packageName.set(Config.packageName)
    generateKotlinModels.set(true)
}

buildkonfig {
    packageName = Config.packageName

    defaultConfigs {
        buildConfigField(
            Type.STRING,
            "country",
            (project.properties["country"]?.toString() ?: "TR")
        )
        buildConfigField(
            Type.STRING,
            "prodApiUrl",
            Config.prodApiUrl
        )
        buildConfigField(
            Type.STRING,
            "testApiUrl",
            Config.testApiUrl
        )
    }
}

tasks.register("graphqlSchemaDownloadTask") {
    doFirst {
        exec {
            commandLine(
                "sh", "-c",
                "apollo schema:download --endpoint=${Config.prodApiUrl} $workingDir/src/commonMain/graphql/schema.json"
            )
        }
    }
}