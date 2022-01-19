package com.makswin.bifrost.services

import com.makswin.bifrost.core.BaseService
import com.makswin.bifrost.models.CallingCode
import com.makswin.bifrost.enums.ResponseType

class MiscService : BaseService() {

    fun getCallingCodes(
        completion: (ResponseType, List<CallingCode>) -> Unit
    ) {

        /*val response = executeQuery(CallingCodesQuery())

        if (!checkResponse(response)) {
            completion(ResponseType.Error, listOf())
            return
        }

        val data = arrayListOf<CallingCode>()

        response.data?.calling_codes?.data?.forEach {
            data.add(CallingCode(it.fragmentCallingCode))
        }

        */

        completion(ResponseType.Success, arrayListOf(CallingCode()))

    }

    fun test() {

        print("TEST")

    }

}