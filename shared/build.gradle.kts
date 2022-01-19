import com.android.build.gradle.internal.tasks.factory.dependsOn

plugins {
    kotlin("multiplatform")
    kotlin("native.cocoapods")
    id("com.android.library")
    id("com.apollographql.apollo3").version("3.0.0")
    id("com.chromaticnoise.multiplatform-swiftpackage") version "2.0.3"
}

version = "1.0"

kotlin {

    val iosFrameworkName = "FizbotBifrost"

    android()

    jvm()

    iosArm64 {
        binaries.framework(iosFrameworkName)
    }

    multiplatformSwiftPackage {
        swiftToolsVersion("5.3")
        targetPlatforms {
            iOS { v("13") }
        }
        packageName("FizbotBifrost")
        outputDirectory(File(projectDir, "FizbotIOSPackage"))
        buildConfiguration { debug() }
    }

    sourceSets {
        val commonMain by getting {
            dependencies {
                implementation("com.apollographql.apollo3:apollo-runtime:3.0.0")
            }
        }
        val iosMain by creating {
            dependencies { }
        }
        val iosTest by creating {
            dependencies { }
        }
        getByName("iosArm64Main") { dependsOn(iosMain) }
        getByName("iosArm64Test") { dependsOn(iosTest) }
    }

}

android {

    project.tasks.preBuild.dependsOn("graphqlSchemaDownloadTask")

    compileSdk = 30
    sourceSets["main"].manifest.srcFile("src/androidMain/AndroidManifest.xml")

    defaultConfig {
        minSdk = 21
        targetSdk = 30
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

apollo {
    packageName.set("com.makswin.fizbot")
    generateKotlinModels.set(true)
}