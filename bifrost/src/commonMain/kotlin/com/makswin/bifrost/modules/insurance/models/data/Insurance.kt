package com.makswin.bifrost.modules.insurance.models.data

import com.makswin.bifrost.fragment.FragmentInsurance

data class Insurance(
    var urlDask: String = "",
    var urlResidencial: String = ""
) {

    constructor(data: FragmentInsurance) : this() {
        this.urlDask = data.url_dask ?: ""
        this.urlResidencial = data.url_konut ?: ""
    }

}