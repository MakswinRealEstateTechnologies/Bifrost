package com.makswin.bifrost.core

import com.apollographql.apollo3.ApolloClient
import com.apollographql.apollo3.api.*

open class BaseService {

    private var graphQLNetwork: GraphQLNetwork = GraphQLNetwork()

    private fun getApolloClient(): ApolloClient {
        return graphQLNetwork.getApolloClient()
    }

    suspend fun <D : Query.Data> executeQuery(query: Query<D>): ApolloResponse<D> {
        return getApolloClient().query(query).execute()
    }

    fun <D : Query.Data> checkResponse(response: ApolloResponse<D>): Boolean {

        if (response.errors != null && response.data == null) {
            return false
        }

        if (response.data == null) {
            return false
        }

        return true

    }

}