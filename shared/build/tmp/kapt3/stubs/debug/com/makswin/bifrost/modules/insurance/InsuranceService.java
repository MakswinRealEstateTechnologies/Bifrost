package com.makswin.bifrost.modules.insurance;

import java.lang.System;

@kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\u0018\u00002\u00020\u0001B\u0005\u00a2\u0006\u0002\u0010\u0002J*\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u001a\u0010\u0007\u001a\u0016\u0012\u0004\u0012\u00020\t\u0012\u0006\u0012\u0004\u0018\u00010\n\u0012\u0004\u0012\u00020\u00040\bJ\"\u0010\u000b\u001a\u00020\u00042\u0006\u0010\f\u001a\u00020\u00062\u0012\u0010\u0007\u001a\u000e\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u00020\u00040\r\u00a8\u0006\u000e"}, d2 = {"Lcom/makswin/bifrost/modules/insurance/InsuranceService;", "Lcom/makswin/bifrost/core/BaseService;", "()V", "checkInsurance", "", "userId", "", "completion", "Lkotlin/Function2;", "Lcom/makswin/bifrost/enums/ResponseType;", "Lcom/makswin/bifrost/modules/insurance/responseModels/InsuranceModel;", "createInsuranceUser", "identityNumber", "Lkotlin/Function1;", "shared_debug"})
public final class InsuranceService extends com.makswin.bifrost.core.BaseService {
    
    public InsuranceService() {
        super();
    }
    
    /**
     * @author alkincakiralar
     */
    public final void checkInsurance(@org.jetbrains.annotations.NotNull()
    java.lang.String userId, @org.jetbrains.annotations.NotNull()
    kotlin.jvm.functions.Function2<? super com.makswin.bifrost.enums.ResponseType, ? super com.makswin.bifrost.modules.insurance.responseModels.InsuranceModel, kotlin.Unit> completion) {
    }
    
    /**
     * @author alkincakiralar
     */
    public final void createInsuranceUser(@org.jetbrains.annotations.NotNull()
    java.lang.String identityNumber, @org.jetbrains.annotations.NotNull()
    kotlin.jvm.functions.Function1<? super com.makswin.bifrost.enums.ResponseType, kotlin.Unit> completion) {
    }
}