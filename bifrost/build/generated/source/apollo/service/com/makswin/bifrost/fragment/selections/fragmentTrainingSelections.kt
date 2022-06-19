//
// AUTO-GENERATED FILE. DO NOT MODIFY.
//
// This class was automatically generated by Apollo GraphQL version '3.3.0'.
//
package com.makswin.bifrost.fragment.selections

import com.apollographql.apollo3.api.CompiledField
import com.apollographql.apollo3.api.CompiledSelection
import com.apollographql.apollo3.api.notNull
import com.makswin.bifrost.type.DateTime
import com.makswin.bifrost.type.GraphQLString
import kotlin.collections.List

public object fragmentTrainingSelections {
  public val root: List<CompiledSelection> = listOf(
        CompiledField.Builder(
          name = "starts_at",
          type = DateTime.type.notNull()
        ).build(),
        CompiledField.Builder(
          name = "ends_at",
          type = DateTime.type.notNull()
        ).build(),
        CompiledField.Builder(
          name = "title",
          type = GraphQLString.type
        ).build(),
        CompiledField.Builder(
          name = "meeting_id",
          type = GraphQLString.type
        ).build(),
        CompiledField.Builder(
          name = "meeting_password",
          type = GraphQLString.type
        ).build(),
        CompiledField.Builder(
          name = "meeting_link",
          type = GraphQLString.type
        ).build(),
        CompiledField.Builder(
          name = "meeting_recording_link",
          type = GraphQLString.type
        ).build()
      )
}