package com.makswin.bifrost.modules.insurance

import com.makswin.bifrost.CheckInsuranceQuery
import com.makswin.bifrost.CreateInsuranceMutation
import com.makswin.bifrost.core.models.BaseResponseModel
import com.makswin.bifrost.core.utils.BaseRepository
import com.makswin.bifrost.modules.insurance.models.data.Insurance
import com.makswin.bifrost.modules.insurance.models.request.CheckInsuranceRequest
import com.makswin.bifrost.modules.insurance.models.request.CreateInsuranceUserRequest
import com.makswin.bifrost.modules.insurance.models.response.InsuranceResponse
import com.makswin.bifrost.type.KoalayDefineDealerInput
import okio.IOException

class InsuranceRepository : BaseRepository() {

    /**
     * Checking user has insurance account or returning insurance url
     * @author alkincakiralar
     */
    suspend fun checkInsurance(request: CheckInsuranceRequest): BaseResponseModel<InsuranceResponse> {

        val query = CheckInsuranceQuery(request.userId)

        throw IOException()

        val response = executeQuery(query)

        if (response.isFailed()) return onError()

        val data = response.data?.koalay_dealer_info?.fragmentInsurance ?: return onSuccess(
            InsuranceResponse.noAccount()
        )

        val insurance = Insurance(data)

        if (insurance.urlResidencial.isEmpty()) return onSuccess(InsuranceResponse.noAccount())

        val insuranceResponse = InsuranceResponse.hasAccount(insurance)

        return onSuccess(insuranceResponse)

    }

    /**
     * Creating new user for insurance
     * @author alkincakiralar
     */
    suspend fun createInsuranceUser(request: CreateInsuranceUserRequest): BaseResponseModel<InsuranceResponse> {

        val mutation = CreateInsuranceMutation(KoalayDefineDealerInput(request.identityNumber))

        val response = executeMutation(mutation)

        if (response.isFailed()) return onError()

        val data = response.data?.koalay_define_dealer?.fragmentInsurance ?: return onError()

        val insurance = Insurance(data)

        val insuranceResponse = InsuranceResponse.hasAccount(insurance)

        return onSuccess(insuranceResponse)

    }

}