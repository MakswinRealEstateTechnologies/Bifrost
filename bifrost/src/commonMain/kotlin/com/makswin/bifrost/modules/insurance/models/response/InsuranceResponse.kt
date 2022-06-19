package com.makswin.bifrost.modules.insurance.models.response

import com.makswin.bifrost.modules.insurance.models.data.Insurance

class InsuranceResponse(
    val hasAccount: Boolean,
    val insurance: Insurance
) {

    companion object {

        fun hasAccount(insurance: Insurance): InsuranceResponse =
            InsuranceResponse(true, insurance)

        fun noAccount(): InsuranceResponse = InsuranceResponse(false, Insurance())

    }

}
