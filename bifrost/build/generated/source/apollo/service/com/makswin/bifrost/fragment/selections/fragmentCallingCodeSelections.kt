//
// AUTO-GENERATED FILE. DO NOT MODIFY.
//
// This class was automatically generated by Apollo GraphQL version '3.3.0'.
//
package com.makswin.bifrost.fragment.selections

import com.apollographql.apollo3.api.CompiledField
import com.apollographql.apollo3.api.CompiledSelection
import com.apollographql.apollo3.api.notNull
import com.makswin.bifrost.type.GraphQLID
import com.makswin.bifrost.type.GraphQLString
import kotlin.collections.List

public object fragmentCallingCodeSelections {
  public val root: List<CompiledSelection> = listOf(
        CompiledField.Builder(
          name = "id",
          type = GraphQLID.type.notNull()
        ).build(),
        CompiledField.Builder(
          name = "value",
          type = GraphQLString.type
        ).build(),
        CompiledField.Builder(
          name = "description",
          type = GraphQLString.type
        ).build(),
        CompiledField.Builder(
          name = "key",
          type = GraphQLString.type
        ).build(),
        CompiledField.Builder(
          name = "flag",
          type = GraphQLString.type
        ).build()
      )
}