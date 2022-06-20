package core

import com.makswin.bifrost.core.graphql.GraphQLAuthorizationInterceptor
import com.makswin.bifrost.modules.authentication.AuthenticationService
import com.makswin.bifrost.modules.authentication.requestModels.Login
import kotlinx.coroutines.runBlocking
import kotlin.test.AfterTest
import kotlin.test.BeforeTest

open class BaseRepositoryTest {

    private val environment: TestEnvironment = TestEnvironment.Turkey

    @BeforeTest
    open fun onSetup() = runBlocking {

        when (environment) {
            TestEnvironment.Turkey -> getToken("+905357394980", "394980")
            TestEnvironment.Portuguese -> getToken("+351999022584", "022584")
        }

    }

    @AfterTest
    open fun onFinish() = runBlocking {
        //logOut()
    }

    private suspend fun getToken(cellPhone: String, password: String) {

        if (GraphQLAuthorizationInterceptor.testToken.isNotEmpty()) return

        GraphQLAuthorizationInterceptor.testToken = "-1"

        AuthenticationService().forgotPasswordOTP(Login(cellPhone, ""))

        val response =
            AuthenticationService().login(Login(cellPhone, password))

        GraphQLAuthorizationInterceptor.testToken = response.data?.accessToken ?: ""

    }

    private suspend fun logOut() {
        AuthenticationService().logOut()
    }

}