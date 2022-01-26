import com.android.build.gradle.internal.tasks.factory.dependsOn

plugins {
    kotlin("multiplatform")
    id("com.android.library")
    id("com.apollographql.apollo3").version("3.0.0")
    id("com.chromaticnoise.multiplatform-swiftpackage") version "2.0.3"
}

version = "1.0"

kotlin {

    android()

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
            iOS { v("12") }
        }
        outputDirectory(File("/Users/alkincakiralar/Desktop/makswin/Bifrost-IOS-SDK", ""))
        buildConfiguration { debug() }
    }

    sourceSets {
        val commonMain by getting {
            dependencies {
                implementation("com.apollographql.apollo3:apollo-runtime:3.0.0")
                implementation("com.apollographql.apollo3:apollo-api:3.0.0")
                implementation("org.awaitility:awaitility-kotlin:4.1.1")
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.6.0")
            }
        }
        val commonTest by getting {
            dependencies {
                implementation(kotlin("test"))
                implementation(kotlin("test-junit"))
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
                implementation("org.jetbrains.kotlin:kotlin-test-common:1.6.10")
                implementation("org.jetbrains.kotlin:kotlin-test-annotations-common:1.6.10")
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core-common:1.3.0-M2")
                implementation("io.mockk:mockk-common:1.9.3")
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.6.0")
            }
        }
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