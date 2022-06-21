package com.makswin.bifrost.modules.summary

import com.makswin.bifrost.PageSummaryQuery
import com.makswin.bifrost.core.models.BaseResponseModel
import com.makswin.bifrost.core.models.ResponseStatus
import com.makswin.bifrost.core.utils.BaseRepository
import com.makswin.bifrost.fragment.FragmentSummary
import com.makswin.bifrost.modules.summary.models.data.HomePageSummary
import com.makswin.bifrost.modules.summary.models.response.HomePageSummaryResponse
import com.makswin.bifrost.type.SummaryPages

class SummaryRepository : BaseRepository() {

    suspend fun getNewMessageSummary(): BaseResponseModel<HomePageSummaryResponse> {

        val response = getPageSummary(SummaryPages.WELCOME_SCREEN)

        if (response.status == ResponseStatus.Error) return onError()

        val summary = HomePageSummary(response.data)

        return onSuccess(HomePageSummaryResponse(summary))

    }

    suspend fun getBuyersCountSummary(): BaseResponseModel<HomePageSummaryResponse> {

        val response = getPageSummary(SummaryPages.BUYER_TRACKING_LISTINGS)

        if (response.status == ResponseStatus.Error) return onError()

        val summary = HomePageSummary(response.data)

        return onSuccess(HomePageSummaryResponse(summary))

    }

    private suspend fun getPageSummary(page: SummaryPages): BaseResponseModel<FragmentSummary> {

        val query = PageSummaryQuery(page)

        val response = executeQuery(query)

        if (response.isFailed()) return onError()

        val data = response.data?.page_summary?.first()?.fragmentSummary ?: return onError()

        return onSuccess(data)

    }

}