package com.makswin.bifrost.core

import com.apollographql.apollo3.api.http.HttpRequest
import com.apollographql.apollo3.api.http.HttpResponse
import com.apollographql.apollo3.network.http.HttpInterceptor
import com.apollographql.apollo3.network.http.HttpInterceptorChain

class AuthorizationInterceptor : HttpInterceptor {

    override suspend fun intercept(
        request: HttpRequest,
        chain: HttpInterceptorChain
    ): HttpResponse {

        val token =
            "eyJ0eXAiOiJKV1QiLCJhbGciOiJSUzI1NiJ9.eyJhdWQiOiI0IiwianRpIjoiYTRlNTNjNWFlYWMxZTBiNGMwYTUxOGU1YWE5NWFlNDJjMzQ0N2Q5MmYwYTc5ODFjZjRmMTYxNzI4NTYxMzI5OGJmYTlhMjBmMTAwOTg1YWMiLCJpYXQiOjE2NDMwOTkzMTMuMjYxNzg4LCJuYmYiOjE2NDMwOTkzMTMuMjYxNzkyLCJleHAiOjE2NDU3Nzc3MTMuMTcwMDg5LCJzdWIiOiIxMTM1NjMiLCJzY29wZXMiOltdfQ.Gl13ChjhRiEtzWGVAaKENtdqsB2a26fXLBX9Jy5qOdhyCGy1oddil-7JtAMtUb4n6XQFXeIOYHxzDtCU4b2wnG50T3m6RkmfjewVunD3HyTEi_ra6wFJnz4w6gl9908TDA4xvQDF5JQAwneFFJpPCQsKpaqWibqPGr4cYh9JUSIA5Uj8YCeAJ3TZwPMW-K-HUG8uC_As4-hOtZIUv9dryQf4NqA6p1mMvyFqcug83sOx1IkR-fGsWsrxln7Dattnd8j1ZMaCs4nzxkU3prE5NPOFI8GyEJfzFTL7HEwIzYhQ_4B7S7yaKcwDsBQdrsTMMQs2UYpjEOgnQSsvfdIlPpzpWGRpFjXLjHV-QFpVEkyparUVvpTDBR2IkdIqkAc9SgQY8ar5MtuI_d_db1UmNLWWaAdTWCApzlqLJ4IG95JAyjOuNJc4pTLWxvGRJv4kV7ywzNlR6L6QLMv4F5AmBiaSZp7pmN5UDD8UPHxe598P2dZpl_DY72ZZImpi_e_4CFdPYBuppBv665bOjsFaNl6rdKq8U41ixEzKkIOw1DNRevhiXxfrlNjLA0gn5BemfTg_sRpC6D-GF7wT_pgrJuNBPGhykYeacwbn8Brag2ck3AbX1g4Cj4bbl70WzXTh2pWnhyM5LAfPjj-2Qt7ZV_jYS7mUTHuZdVHg1Kwnf0o"

        return chain.proceed(
            request.newBuilder().addHeader("Authorization", "Bearer $token").build()
        )

    }

}