package com.makswin.bifrost.models

import com.makswin.fizbot.fragment.FragmentCallingCode

data class CallingCode(var id: Int = -1,
                       var countryCode: String = "",
                       var countryName: String = "",
                       var flag: String = "",
                       var value: String = "") {

    constructor(data: FragmentCallingCode?) : this() {
        id = data?.id?.toInt() ?: -1
        countryCode = data?.value ?: ""
        countryName = data?.description ?: ""
        value = data?.key ?: ""
        flag = data?.flag ?: ""
    }

}