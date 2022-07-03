import com.android.build.gradle.internal.tasks.factory.dependsOn

plugins {
    kotlin("multiplatform")
    id("com.android.library")
    id("maven-publish")
    id("com.chromaticnoise.multiplatform-swiftpackage") version "2.0.3"
    id("com.apollographql.apollo3").version("3.3.2")
    id("com.rickclephas.kmp.nativecoroutines").version("0.12.2")
    id("io.kotest.multiplatform") version "5.0.2"
    id("com.codingfeline.buildkonfig").version("0.12.0")
}

buildkonfig {
    packageName = "com.makswin.bifrost"

    defaultConfigs {
        buildConfigField(
            com.codingfeline.buildkonfig.compiler.FieldSpec.Type.STRING,
            "country",
            (project.properties["country"]?.toString() ?: "TR")
        )
    }
}

kotlin {

    jvm {
        testRuns["test"].executionTask.configure {
            useJUnitPlatform()
            testLogging {
                events(
                    org.gradle.api.tasks.testing.logging.TestLogEvent.PASSED,
                    org.gradle.api.tasks.testing.logging.TestLogEvent.FAILED
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
                baseName = "Bifrost"
            }
        }
    }

    multiplatformSwiftPackage {
        packageName("Bifrost")
        swiftToolsVersion("5.3")
        targetPlatforms {
            iOS { v("10") }
        }
        outputDirectory(File("/Users/alkincakiralar/Desktop/makswin/Bifrost-IOS-SDK", ""))
        buildConfiguration { release() }
    }

    sourceSets {

        sourceSets["commonMain"].dependencies {
            implementation("org.jetbrains.kotlin:kotlin-stdlib-common")
            api("com.apollographql.apollo3:apollo-runtime:3.3.2")
            api("com.apollographql.apollo3:apollo-api:3.3.2")
            api("org.awaitility:awaitility-kotlin:4.1.1")
            api("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.6.1")
            api("com.russhwolf:multiplatform-settings-no-arg:1.0.0-alpha01")
            api("com.soywiz.korlibs.klock:klock:2.2.0")
            api("com.badoo.reaktive:reaktive:1.2.2")
            api("com.badoo.reaktive:coroutines-interop:1.2.2")
        }

        sourceSets["androidMain"].dependencies {
            implementation("org.jetbrains.kotlin:kotlin-stdlib")
        }

        sourceSets["commonTest"].dependencies {
            implementation(kotlin("test"))
            implementation("io.kotest:kotest-framework-engine:5.0.2")
            implementation("io.kotest:kotest-assertions-core:5.0.2")
            implementation("io.kotest:kotest-property:5.0.2")
            implementation("io.kotest:kotest-framework-datatest:5.0.2")
        }

        sourceSets["jvmTest"].dependencies {
            implementation("io.kotest:kotest-runner-junit5-jvm:5.0.2")
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

    if (org.apache.tools.ant.taskdefs.condition.Os.isFamily(org.apache.tools.ant.taskdefs.condition.Os.FAMILY_MAC)) {
        project.tasks.preBuild.dependsOn("graphqlSchemaDownloadTask")
    }

    compileSdk = 32
    sourceSets["main"].manifest.srcFile("src/androidMain/AndroidManifest.xml")

    defaultConfig {
        minSdk = 21
        targetSdk = 32
    }

}

tasks.register("graphqlSchemaDownloadTask") {
    doFirst {
        exec {
            commandLine(
                "sh", "-c",
                "apollo schema:download --endpoint=https://zeus.fizbot.net/graphql $workingDir/src/commonMain/graphql/schema.json"
            )
        }
    }
}

publishing {
    publications {
        create<MavenPublication>("maven") {
            groupId = "com.makswin.bifrost"
            artifactId = "bifrost"
            version = "14.0.8"
            from(components["kotlin"])
            withBuildIdentifier()
        }
    }
}

apollo {
    packageName.set("com.makswin.bifrost")
    generateKotlinModels.set(true)
}