package com.makswin.bifrost.utils

import com.soywiz.klock.DateFormat
import com.soywiz.klock.DateTime
import com.soywiz.klock.parse

enum class DateFormatType(val value: String) {
    yyyy__MM__dd_HH_mm_ss("yyyy-MM-dd HH:mm:ss"),
    dd_MMMM_yyyy("dd MMMM yyyy"),
    dd_MMMM_yy("dd MMMM yy"),
    HH_mm("HH:mm"),
    api_format(DateHelper.apiDateFormatType)
}

class DateHelper {

    companion object {

        const val apiDateFormatType = "yyyy-MM-dd HH:mm:ss"

        fun getCurrentDate(format: DateFormatType): String =
            DateTime.now().format(DateFormat(format.value))

        fun parseDate(date: String, format: DateFormatType): String =
            DateFormat(apiDateFormatType).parse(date).format(format.value)

    }

}