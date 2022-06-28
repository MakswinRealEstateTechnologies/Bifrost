package com.makswin.bifrost.core.models

data class GraphQLError(val operationName: String, val errors: List<String>, val input: String)