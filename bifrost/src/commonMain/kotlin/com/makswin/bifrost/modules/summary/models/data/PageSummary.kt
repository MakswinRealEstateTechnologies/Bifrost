package com.makswin.bifrost.modules.summary.models.data

import com.makswin.bifrost.fragment.FragmentSummary
import com.makswin.bifrost.type.Summaries

fun FragmentSummary?.getSummaryCount(type: Summaries): Int =
    this?.summary?.first { it?.key == type }?.value?.toIntOrNull() ?: 0

data class HomePageSummary(
    var buyerCount: Int = 0,
    var messageCount: Int = 0
) {

    constructor(data: FragmentSummary?) : this() {
        this.buyerCount = data.getSummaryCount(Summaries.BUYERS_COUNT)
        this.messageCount = data.getSummaryCount(Summaries.NEW_MESSAGES_COUNT)
    }

}