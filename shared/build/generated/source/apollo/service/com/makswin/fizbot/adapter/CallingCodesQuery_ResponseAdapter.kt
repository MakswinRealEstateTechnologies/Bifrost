//
// AUTO-GENERATED FILE. DO NOT MODIFY.
//
// This class was automatically generated by Apollo GraphQL version '3.0.0'.
//
package com.makswin.fizbot.adapter

import com.apollographql.apollo3.api.Adapter
import com.apollographql.apollo3.api.CustomScalarAdapters
import com.apollographql.apollo3.api.StringAdapter
import com.apollographql.apollo3.api.json.JsonReader
import com.apollographql.apollo3.api.json.JsonWriter
import com.apollographql.apollo3.api.list
import com.apollographql.apollo3.api.nullable
import com.apollographql.apollo3.api.obj
import com.makswin.fizbot.CallingCodesQuery
import kotlin.String
import kotlin.Unit
import kotlin.collections.List

public object CallingCodesQuery_ResponseAdapter {
  public object Data : Adapter<CallingCodesQuery.Data> {
    public val RESPONSE_NAMES: List<String> = listOf("calling_codes")

    public override fun fromJson(reader: JsonReader, customScalarAdapters: CustomScalarAdapters):
        CallingCodesQuery.Data {
      var calling_codes: CallingCodesQuery.Calling_codes? = null

      while(true) {
        when (reader.selectName(RESPONSE_NAMES)) {
          0 -> calling_codes = Calling_codes.obj().nullable().fromJson(reader, customScalarAdapters)
          else -> break
        }
      }

      return CallingCodesQuery.Data(
        calling_codes = calling_codes
      )
    }

    public override fun toJson(
      writer: JsonWriter,
      customScalarAdapters: CustomScalarAdapters,
      `value`: CallingCodesQuery.Data
    ): Unit {
      writer.name("calling_codes")
      Calling_codes.obj().nullable().toJson(writer, customScalarAdapters, value.calling_codes)
    }
  }

  public object Calling_codes : Adapter<CallingCodesQuery.Calling_codes> {
    public val RESPONSE_NAMES: List<String> = listOf("data")

    public override fun fromJson(reader: JsonReader, customScalarAdapters: CustomScalarAdapters):
        CallingCodesQuery.Calling_codes {
      var `data`: List<CallingCodesQuery.Data1>? = null

      while(true) {
        when (reader.selectName(RESPONSE_NAMES)) {
          0 -> `data` = Data1.obj(true).list().fromJson(reader, customScalarAdapters)
          else -> break
        }
      }

      return CallingCodesQuery.Calling_codes(
        `data` = `data`!!
      )
    }

    public override fun toJson(
      writer: JsonWriter,
      customScalarAdapters: CustomScalarAdapters,
      `value`: CallingCodesQuery.Calling_codes
    ): Unit {
      writer.name("data")
      Data1.obj(true).list().toJson(writer, customScalarAdapters, value.`data`)
    }
  }

  public object Data1 : Adapter<CallingCodesQuery.Data1> {
    public val RESPONSE_NAMES: List<String> = listOf("__typename")

    public override fun fromJson(reader: JsonReader, customScalarAdapters: CustomScalarAdapters):
        CallingCodesQuery.Data1 {
      var __typename: String? = null

      while(true) {
        when (reader.selectName(RESPONSE_NAMES)) {
          0 -> __typename = StringAdapter.fromJson(reader, customScalarAdapters)
          else -> break
        }
      }

      check(__typename != null) {
        "__typename was not found"
      }

      reader.rewind()
      val fragmentCallingCode = com.makswin.fizbot.fragment.FragmentCallingCodeImpl_ResponseAdapter.FragmentCallingCode.fromJson(reader,
          customScalarAdapters)

      return CallingCodesQuery.Data1(
        __typename = __typename,
        fragmentCallingCode = fragmentCallingCode
      )
    }

    public override fun toJson(
      writer: JsonWriter,
      customScalarAdapters: CustomScalarAdapters,
      `value`: CallingCodesQuery.Data1
    ): Unit {
      writer.name("__typename")
      StringAdapter.toJson(writer, customScalarAdapters, value.__typename)

      com.makswin.fizbot.fragment.FragmentCallingCodeImpl_ResponseAdapter.FragmentCallingCode.toJson(writer,
          customScalarAdapters, value.fragmentCallingCode)
    }
  }
}
