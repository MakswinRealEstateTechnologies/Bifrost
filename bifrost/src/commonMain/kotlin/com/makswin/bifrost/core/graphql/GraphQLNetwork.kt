package com.makswin.bifrost.core.graphql

import com.apollographql.apollo3.ApolloClient
import com.makswin.bifrost.BuildKonfig

open class GraphQLNetwork {

    private var instance: ApolloClient? = null

    internal fun getApolloClient(): ApolloClient {

        if (instance != null) {
            return instance!!
        }

        instance = ApolloClient.Builder()
            .serverUrl(BuildKonfig.prodApiUrl)
            .addHttpInterceptor(GraphQLAuthorizationInterceptor())
            .build()

        return instance!!

    }
}