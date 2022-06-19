//
// AUTO-GENERATED FILE. DO NOT MODIFY.
//
// This class was automatically generated by Apollo GraphQL version '3.3.0'.
//
package com.makswin.bifrost.adapter

import com.apollographql.apollo3.api.Adapter
import com.apollographql.apollo3.api.CustomScalarAdapters
import com.apollographql.apollo3.api.StringAdapter
import com.apollographql.apollo3.api.json.JsonReader
import com.apollographql.apollo3.api.json.JsonWriter
import com.apollographql.apollo3.api.nullable
import com.apollographql.apollo3.api.obj
import com.makswin.bifrost.AddFeedbackMutation
import kotlin.String
import kotlin.Unit
import kotlin.collections.List

public object AddFeedbackMutation_ResponseAdapter {
  public object Data : Adapter<AddFeedbackMutation.Data> {
    public val RESPONSE_NAMES: List<String> = listOf("addFeedback")

    public override fun fromJson(reader: JsonReader, customScalarAdapters: CustomScalarAdapters):
        AddFeedbackMutation.Data {
      var addFeedback: AddFeedbackMutation.AddFeedback? = null

      while(true) {
        when (reader.selectName(RESPONSE_NAMES)) {
          0 -> addFeedback = AddFeedback.obj().nullable().fromJson(reader, customScalarAdapters)
          else -> break
        }
      }

      return AddFeedbackMutation.Data(
        addFeedback = addFeedback
      )
    }

    public override fun toJson(
      writer: JsonWriter,
      customScalarAdapters: CustomScalarAdapters,
      `value`: AddFeedbackMutation.Data,
    ): Unit {
      writer.name("addFeedback")
      AddFeedback.obj().nullable().toJson(writer, customScalarAdapters, value.addFeedback)
    }
  }

  public object AddFeedback : Adapter<AddFeedbackMutation.AddFeedback> {
    public val RESPONSE_NAMES: List<String> = listOf("note")

    public override fun fromJson(reader: JsonReader, customScalarAdapters: CustomScalarAdapters):
        AddFeedbackMutation.AddFeedback {
      var note: String? = null

      while(true) {
        when (reader.selectName(RESPONSE_NAMES)) {
          0 -> note = StringAdapter.fromJson(reader, customScalarAdapters)
          else -> break
        }
      }

      return AddFeedbackMutation.AddFeedback(
        note = note!!
      )
    }

    public override fun toJson(
      writer: JsonWriter,
      customScalarAdapters: CustomScalarAdapters,
      `value`: AddFeedbackMutation.AddFeedback,
    ): Unit {
      writer.name("note")
      StringAdapter.toJson(writer, customScalarAdapters, value.note)
    }
  }
}