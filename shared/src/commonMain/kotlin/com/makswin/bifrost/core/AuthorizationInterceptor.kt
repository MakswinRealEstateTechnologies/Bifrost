package com.makswin.bifrost.core

import com.apollographql.apollo3.api.http.HttpRequest
import com.apollographql.apollo3.api.http.HttpResponse
import com.apollographql.apollo3.network.http.HttpInterceptor
import com.apollographql.apollo3.network.http.HttpInterceptorChain
import com.russhwolf.settings.Settings

class AuthorizationInterceptor : HttpInterceptor {

    override suspend fun intercept(
        request: HttpRequest,
        chain: HttpInterceptorChain
    ): HttpResponse {

        val settings = Settings()

        val token = settings.getString("token", "")

        return if (token.isNotEmpty()) {
            chain.proceed(
                request.newBuilder().addHeader("Authorization", "Bearer $token").build()
            )
        } else {
            chain.proceed(request)
        }

    }

}