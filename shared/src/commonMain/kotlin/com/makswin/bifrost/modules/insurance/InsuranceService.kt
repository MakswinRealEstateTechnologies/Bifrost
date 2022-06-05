package com.makswin.bifrost.modules.insurance

import com.makswin.bifrost.core.BaseService
import com.makswin.bifrost.enums.ResponseType
import com.makswin.bifrost.modules.insurance.responseModels.InsuranceModel
import com.makswin.fizbot.CheckInsuranceQuery
import com.makswin.fizbot.CreateInsuranceMutation
import com.makswin.fizbot.type.KoalayDefineDealerInput
import kotlinx.coroutines.launch

class AntiService : BaseService() {

    fun testIUnit() {

    }

    fun testIUni2t() {

    }

}

class InsuranceService : BaseService() {

    /**
     *
     * @author alkincakiralar
     */
    fun checkInsurance(userId: String, completion: (ResponseType, InsuranceModel?) -> Unit) {

        scope.launch {

            val query = CheckInsuranceQuery(userId)

            val response = executeQuery(query)

            if (!checkQueryResponse(response)) {
                completion(ResponseType.Error, null)
                return@launch
            }

            val data = response.data?.koalay_dealer_info?.fragmentInsurance

            if (data == null) {
                completion(ResponseType.Error, null)
                return@launch
            }

            val insurance = InsuranceModel(data)

            if (insurance.urlResidencial.isEmpty()) {
                completion(ResponseType.Error, null)
                return@launch
            }

            completion(ResponseType.Success, insurance)

        }

    }

    /**
     *
     * @author alkincakiralar
     */
    fun createInsuranceUser(identityNumber: String, completion: (ResponseType) -> Unit) {

        scope.launch {

            val input = KoalayDefineDealerInput(identityNumber)

            val mutation = CreateInsuranceMutation(input)

            val response = executeMutation(mutation)

            if (!checkMutationResponse(response)) {
                completion(ResponseType.Error)
                return@launch
            }

            val data = response.data?.koalay_define_dealer?.fragmentInsurance

            if (data == null) {
                completion(ResponseType.Error)
                return@launch
            }

            completion(ResponseType.Success)

        }

    }

}