//
// AUTO-GENERATED FILE. DO NOT MODIFY.
//
// This class was automatically generated by Apollo GraphQL version '3.3.0'.
//
package com.makswin.fizbot.type.adapter

import com.apollographql.apollo3.api.Adapter
import com.apollographql.apollo3.api.CustomScalarAdapters
import com.apollographql.apollo3.api.Optional
import com.apollographql.apollo3.api.StringAdapter
import com.apollographql.apollo3.api.json.JsonReader
import com.apollographql.apollo3.api.json.JsonWriter
import com.apollographql.apollo3.api.nullable
import com.apollographql.apollo3.api.optional
import com.makswin.fizbot.type.AddFeedbackInput
import kotlin.IllegalStateException
import kotlin.Unit

public object AddFeedbackInput_InputAdapter : Adapter<AddFeedbackInput> {
  public override fun fromJson(reader: JsonReader, customScalarAdapters: CustomScalarAdapters):
      AddFeedbackInput = throw IllegalStateException("Input type used in output position")

  public override fun toJson(
    writer: JsonWriter,
    customScalarAdapters: CustomScalarAdapters,
    `value`: AddFeedbackInput,
  ): Unit {
    writer.name("note")
    StringAdapter.toJson(writer, customScalarAdapters, value.note)
    if (value.type is Optional.Present) {
      writer.name("type")
      FeedbackType_ResponseAdapter.nullable().optional().toJson(writer, customScalarAdapters,
          value.type)
    }
  }
}
