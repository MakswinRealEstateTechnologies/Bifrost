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
import com.apollographql.apollo3.api.list
import com.apollographql.apollo3.api.nullable
import com.apollographql.apollo3.api.obj
import com.makswin.bifrost.TrainingsQuery
import kotlin.String
import kotlin.Unit
import kotlin.collections.List

public object TrainingsQuery_ResponseAdapter {
  public object Data : Adapter<TrainingsQuery.Data> {
    public val RESPONSE_NAMES: List<String> = listOf("trainings_for_user")

    public override fun fromJson(reader: JsonReader, customScalarAdapters: CustomScalarAdapters):
        TrainingsQuery.Data {
      var trainings_for_user: TrainingsQuery.Trainings_for_user? = null

      while(true) {
        when (reader.selectName(RESPONSE_NAMES)) {
          0 -> trainings_for_user = Trainings_for_user.obj().nullable().fromJson(reader,
              customScalarAdapters)
          else -> break
        }
      }

      return TrainingsQuery.Data(
        trainings_for_user = trainings_for_user
      )
    }

    public override fun toJson(
      writer: JsonWriter,
      customScalarAdapters: CustomScalarAdapters,
      `value`: TrainingsQuery.Data,
    ): Unit {
      writer.name("trainings_for_user")
      Trainings_for_user.obj().nullable().toJson(writer, customScalarAdapters,
          value.trainings_for_user)
    }
  }

  public object Trainings_for_user : Adapter<TrainingsQuery.Trainings_for_user> {
    public val RESPONSE_NAMES: List<String> = listOf("data")

    public override fun fromJson(reader: JsonReader, customScalarAdapters: CustomScalarAdapters):
        TrainingsQuery.Trainings_for_user {
      var `data`: List<TrainingsQuery.Data1>? = null

      while(true) {
        when (reader.selectName(RESPONSE_NAMES)) {
          0 -> `data` = Data1.obj(true).list().fromJson(reader, customScalarAdapters)
          else -> break
        }
      }

      return TrainingsQuery.Trainings_for_user(
        `data` = `data`!!
      )
    }

    public override fun toJson(
      writer: JsonWriter,
      customScalarAdapters: CustomScalarAdapters,
      `value`: TrainingsQuery.Trainings_for_user,
    ): Unit {
      writer.name("data")
      Data1.obj(true).list().toJson(writer, customScalarAdapters, value.`data`)
    }
  }

  public object Data1 : Adapter<TrainingsQuery.Data1> {
    public val RESPONSE_NAMES: List<String> = listOf("__typename")

    public override fun fromJson(reader: JsonReader, customScalarAdapters: CustomScalarAdapters):
        TrainingsQuery.Data1 {
      var __typename: String? = null

      while(true) {
        when (reader.selectName(RESPONSE_NAMES)) {
          0 -> __typename = StringAdapter.fromJson(reader, customScalarAdapters)
          else -> break
        }
      }

      reader.rewind()
      val fragmentTraining = com.makswin.bifrost.fragment.FragmentTrainingImpl_ResponseAdapter.FragmentTraining.fromJson(reader,
          customScalarAdapters)

      return TrainingsQuery.Data1(
        __typename = __typename!!,
        fragmentTraining = fragmentTraining
      )
    }

    public override fun toJson(
      writer: JsonWriter,
      customScalarAdapters: CustomScalarAdapters,
      `value`: TrainingsQuery.Data1,
    ): Unit {
      writer.name("__typename")
      StringAdapter.toJson(writer, customScalarAdapters, value.__typename)

      com.makswin.bifrost.fragment.FragmentTrainingImpl_ResponseAdapter.FragmentTraining.toJson(writer,
          customScalarAdapters, value.fragmentTraining)
    }
  }
}