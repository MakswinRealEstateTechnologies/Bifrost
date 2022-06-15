plugins {
    id("com.android.application")
    kotlin("android")
}

android {
    compileSdk = 32
    defaultConfig {
        applicationId = "com.makswin.myapplication.android"
        minSdk = 24
        targetSdk = 32
        versionCode = 1
        versionName = "1.0"
    }
    buildTypes {
        getByName("release") {
            isMinifyEnabled = false
        }
    }
}

dependencies {
    implementation(project(":bifrost"))
    implementation("androidx.lifecycle:lifecycle-runtime-ktx:2.4.1")
    implementation("com.google.android.material:material:1.6.1")
    implementation("androidx.lifecycle:lifecycle-viewmodel-ktx:2.4.1")
    implementation("androidx.lifecycle:lifecycle-runtime-ktx:2.4.1")
    implementation("androidx.lifecycle:lifecycle-livedata-ktx:2.4.1")
    implementation("androidx.appcompat:appcompat:1.4.1")
    implementation("androidx.constraintlayout:constraintlayout:2.1.4")
}