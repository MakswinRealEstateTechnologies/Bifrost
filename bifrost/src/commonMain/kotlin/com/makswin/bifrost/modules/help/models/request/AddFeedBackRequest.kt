package com.makswin.bifrost.modules.help.models.request

import com.makswin.bifrost.modules.help.models.request.enums.AddFeedBackType

data class AddFeedBackRequest(val type: AddFeedBackType, val note: String)