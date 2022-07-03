package com.makswin.bifrost.core.utils

import com.russhwolf.settings.Settings

class LocalStorage(private val settings: Settings = Settings()) {

    fun getToken(): String = settings.getString("token", "")

    fun setToken(token: String) = settings.putString("token", token)

    fun setUserId(userId: Int) = settings.putInt("userId", userId)

    fun getUserId() = settings.getInt("userId", -1)

    fun getCellPhone(): String = settings.getString("cellPhone", "")

    fun setCellPhone(cellPhone: String) = settings.putString("cellPhone", cellPhone)

}