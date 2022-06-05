package com.makswin.bifrost.modules.misc

import com.makswin.bifrost.core.BaseService
import com.makswin.bifrost.enums.ResponseType
import com.makswin.fizbot.LanguagesQuery
import com.makswin.fizbot.fragment.FragmentLanguage
import kotlinx.coroutines.launch

data class Language(val id: Int, val key: String, val value: String)

fun FragmentLanguage.convertFragment(): Language = Language(id.toInt(), key ?: "", value ?: "")


open class BasePaginatorModel(var page: Int = 0, var skip: Int = 20)

class LanguageResponseModel(var languages: List<Language>) : BasePaginatorModel()

data class ResponseModel<T : Any?>(val status: ResponseType, val data: T?)


class MiscService : BaseService() {

    suspend fun getLanguages(): ResponseModel<LanguageResponseModel> {

        val executer = executeQuery(LanguagesQuery())

        if (!checkQueryResponse(executer)) return onError()

        val data = executer.data?.languages?.data

        if (data.isNullOrEmpty()) return onError()

        val languages = data.map { it.fragmentLanguage.convertFragment() }

        val response = LanguageResponseModel(languages)

        return onSuccess(response)

    }

}

