import com.android.build.gradle.internal.tasks.factory.dependsOn

plugins {
    kotlin("multiplatform")
    kotlin("native.cocoapods")
    id("com.android.library")
    id("com.apollographql.apollo3").version("3.0.0")
}

version = "1.0"

kotlin {

    android()

    jvm()

    iosArm64 {
        binaries {
            framework {
                baseName = "Bifrost"
            }
        }
    }

    sourceSets {
        commonMain {
            dependencies {
                implementation("com.apollographql.apollo3:apollo-runtime:3.0.0")
                //implementation ("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.6.0")
                //implementation ("androidx.lifecycle:lifecycle-runtime-ktx:2.2.0-alpha02")
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