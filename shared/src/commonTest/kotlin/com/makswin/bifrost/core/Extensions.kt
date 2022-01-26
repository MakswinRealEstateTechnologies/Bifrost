package com.makswin.bifrost.core

import com.makswin.bifrost.enums.ResponseType

fun ResponseType.isFailed(): Boolean {
    return this == ResponseType.Error
}