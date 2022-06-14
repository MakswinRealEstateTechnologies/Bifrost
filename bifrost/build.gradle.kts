import com.android.build.gradle.internal.tasks.factory.dependsOn

plugins {
    kotlin("multiplatform")
    id("com.chromaticnoise.multiplatform-swiftpackage") version "2.0.3"
    id("com.android.library")
    id("maven-publish")
    id("com.apollographql.apollo3").version("3.3.0")
}

kotlin {

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
        buildConfiguration { debug() }
    }

    sourceSets {

        sourceSets["commonMain"].dependencies {
            implementation("org.jetbrains.kotlin:kotlin-stdlib-common")
            api("com.apollographql.apollo3:apollo-runtime:3.3.0")
            api("com.apollographql.apollo3:apollo-api:3.3.0")
            api("org.awaitility:awaitility-kotlin:4.1.1")
            api("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.6.1")
            api("com.russhwolf:multiplatform-settings-no-arg:0.8.1")
        }

        sourceSets["androidMain"].dependencies {
            implementation("org.jetbrains.kotlin:kotlin-stdlib")
        }

        val commonMain by getting
        val commonTest by getting {
            dependencies {
                implementation(kotlin("test"))
                implementation(kotlin("test-junit"))
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
                implementation("org.jetbrains.kotlin:kotlin-test-common:1.7.0")
                implementation("org.jetbrains.kotlin:kotlin-test-annotations-common:1.7.0")
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core-common:1.3.0-M2")
                implementation("io.mockk:mockk-common:1.9.3")
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.6.1")
            }
        }
    }
}

android {
    project.tasks.preBuild.dependsOn("graphqlSchemaDownloadTask")
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

apollo {
    packageName.set("com.makswin.bifrost")
}