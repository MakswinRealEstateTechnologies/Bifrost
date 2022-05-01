package com.makswin.bifrost.core

import com.apollographql.apollo3.ApolloClient
import com.apollographql.apollo3.api.*
import kotlinx.coroutines.CoroutineScope

open class BaseService {

    private var graphQLNetwork: GraphQLNetwork = GraphQLNetwork()

    val scope = CoroutineScope(MainLoopDispatcher)

    private fun getApolloClient(): ApolloClient {
        return graphQLNetwork.getApolloClient()
    }

    suspend fun <D : Query.Data> executeQuery(query: Query<D>): ApolloResponse<D> {
        return getApolloClient().query(query).execute()
    }

    suspend fun <D : Mutation.Data> executeMutation(mutation: Mutation<D>): ApolloResponse<D> {
        return getApolloClient().mutation(mutation).execute()
    }

    fun <D : Query.Data> checkQueryResponse(response: ApolloResponse<D>): Boolean {

        if (response.errors != null && response.data == null) {
            return false
        }

        if (response.data == null) {
            return false
        }

        return true

    }

    fun <D : Mutation.Data> checkMutationResponse(response: ApolloResponse<D>): Boolean {

        if (response.errors != null && response.data == null) {
            return false
        }

        if (response.data == null) {
            return false
        }

        return true

    }

}