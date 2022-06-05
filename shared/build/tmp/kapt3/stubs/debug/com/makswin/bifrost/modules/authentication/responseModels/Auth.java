package com.makswin.bifrost.modules.authentication.responseModels;

import java.lang.System;

@kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0015\n\u0002\u0010\u000b\n\u0002\b\u0004\b\u0086\b\u0018\u00002\u00020\u0001B\u000f\b\u0016\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u00a2\u0006\u0002\u0010\u0004B-\u0012\b\b\u0002\u0010\u0005\u001a\u00020\u0006\u0012\b\b\u0002\u0010\u0007\u001a\u00020\u0006\u0012\b\b\u0002\u0010\b\u001a\u00020\t\u0012\b\b\u0002\u0010\n\u001a\u00020\u000b\u00a2\u0006\u0002\u0010\fJ\t\u0010\u001b\u001a\u00020\u0006H\u00c6\u0003J\t\u0010\u001c\u001a\u00020\u0006H\u00c6\u0003J\t\u0010\u001d\u001a\u00020\tH\u00c6\u0003J\t\u0010\u001e\u001a\u00020\u000bH\u00c6\u0003J1\u0010\u001f\u001a\u00020\u00002\b\b\u0002\u0010\u0005\u001a\u00020\u00062\b\b\u0002\u0010\u0007\u001a\u00020\u00062\b\b\u0002\u0010\b\u001a\u00020\t2\b\b\u0002\u0010\n\u001a\u00020\u000bH\u00c6\u0001J\u0013\u0010 \u001a\u00020!2\b\u0010\"\u001a\u0004\u0018\u00010\u0001H\u00d6\u0003J\t\u0010#\u001a\u00020\tH\u00d6\u0001J\t\u0010$\u001a\u00020\u0006H\u00d6\u0001R\u001a\u0010\u0005\u001a\u00020\u0006X\u0086\u000e\u00a2\u0006\u000e\n\u0000\u001a\u0004\b\r\u0010\u000e\"\u0004\b\u000f\u0010\u0010R\u001a\u0010\b\u001a\u00020\tX\u0086\u000e\u00a2\u0006\u000e\n\u0000\u001a\u0004\b\u0011\u0010\u0012\"\u0004\b\u0013\u0010\u0014R\u001a\u0010\u0007\u001a\u00020\u0006X\u0086\u000e\u00a2\u0006\u000e\n\u0000\u001a\u0004\b\u0015\u0010\u000e\"\u0004\b\u0016\u0010\u0010R\u001a\u0010\n\u001a\u00020\u000bX\u0086\u000e\u00a2\u0006\u000e\n\u0000\u001a\u0004\b\u0017\u0010\u0018\"\u0004\b\u0019\u0010\u001a\u00a8\u0006%"}, d2 = {"Lcom/makswin/bifrost/modules/authentication/responseModels/Auth;", "", "data", "Lcom/makswin/fizbot/fragment/FragmentAuth;", "(Lcom/makswin/fizbot/fragment/FragmentAuth;)V", "accessToken", "", "refreshToken", "expiresIn", "", "user", "Lcom/makswin/bifrost/modules/authentication/responseModels/User;", "(Ljava/lang/String;Ljava/lang/String;ILcom/makswin/bifrost/modules/authentication/responseModels/User;)V", "getAccessToken", "()Ljava/lang/String;", "setAccessToken", "(Ljava/lang/String;)V", "getExpiresIn", "()I", "setExpiresIn", "(I)V", "getRefreshToken", "setRefreshToken", "getUser", "()Lcom/makswin/bifrost/modules/authentication/responseModels/User;", "setUser", "(Lcom/makswin/bifrost/modules/authentication/responseModels/User;)V", "component1", "component2", "component3", "component4", "copy", "equals", "", "other", "hashCode", "toString", "shared_debug"})
public final class Auth {
    @org.jetbrains.annotations.NotNull()
    private java.lang.String accessToken;
    @org.jetbrains.annotations.NotNull()
    private java.lang.String refreshToken;
    private int expiresIn;
    @org.jetbrains.annotations.NotNull()
    private com.makswin.bifrost.modules.authentication.responseModels.User user;
    
    @org.jetbrains.annotations.NotNull()
    public final com.makswin.bifrost.modules.authentication.responseModels.Auth copy(@org.jetbrains.annotations.NotNull()
    java.lang.String accessToken, @org.jetbrains.annotations.NotNull()
    java.lang.String refreshToken, int expiresIn, @org.jetbrains.annotations.NotNull()
    com.makswin.bifrost.modules.authentication.responseModels.User user) {
        return null;
    }
    
    @java.lang.Override()
    public boolean equals(@org.jetbrains.annotations.Nullable()
    java.lang.Object other) {
        return false;
    }
    
    @java.lang.Override()
    public int hashCode() {
        return 0;
    }
    
    @org.jetbrains.annotations.NotNull()
    @java.lang.Override()
    public java.lang.String toString() {
        return null;
    }
    
    public Auth() {
        super();
    }
    
    public Auth(@org.jetbrains.annotations.NotNull()
    java.lang.String accessToken, @org.jetbrains.annotations.NotNull()
    java.lang.String refreshToken, int expiresIn, @org.jetbrains.annotations.NotNull()
    com.makswin.bifrost.modules.authentication.responseModels.User user) {
        super();
    }
    
    @org.jetbrains.annotations.NotNull()
    public final java.lang.String component1() {
        return null;
    }
    
    @org.jetbrains.annotations.NotNull()
    public final java.lang.String getAccessToken() {
        return null;
    }
    
    public final void setAccessToken(@org.jetbrains.annotations.NotNull()
    java.lang.String p0) {
    }
    
    @org.jetbrains.annotations.NotNull()
    public final java.lang.String component2() {
        return null;
    }
    
    @org.jetbrains.annotations.NotNull()
    public final java.lang.String getRefreshToken() {
        return null;
    }
    
    public final void setRefreshToken(@org.jetbrains.annotations.NotNull()
    java.lang.String p0) {
    }
    
    public final int component3() {
        return 0;
    }
    
    public final int getExpiresIn() {
        return 0;
    }
    
    public final void setExpiresIn(int p0) {
    }
    
    @org.jetbrains.annotations.NotNull()
    public final com.makswin.bifrost.modules.authentication.responseModels.User component4() {
        return null;
    }
    
    @org.jetbrains.annotations.NotNull()
    public final com.makswin.bifrost.modules.authentication.responseModels.User getUser() {
        return null;
    }
    
    public final void setUser(@org.jetbrains.annotations.NotNull()
    com.makswin.bifrost.modules.authentication.responseModels.User p0) {
    }
    
    public Auth(@org.jetbrains.annotations.NotNull()
    com.makswin.fizbot.fragment.FragmentAuth data) {
        super();
    }
}