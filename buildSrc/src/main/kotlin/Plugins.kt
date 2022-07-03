object Plugins {
    val android by lazy { "com.android.tools.build:gradle:${Versions.gradlePlugin}" }
    val kotlin by lazy { "org.jetbrains.kotlin:kotlin-gradle-plugin:${Versions.kotlin}" }
    val multiPlatform by lazy { "multiplatform" }
    val androidLibrary by lazy { "com.android.library" }
    val mavenPublish by lazy { "maven-publish" }
    val swiftPackage by lazy { "com.chromaticnoise.multiplatform-swiftpackage" }
    val apollo  by lazy { "com.apollographql.apollo3" }
    val koTest by lazy { "io.kotest.multiplatform" }
    val buildConfig by lazy { "com.codingfeline.buildkonfig" }
}