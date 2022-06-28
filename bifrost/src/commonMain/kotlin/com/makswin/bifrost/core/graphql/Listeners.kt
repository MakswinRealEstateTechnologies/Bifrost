package com.makswin.bifrost.core.graphql

import com.makswin.bifrost.core.models.GraphQLError
import kotlinx.coroutines.flow.MutableSharedFlow

class Listeners {

    companion object {
        val apiErrors = MutableSharedFlow<GraphQLError>()
    }

}