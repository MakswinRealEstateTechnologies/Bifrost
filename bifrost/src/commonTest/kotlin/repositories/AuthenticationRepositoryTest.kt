package repositories

import com.makswin.bifrost.core.models.ResponseStatus
import com.makswin.bifrost.modules.authentication.AuthenticationService
import com.makswin.bifrost.modules.authentication.requestModels.Login
import core.TestEnvironment
import io.kotest.core.spec.Order
import io.kotest.core.spec.style.FunSpec
import io.kotest.matchers.shouldBe
import kotlinx.coroutines.runBlocking

@Order(0)
class AuthenticationRepositoryTest : FunSpec({

    val authenticationService = AuthenticationService()

    test("Login With Test User") {

        val user = TestEnvironment.getTestUser()

        val login = Login(user.cellPhone, user.password)

        val response = authenticationService.forgotPasswordOTP(login)

        response.status shouldBe ResponseStatus.Success

        val loginResponse = authenticationService.login(login)

        loginResponse.status shouldBe ResponseStatus.Success

    }

    afterProject {

        runBlocking {

            val response = authenticationService.logOut()

            response.status shouldBe ResponseStatus.Success

        }

    }

})
