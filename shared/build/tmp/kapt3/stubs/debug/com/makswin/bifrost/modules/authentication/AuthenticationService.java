package com.makswin.bifrost.modules.authentication;

import java.lang.System;

@kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\u0018\u00002\u00020\u0001B\u0005\u00a2\u0006\u0002\u0010\u0002J\u000e\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006J\"\u0010\u0007\u001a\u00020\u00042\u0006\u0010\b\u001a\u00020\t2\u0012\u0010\n\u001a\u000e\u0012\u0004\u0012\u00020\f\u0012\u0004\u0012\u00020\u00040\u000bJ*\u0010\r\u001a\u00020\u00042\u0006\u0010\b\u001a\u00020\t2\u001a\u0010\n\u001a\u0016\u0012\u0004\u0012\u00020\f\u0012\u0006\u0012\u0004\u0018\u00010\u000f\u0012\u0004\u0012\u00020\u00040\u000e\u00a8\u0006\u0010"}, d2 = {"Lcom/makswin/bifrost/modules/authentication/AuthenticationService;", "Lcom/makswin/bifrost/core/BaseService;", "()V", "configureToken", "", "token", "", "forgotPasswordOTP", "input", "Lcom/makswin/bifrost/modules/authentication/requestModels/Login;", "completion", "Lkotlin/Function1;", "Lcom/makswin/bifrost/enums/ResponseType;", "login", "Lkotlin/Function2;", "Lcom/makswin/bifrost/modules/authentication/responseModels/Auth;", "shared_debug"})
public final class AuthenticationService extends com.makswin.bifrost.core.BaseService {
    
    public AuthenticationService() {
        super();
    }
    
    /**
     * Stores the user current token
     * after the bifrost migration complete, this method will be deprecated.
     * @param token is user current API token
     * @author alkincakiralar
     */
    public final void configureToken(@org.jetbrains.annotations.NotNull()
    java.lang.String token) {
    }
    
    /**
     * Generates sms code for user who wants to login
     * @param input has login parameters
     * @author alkincakiralar
     */
    public final void forgotPasswordOTP(@org.jetbrains.annotations.NotNull()
    com.makswin.bifrost.modules.authentication.requestModels.Login input, @org.jetbrains.annotations.NotNull()
    kotlin.jvm.functions.Function1<? super com.makswin.bifrost.enums.ResponseType, kotlin.Unit> completion) {
    }
    
    /**
     * Used to login with sms code
     * @param input has login parameters
     * @return The user model has logged in
     * @author alkincakiralar
     */
    public final void login(@org.jetbrains.annotations.NotNull()
    com.makswin.bifrost.modules.authentication.requestModels.Login input, @org.jetbrains.annotations.NotNull()
    kotlin.jvm.functions.Function2<? super com.makswin.bifrost.enums.ResponseType, ? super com.makswin.bifrost.modules.authentication.responseModels.Auth, kotlin.Unit> completion) {
    }
}