package com.makswin.bifrost.core.graphql

import com.apollographql.apollo3.api.http.HttpRequest
import com.apollographql.apollo3.api.http.HttpResponse
import com.apollographql.apollo3.network.http.HttpInterceptor
import com.apollographql.apollo3.network.http.HttpInterceptorChain
import com.russhwolf.settings.Settings

class GraphQLAuthorizationInterceptor : HttpInterceptor {

    companion object {
        var testToken = ""
        var testUserId = ""
    }

    override suspend fun intercept(
        request: HttpRequest,
        chain: HttpInterceptorChain
    ): HttpResponse {

        try {

            if (testToken == "-1") {
                return chain.proceed(request)
            }

            val token: String = testToken.ifEmpty {
                Settings().getString("token", "")
            }

            return if (token.isNotEmpty()) {
                chain.proceed(request.newBuilder().addHeader("Authorization", "Bearer $token").build())
            } else {
                chain.proceed(request)
            }

        } catch (ex: Throwable) {

            return chain.proceed(request)

        }

    }

}