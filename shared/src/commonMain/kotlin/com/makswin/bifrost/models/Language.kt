package com.makswin.bifrost.models

import com.makswin.fizbot.fragment.FragmentLanguage

data class Language(
    var id: Int = -1,
    var value: String = "",
    var description: String = "",
    var key: String = ""
) {

    constructor(data: FragmentLanguage?) : this() {
        id = data?.id?.toInt() ?: -1
        value = data?.value ?: ""
        description = data?.description ?: ""
        key = data?.key ?: ""
    }

}