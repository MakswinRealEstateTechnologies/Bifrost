package com.makswin.bifrost.modules.authentication

import com.makswin.bifrost.ForgotPasswordOTPMutation
import com.makswin.bifrost.LogOutMutation
import com.makswin.bifrost.LoginMutation
import com.makswin.bifrost.core.models.BaseResponseModel
import com.makswin.bifrost.core.utils.LocalStorage
import com.makswin.bifrost.modules.core.BaseRepository
import com.makswin.bifrost.modules.authentication.requestModels.Login
import com.makswin.bifrost.modules.authentication.responseModels.Auth
import com.russhwolf.settings.Settings

class AuthenticationService : BaseRepository() {

    val localStorage = LocalStorage()

    /**
     * Stores the user current token
     * after the bifrost migration complete, this method will be deprecated.
     * @param token is user current API token
     * @author alkincakiralar
     */
    fun setUserVariables(token: String, userId: String) {

        val settings = Settings()

        settings.putString("userId", userId)
        settings.putString("token", token)

    }

    /**
     * Generates sms code for user who wants to login
     * @param input has login parameters
     * @author alkincakiralar
     */
    suspend fun forgotPasswordOTP(input: Login): BaseResponseModel<Any> {

        val mutation = ForgotPasswordOTPMutation(input.cellPhone)

        val response = executeMutation(mutation)

        if (response.isFailed()) return onError()

        return onSuccess()

    }

    suspend fun logOut() : BaseResponseModel<Any> {

        val response = executeMutation(LogOutMutation())

        if (response.isFailed()) return onError()

        return onSuccess()

    }

    /**
     * Used to login with sms code
     * @param input has login parameters
     * @return The user model has logged in
     * @author alkincakiralar
     */
    suspend fun login(input: Login): BaseResponseModel<Auth> {

        val mutation = LoginMutation(input.cellPhone, input.password)

        val response = executeMutation(mutation)

        if (response.isFailed()) return onError()

        val fragmentAuth = response.data?.login?.fragmentAuth

        return if (fragmentAuth != null) {

            val auth = Auth(fragmentAuth)

            localStorage.setToken(auth.accessToken)

            localStorage.setUserId(auth.user.id)

            localStorage.setCellPhone(auth.user.cellPhone)

            onSuccess(auth)

        } else {

            onError()

        }

    }

}