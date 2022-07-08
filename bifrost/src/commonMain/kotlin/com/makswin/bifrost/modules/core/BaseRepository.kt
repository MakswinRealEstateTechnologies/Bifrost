package com.makswin.bifrost.modules.core

import com.apollographql.apollo3.ApolloClient
import com.apollographql.apollo3.api.*
import com.benasher44.uuid.Uuid
import com.makswin.bifrost.core.graphql.GraphQLNetwork
import com.makswin.bifrost.core.graphql.Listeners
import com.makswin.bifrost.core.models.BaseResponseModel
import com.makswin.bifrost.core.models.GraphQLError
import com.makswin.bifrost.core.models.ResponseStatus

open class BaseRepository {

    private var graphQLNetwork: GraphQLNetwork = GraphQLNetwork()

    private fun getApolloClient(): ApolloClient {
        return graphQLNetwork.getApolloClient()
    }

    suspend fun <D : Query.Data> executeQuery(query: Query<D>): ApolloResponse<D> {

        return try {

            val response = getApolloClient().query(query).execute()

            checkOperation(response)

            response

        } catch (ex: Throwable) {

            ApolloResponse.Builder(query, Uuid(0, 8), null).build()

        }

    }

    suspend fun <D : Mutation.Data> executeMutation(mutation: Mutation<D>): ApolloResponse<D> {

        return try {
            val response = getApolloClient().mutation(mutation).execute()

            checkOperation(response)

            response

        } catch (ex: Throwable) {

            ApolloResponse.Builder(mutation, Uuid(0, 8), null).build()

        }

    }

    private suspend fun <D : Operation.Data> checkOperation(response: ApolloResponse<D>) {

        if (!response.errors.isNullOrEmpty()) {

            val variables =
                response.operation.variables(CustomScalarAdapters.Key.Empty).valueMap.toString()

            val graphQLError = GraphQLError(
                response.operation.name(),
                response.errors?.map { it.message } ?: listOf(),
                variables)

            Listeners.apiErrors.emit(graphQLError)

        }

    }

    fun <D : Operation.Data> ApolloResponse<D>.isFailed(): Boolean =
        this.hasErrors() || this.data == null

    fun <T> onError(): BaseResponseModel<T> = BaseResponseModel(ResponseStatus.Error, null)

    fun onSuccess(): BaseResponseModel<Any> = BaseResponseModel(ResponseStatus.Success, null)

    fun <T> onSuccess(data: T): BaseResponseModel<T> =
        BaseResponseModel(ResponseStatus.Success, data)

}