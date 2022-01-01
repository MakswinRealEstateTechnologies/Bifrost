package com.makswin.bifrost.core

import com.apollographql.apollo3.ApolloClient

open class GraphQLNetwork {

    private var instance: ApolloClient? = null

    internal fun getApolloClient(): ApolloClient {

        if (instance != null) {
            return instance!!
        }

        instance = ApolloClient.Builder()
            //.addInterceptor(com.makswin.fizbotmobilelibrary.Core.AuthorizationInterceptor())
            .serverUrl("https://zeus.fizbot.net/graphql")
            .build()

        return instance!!

    }

}