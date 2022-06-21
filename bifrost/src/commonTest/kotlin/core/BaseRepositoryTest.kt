package core

import com.makswin.bifrost.core.graphql.GraphQLAuthorizationInterceptor
import com.makswin.bifrost.modules.authentication.AuthenticationService
import com.makswin.bifrost.modules.authentication.requestModels.Login
import kotlinx.coroutines.runBlocking
import kotlin.test.BeforeTest

open class BaseRepositoryTest {

    private val testEnvironment = TestEnvironment.getTestEnvironment()

    @BeforeTest
    open fun onSetup() =
        runBlocking { getToken(testEnvironment.user.cellPhone, testEnvironment.user.password) }

    private suspend fun getToken(cellPhone: String, password: String) {

        if (GraphQLAuthorizationInterceptor.testToken.isNotEmpty()) return

        GraphQLAuthorizationInterceptor.testToken = "-1"

        AuthenticationService().forgotPasswordOTP(Login(cellPhone, ""))

        val response =
            AuthenticationService().login(Login(cellPhone, password))

        GraphQLAuthorizationInterceptor.testToken = response.data?.accessToken ?: ""

    }

}