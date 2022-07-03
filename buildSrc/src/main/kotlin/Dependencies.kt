object Dependencies {
    val koTestEngine by lazy { "io.kotest:kotest-framework-engine:${Versions.koTest}" }
    val koTestAssertionsCore by lazy { "io.kotest:kotest-assertions-core:${Versions.koTest}" }
    val koTestProperty by lazy { "io.kotest:kotest-property:${Versions.koTest}" }
    val koTestDataTest by lazy { "io.kotest:kotest-framework-datatest:${Versions.koTest}" }
    val jUnit5 by lazy { "io.kotest:kotest-runner-junit5-jvm:${Versions.jUnit5}" }
    val stdlib by lazy { "org.jetbrains.kotlin:kotlin-stdlib" }
    val stdlibCommon by lazy { "org.jetbrains.kotlin:kotlin-stdlib-common" }
    val apolloRunTime by lazy { "com.apollographql.apollo3:apollo-runtime:${Versions.apollo}" }
    val apolloApi by lazy { "com.apollographql.apollo3:apollo-api:${Versions.apollo}" }
    val klockDate by lazy { "com.soywiz.korlibs.klock:klock:${Versions.klock}" }
    val coroutinesCore by lazy { "org.jetbrains.kotlinx:kotlinx-coroutines-core:${Versions.coroutines}" }
    val settings by lazy { "com.russhwolf:multiplatform-settings-no-arg:${Versions.settings}" }
}
