package core

data class TestEnvironment(val user: TestUser) {

    companion object {

        fun getTestEnvironment(): TestEnvironment {

            val user = TestUser("+905357394980", "113563", "394980")

            return TestEnvironment(user)

        }

    }

}

data class TestUser(val cellPhone: String, val userId: String, val password: String)