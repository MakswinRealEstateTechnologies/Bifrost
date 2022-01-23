package com.makswin.bifrost.core

import com.apollographql.apollo3.api.http.HttpRequest
import com.apollographql.apollo3.api.http.HttpResponse
import com.apollographql.apollo3.network.http.HttpInterceptor
import com.apollographql.apollo3.network.http.HttpInterceptorChain

class AuthorizationInterceptor() : HttpInterceptor {

    override suspend fun intercept(
        request: HttpRequest,
        chain: HttpInterceptorChain
    ): HttpResponse {

        val token =
            "eyJ0eXAiOiJKV1QiLCJhbGciOiJSUzI1NiJ9.eyJhdWQiOiI0IiwianRpIjoiMTQwOGQ5N2U2ZjMwMzlhODFiM2FkOGIwNmU4NThkYWExYjg3NzYwNTE3ZGJiOGRiNjUxYTVkMDQ3OTBkNmNiY2E0MTRmNWFkMDZmYjZhNDIiLCJpYXQiOjE2NDI5NzIzNDEuNDM1OTkzLCJuYmYiOjE2NDI5NzIzNDEuNDM1OTk3LCJleHAiOjE2NDU2NTA3NDEuMzM4MjkxLCJzdWIiOiIxMTM1NjMiLCJzY29wZXMiOltdfQ.gJdHX60LjPTTIQ2hTgfmh5P9HBeNtioV_h5PFaTPZC9icNoYfHjEw6L__yLKA5TE3vWYT-K2C1JVjJv_UO09kDH5v01uMiHquZxXyuDPldpzjC98M8VSHW-IejAZdwp9YOAmVNk6tB3i3Ns6BKJspO7qJrYGD4S48gTND0-4zK5oSvJjTalaFApA_aB2fNuyS_k2E05mo3SMLB-rf3Qrmi9vf9HXX1Xas4znOR6q7BIcBD7PSZKF1Cx5rH5F_mtIJuIsQWCLMn_7YnS6zZlrpWb5DtKGZRVF8EB5smE2wCBfoVS_C9DL_X44EaIsJPw9FbqG9mHIBpGCrDS9R6xyNG8o3DCijp7O1cZFm03a_eNZFi0UMtMorTKfR-iEbIO6gPR-8F_CqBbpTSMToQKTwmt60WbZ9vIt9qcQK5SwwmD08IAoX-htBXKAMmix_P9xe8L80wlys_ExC1sqIE5AAT_c741VESjwf5LOIYFvPPxgPd3PfIWB35F4Vi4b4_fzdeC4acsUD8uvzJHBG3LaogjrTe0RMI5pgpKSgqCn-KXqgtfQ-Oe9sGFWTZT1JdYgOl-zSidt631uUOafOpSxRhEdoV_rdM03HEc6AnGn5DMuOM6uLY3WIaPvXXeMIWYAlF6W0DFyTuv8ts9MRhO8HylW5UrXvIi5v1VXMHiRg4w"

        return chain.proceed(
            request.newBuilder().addHeader("Authorization", "Bearer $token").build()
        )

    }

}