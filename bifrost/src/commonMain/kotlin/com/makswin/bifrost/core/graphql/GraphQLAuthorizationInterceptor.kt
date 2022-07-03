package com.makswin.bifrost.core.graphql

import com.apollographql.apollo3.api.http.HttpRequest
import com.apollographql.apollo3.api.http.HttpResponse
import com.apollographql.apollo3.network.http.HttpInterceptor
import com.apollographql.apollo3.network.http.HttpInterceptorChain
import com.makswin.bifrost.core.utils.LocalStorage

class GraphQLAuthorizationInterceptor : HttpInterceptor {

    private val localStorage = LocalStorage()

    override suspend fun intercept(
        request: HttpRequest,
        chain: HttpInterceptorChain
    ): HttpResponse {

        try {

            val token = localStorage.getToken()

            return if (token.isNotEmpty()) {
                chain.proceed(
                    request.newBuilder().addHeader("Authorization", "Bearer $token").build()
                )
            } else {
                chain.proceed(request)
            }

        } catch (ex: Throwable) {

            return chain.proceed(request)

        }

    }

}