package com.makswin.fizbot;

import java.lang.System;

@kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u0000L\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\b\u0086\b\u0018\u0000 !2\b\u0012\u0004\u0012\u00020\u00020\u0001:\u0003!\"#B\u0015\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\u0006\u0010\u0005\u001a\u00020\u0004\u00a2\u0006\u0002\u0010\u0006J\u000e\u0010\n\u001a\b\u0012\u0004\u0012\u00020\u00020\u000bH\u0016J\t\u0010\f\u001a\u00020\u0004H\u00c6\u0003J\t\u0010\r\u001a\u00020\u0004H\u00c6\u0003J\u001d\u0010\u000e\u001a\u00020\u00002\b\b\u0002\u0010\u0003\u001a\u00020\u00042\b\b\u0002\u0010\u0005\u001a\u00020\u0004H\u00c6\u0001J\b\u0010\u000f\u001a\u00020\u0004H\u0016J\u0013\u0010\u0010\u001a\u00020\u00112\b\u0010\u0012\u001a\u0004\u0018\u00010\u0013H\u00d6\u0003J\t\u0010\u0014\u001a\u00020\u0015H\u00d6\u0001J\b\u0010\u0016\u001a\u00020\u0004H\u0016J\b\u0010\u0017\u001a\u00020\u0004H\u0016J\b\u0010\u0018\u001a\u00020\u0019H\u0016J\u0018\u0010\u001a\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u001d2\u0006\u0010\u001e\u001a\u00020\u001fH\u0016J\t\u0010 \u001a\u00020\u0004H\u00d6\u0001R\u0011\u0010\u0003\u001a\u00020\u0004\u00a2\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u0011\u0010\u0005\u001a\u00020\u0004\u00a2\u0006\b\n\u0000\u001a\u0004\b\t\u0010\b\u00a8\u0006$"}, d2 = {"Lcom/makswin/fizbot/LoginMutation;", "Lcom/apollographql/apollo3/api/Mutation;", "Lcom/makswin/fizbot/LoginMutation$Data;", "cellPhone", "", "password", "(Ljava/lang/String;Ljava/lang/String;)V", "getCellPhone", "()Ljava/lang/String;", "getPassword", "adapter", "Lcom/apollographql/apollo3/api/Adapter;", "component1", "component2", "copy", "document", "equals", "", "other", "", "hashCode", "", "id", "name", "rootField", "Lcom/apollographql/apollo3/api/CompiledField;", "serializeVariables", "", "writer", "Lcom/apollographql/apollo3/api/json/JsonWriter;", "customScalarAdapters", "Lcom/apollographql/apollo3/api/CustomScalarAdapters;", "toString", "Companion", "Data", "Login", "shared_debug"})
public final class LoginMutation implements com.apollographql.apollo3.api.Mutation<com.makswin.fizbot.LoginMutation.Data> {
    @org.jetbrains.annotations.NotNull()
    private final java.lang.String cellPhone = null;
    @org.jetbrains.annotations.NotNull()
    private final java.lang.String password = null;
    @org.jetbrains.annotations.NotNull()
    public static final com.makswin.fizbot.LoginMutation.Companion Companion = null;
    @org.jetbrains.annotations.NotNull()
    public static final java.lang.String OPERATION_ID = "fb0bd5c8eca155662a0faabb0883e3fa6fffdcc4f37f52b68e1d3e6582e86671";
    
    /**
     * The minimized GraphQL document being sent to the server to save a few bytes.
     * The un-minimized version is:
     *
     * mutation login($cellPhone: String!, $password: String!) {
     *  login(input: {
     *    password: $password
     *    username: $cellPhone
     *  }
     *  ) {
     *    __typename
     *    ...fragmentAuth
     *  }
     * }
     *
     * fragment fragmentUser on User {
     *  id
     *  full_name
     *  cell_phone
     *  country_code
     *  payment_url
     *  avatarThumb
     *  email
     *  login_fizbot_agent
     * }
     *
     * fragment fragmentAuth on AuthPayload {
     *  access_token
     *  refresh_token
     *  expires_in
     *  user {
     *    __typename
     *    ...fragmentUser
     *  }
     * }
     */
    @org.jetbrains.annotations.NotNull()
    public static final java.lang.String OPERATION_DOCUMENT = "mutation login($cellPhone: String!, $password: String!) { login(input: { password: $password username: $cellPhone } ) { __typename ...fragmentAuth } }  fragment fragmentUser on User { id full_name cell_phone country_code payment_url avatarThumb email login_fizbot_agent }  fragment fragmentAuth on AuthPayload { access_token refresh_token expires_in user { __typename ...fragmentUser } }";
    @org.jetbrains.annotations.NotNull()
    public static final java.lang.String OPERATION_NAME = "login";
    
    @org.jetbrains.annotations.NotNull()
    public final com.makswin.fizbot.LoginMutation copy(@org.jetbrains.annotations.NotNull()
    java.lang.String cellPhone, @org.jetbrains.annotations.NotNull()
    java.lang.String password) {
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
    
    public LoginMutation(@org.jetbrains.annotations.NotNull()
    java.lang.String cellPhone, @org.jetbrains.annotations.NotNull()
    java.lang.String password) {
        super();
    }
    
    @org.jetbrains.annotations.NotNull()
    public final java.lang.String component1() {
        return null;
    }
    
    @org.jetbrains.annotations.NotNull()
    public final java.lang.String getCellPhone() {
        return null;
    }
    
    @org.jetbrains.annotations.NotNull()
    public final java.lang.String component2() {
        return null;
    }
    
    @org.jetbrains.annotations.NotNull()
    public final java.lang.String getPassword() {
        return null;
    }
    
    @org.jetbrains.annotations.NotNull()
    @java.lang.Override()
    public java.lang.String id() {
        return null;
    }
    
    @org.jetbrains.annotations.NotNull()
    @java.lang.Override()
    public java.lang.String document() {
        return null;
    }
    
    @org.jetbrains.annotations.NotNull()
    @java.lang.Override()
    public java.lang.String name() {
        return null;
    }
    
    @java.lang.Override()
    public void serializeVariables(@org.jetbrains.annotations.NotNull()
    com.apollographql.apollo3.api.json.JsonWriter writer, @org.jetbrains.annotations.NotNull()
    com.apollographql.apollo3.api.CustomScalarAdapters customScalarAdapters) {
    }
    
    @org.jetbrains.annotations.NotNull()
    @java.lang.Override()
    public com.apollographql.apollo3.api.Adapter<com.makswin.fizbot.LoginMutation.Data> adapter() {
        return null;
    }
    
    @org.jetbrains.annotations.NotNull()
    @java.lang.Override()
    public com.apollographql.apollo3.api.CompiledField rootField() {
        return null;
    }
    
    @kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\b\u0018\u00002\u00020\u0001B\r\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u00a2\u0006\u0002\u0010\u0004J\t\u0010\u0007\u001a\u00020\u0003H\u00c6\u0003J\u0013\u0010\b\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u0003H\u00c6\u0001J\u0013\u0010\t\u001a\u00020\n2\b\u0010\u000b\u001a\u0004\u0018\u00010\fH\u00d6\u0003J\t\u0010\r\u001a\u00020\u000eH\u00d6\u0001J\t\u0010\u000f\u001a\u00020\u0010H\u00d6\u0001R\u0011\u0010\u0002\u001a\u00020\u0003\u00a2\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006\u00a8\u0006\u0011"}, d2 = {"Lcom/makswin/fizbot/LoginMutation$Data;", "Lcom/apollographql/apollo3/api/Mutation$Data;", "login", "Lcom/makswin/fizbot/LoginMutation$Login;", "(Lcom/makswin/fizbot/LoginMutation$Login;)V", "getLogin", "()Lcom/makswin/fizbot/LoginMutation$Login;", "component1", "copy", "equals", "", "other", "", "hashCode", "", "toString", "", "shared_debug"})
    public static final class Data implements com.apollographql.apollo3.api.Mutation.Data {
        @org.jetbrains.annotations.NotNull()
        private final com.makswin.fizbot.LoginMutation.Login login = null;
        
        @org.jetbrains.annotations.NotNull()
        public final com.makswin.fizbot.LoginMutation.Data copy(@org.jetbrains.annotations.NotNull()
        com.makswin.fizbot.LoginMutation.Login login) {
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
        
        public Data(@org.jetbrains.annotations.NotNull()
        com.makswin.fizbot.LoginMutation.Login login) {
            super();
        }
        
        @org.jetbrains.annotations.NotNull()
        public final com.makswin.fizbot.LoginMutation.Login component1() {
            return null;
        }
        
        @org.jetbrains.annotations.NotNull()
        public final com.makswin.fizbot.LoginMutation.Login getLogin() {
            return null;
        }
    }
    
    @kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\b\u0018\u00002\u00020\u0001B\u0015\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u00a2\u0006\u0002\u0010\u0006J\t\u0010\u000b\u001a\u00020\u0003H\u00c6\u0003J\t\u0010\f\u001a\u00020\u0005H\u00c6\u0003J\u001d\u0010\r\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u0005H\u00c6\u0001J\u0013\u0010\u000e\u001a\u00020\u000f2\b\u0010\u0010\u001a\u0004\u0018\u00010\u0001H\u00d6\u0003J\t\u0010\u0011\u001a\u00020\u0012H\u00d6\u0001J\t\u0010\u0013\u001a\u00020\u0003H\u00d6\u0001R\u0011\u0010\u0002\u001a\u00020\u0003\u00a2\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u0011\u0010\u0004\u001a\u00020\u0005\u00a2\u0006\b\n\u0000\u001a\u0004\b\t\u0010\n\u00a8\u0006\u0014"}, d2 = {"Lcom/makswin/fizbot/LoginMutation$Login;", "", "__typename", "", "fragmentAuth", "Lcom/makswin/fizbot/fragment/FragmentAuth;", "(Ljava/lang/String;Lcom/makswin/fizbot/fragment/FragmentAuth;)V", "get__typename", "()Ljava/lang/String;", "getFragmentAuth", "()Lcom/makswin/fizbot/fragment/FragmentAuth;", "component1", "component2", "copy", "equals", "", "other", "hashCode", "", "toString", "shared_debug"})
    public static final class Login {
        @org.jetbrains.annotations.NotNull()
        private final java.lang.String __typename = null;
        
        /**
         * Synthetic field for 'fragmentAuth'
         */
        @org.jetbrains.annotations.NotNull()
        private final com.makswin.fizbot.fragment.FragmentAuth fragmentAuth = null;
        
        @org.jetbrains.annotations.NotNull()
        public final com.makswin.fizbot.LoginMutation.Login copy(@org.jetbrains.annotations.NotNull()
        java.lang.String __typename, @org.jetbrains.annotations.NotNull()
        com.makswin.fizbot.fragment.FragmentAuth fragmentAuth) {
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
        
        public Login(@org.jetbrains.annotations.NotNull()
        java.lang.String __typename, @org.jetbrains.annotations.NotNull()
        com.makswin.fizbot.fragment.FragmentAuth fragmentAuth) {
            super();
        }
        
        @org.jetbrains.annotations.NotNull()
        public final java.lang.String component1() {
            return null;
        }
        
        @org.jetbrains.annotations.NotNull()
        public final java.lang.String get__typename() {
            return null;
        }
        
        /**
         * Synthetic field for 'fragmentAuth'
         */
        @org.jetbrains.annotations.NotNull()
        public final com.makswin.fizbot.fragment.FragmentAuth component2() {
            return null;
        }
        
        /**
         * Synthetic field for 'fragmentAuth'
         */
        @org.jetbrains.annotations.NotNull()
        public final com.makswin.fizbot.fragment.FragmentAuth getFragmentAuth() {
            return null;
        }
    }
    
    @kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002\u00a2\u0006\u0002\u0010\u0002R\u000e\u0010\u0003\u001a\u00020\u0004X\u0086T\u00a2\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0004X\u0086T\u00a2\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0004X\u0086T\u00a2\u0006\u0002\n\u0000\u00a8\u0006\u0007"}, d2 = {"Lcom/makswin/fizbot/LoginMutation$Companion;", "", "()V", "OPERATION_DOCUMENT", "", "OPERATION_ID", "OPERATION_NAME", "shared_debug"})
    public static final class Companion {
        
        private Companion() {
            super();
        }
    }
}