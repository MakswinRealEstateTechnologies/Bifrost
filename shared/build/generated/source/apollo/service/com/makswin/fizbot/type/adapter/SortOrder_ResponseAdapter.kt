//
// AUTO-GENERATED FILE. DO NOT MODIFY.
//
// This class was automatically generated by Apollo GraphQL version '3.3.0'.
//
package com.makswin.fizbot.type.adapter

import com.apollographql.apollo3.api.Adapter
import com.apollographql.apollo3.api.CustomScalarAdapters
import com.apollographql.apollo3.api.json.JsonReader
import com.apollographql.apollo3.api.json.JsonWriter
import com.makswin.fizbot.type.SortOrder
import kotlin.Unit

public object SortOrder_ResponseAdapter : Adapter<SortOrder> {
  public override fun fromJson(reader: JsonReader, customScalarAdapters: CustomScalarAdapters):
      SortOrder {
    val rawValue = reader.nextString()!!
    return SortOrder.safeValueOf(rawValue)
  }

  public override fun toJson(
    writer: JsonWriter,
    customScalarAdapters: CustomScalarAdapters,
    `value`: SortOrder,
  ): Unit {
    writer.value(value.rawValue)
  }
}
