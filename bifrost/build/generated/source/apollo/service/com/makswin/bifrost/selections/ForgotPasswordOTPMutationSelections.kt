//
// AUTO-GENERATED FILE. DO NOT MODIFY.
//
// This class was automatically generated by Apollo GraphQL version '3.3.0'.
//
package com.makswin.bifrost.selections

import com.apollographql.apollo3.api.CompiledArgument
import com.apollographql.apollo3.api.CompiledField
import com.apollographql.apollo3.api.CompiledSelection
import com.apollographql.apollo3.api.CompiledVariable
import com.apollographql.apollo3.api.notNull
import com.makswin.bifrost.type.ForgotPasswordResponse
import com.makswin.bifrost.type.GraphQLString
import kotlin.collections.List

public object ForgotPasswordOTPMutationSelections {
  private val forgotPasswordOTP: List<CompiledSelection> = listOf(
        CompiledField.Builder(
          name = "status",
          type = GraphQLString.type.notNull()
        ).build()
      )

  public val root: List<CompiledSelection> = listOf(
        CompiledField.Builder(
          name = "forgotPasswordOTP",
          type = ForgotPasswordResponse.type.notNull()
        ).arguments(listOf(
          CompiledArgument("input", mapOf(
            "cell_phone" to CompiledVariable("cell_phone"),
          ))
        ))
        .selections(forgotPasswordOTP)
        .build()
      )
}
