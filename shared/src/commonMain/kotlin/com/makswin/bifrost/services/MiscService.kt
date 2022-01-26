package com.makswin.bifrost.services

import com.makswin.bifrost.core.BaseService
import com.makswin.bifrost.models.CallingCode
import com.makswin.bifrost.enums.ResponseType
import com.makswin.bifrost.models.Language
import com.makswin.fizbot.CallingCodesQuery
import com.makswin.fizbot.LanguagesQuery
import kotlinx.coroutines.*

class MiscService : BaseService() {

    fun getCallingCodes(completion: (ResponseType, List<CallingCode>) -> Unit) = runBlocking {

        val response = executeQuery(CallingCodesQuery())

        if (!checkResponse(response)) {
            completion(ResponseType.Error, listOf())
            return@runBlocking
        }

        val data = arrayListOf<CallingCode>()

        response.data?.calling_codes?.data?.forEach { data.add(CallingCode(it.fragmentCallingCode)) }

        completion(ResponseType.Success, data)

    }

    fun getLanguages(completion: (ResponseType, List<Language>) -> Unit) = runBlocking {

        val response = executeQuery(LanguagesQuery())

        if (!checkResponse(response)) {
            completion(ResponseType.Error, listOf())
            return@runBlocking
        }

        val data = arrayListOf<Language>()

        response.data?.languages?.data?.forEach { data.add(Language(it.fragmentLanguage)) }

        completion(ResponseType.Success, data)

    }

}