package core

import com.makswin.bifrost.BuildKonfig

object TestEnvironment {

    fun getTestUser(): TestUser {

        return when (BuildKonfig.country) {
            "TR" -> TestUser("+905357394980", "394980", "17837282806", "113563")
            "PT" -> TestUser("+351999022584", "022584", "17837282805", "203031")
            else -> TestUser("+905357394980", "394980", "17837282806", "113563")
        }

    }

    fun getTestCountry(): TestCountry {
        return when (BuildKonfig.country) {
            "TR" -> TestCountry.Turkey
            "PT" -> TestCountry.Portugal
            else -> TestCountry.Turkey
        }
    }

}

enum class TestCountry {
    Turkey,
    Portugal
}

data class TestUser(
    val cellPhone: String,
    val password: String,
    val identity: String,
    val userId: String
)