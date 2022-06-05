package com.makswin.fizbot;

import java.lang.System;

@kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u0000L\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\b\u0086\b\u0018\u0000 \u001e2\b\u0012\u0004\u0012\u00020\u00020\u0001:\u0003\u001e\u001f B\r\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u00a2\u0006\u0002\u0010\u0005J\u000e\u0010\b\u001a\b\u0012\u0004\u0012\u00020\u00020\tH\u0016J\t\u0010\n\u001a\u00020\u0004H\u00c6\u0003J\u0013\u0010\u000b\u001a\u00020\u00002\b\b\u0002\u0010\u0003\u001a\u00020\u0004H\u00c6\u0001J\b\u0010\f\u001a\u00020\u0004H\u0016J\u0013\u0010\r\u001a\u00020\u000e2\b\u0010\u000f\u001a\u0004\u0018\u00010\u0010H\u00d6\u0003J\t\u0010\u0011\u001a\u00020\u0012H\u00d6\u0001J\b\u0010\u0013\u001a\u00020\u0004H\u0016J\b\u0010\u0014\u001a\u00020\u0004H\u0016J\b\u0010\u0015\u001a\u00020\u0016H\u0016J\u0018\u0010\u0017\u001a\u00020\u00182\u0006\u0010\u0019\u001a\u00020\u001a2\u0006\u0010\u001b\u001a\u00020\u001cH\u0016J\t\u0010\u001d\u001a\u00020\u0004H\u00d6\u0001R\u0011\u0010\u0003\u001a\u00020\u0004\u00a2\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007\u00a8\u0006!"}, d2 = {"Lcom/makswin/fizbot/ForgotPasswordOTPMutation;", "Lcom/apollographql/apollo3/api/Mutation;", "Lcom/makswin/fizbot/ForgotPasswordOTPMutation$Data;", "cell_phone", "", "(Ljava/lang/String;)V", "getCell_phone", "()Ljava/lang/String;", "adapter", "Lcom/apollographql/apollo3/api/Adapter;", "component1", "copy", "document", "equals", "", "other", "", "hashCode", "", "id", "name", "rootField", "Lcom/apollographql/apollo3/api/CompiledField;", "serializeVariables", "", "writer", "Lcom/apollographql/apollo3/api/json/JsonWriter;", "customScalarAdapters", "Lcom/apollographql/apollo3/api/CustomScalarAdapters;", "toString", "Companion", "Data", "ForgotPasswordOTP", "shared_debug"})
public final class ForgotPasswordOTPMutation implements com.apollographql.apollo3.api.Mutation<com.makswin.fizbot.ForgotPasswordOTPMutation.Data> {
    @org.jetbrains.annotations.NotNull()
    private final java.lang.String cell_phone = null;
    @org.jetbrains.annotations.NotNull()
    public static final com.makswin.fizbot.ForgotPasswordOTPMutation.Companion Companion = null;
    @org.jetbrains.annotations.NotNull()
    public static final java.lang.String OPERATION_ID = "4f862cb0aae04583882e4c43cc05798257ad48363c56d4cf86804c4179e09dca";
    
    /**
     * The minimized GraphQL document being sent to the server to save a few bytes.
     * The un-minimized version is:
     *
     * mutation forgotPasswordOTP($cell_phone: String!) {
     *  forgotPasswordOTP(input: {
     *    cell_phone: $cell_phone
     *  }
     *  ) {
     *    status
     *  }
     * }
     */
    @org.jetbrains.annotations.NotNull()
    public static final java.lang.String OPERATION_DOCUMENT = "mutation forgotPasswordOTP($cell_phone: String!) { forgotPasswordOTP(input: { cell_phone: $cell_phone } ) { status } }";
    @org.jetbrains.annotations.NotNull()
    public static final java.lang.String OPERATION_NAME = "forgotPasswordOTP";
    
    @org.jetbrains.annotations.NotNull()
    public final com.makswin.fizbot.ForgotPasswordOTPMutation copy(@org.jetbrains.annotations.NotNull()
    java.lang.String cell_phone) {
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
    
    public ForgotPasswordOTPMutation(@org.jetbrains.annotations.NotNull()
    java.lang.String cell_phone) {
        super();
    }
    
    @org.jetbrains.annotations.NotNull()
    public final java.lang.String component1() {
        return null;
    }
    
    @org.jetbrains.annotations.NotNull()
    public final java.lang.String getCell_phone() {
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
    public com.apollographql.apollo3.api.Adapter<com.makswin.fizbot.ForgotPasswordOTPMutation.Data> adapter() {
        return null;
    }
    
    @org.jetbrains.annotations.NotNull()
    @java.lang.Override()
    public com.apollographql.apollo3.api.CompiledField rootField() {
        return null;
    }
    
    @kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\b\u0018\u00002\u00020\u0001B\r\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u00a2\u0006\u0002\u0010\u0004J\t\u0010\u0007\u001a\u00020\u0003H\u00c6\u0003J\u0013\u0010\b\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u0003H\u00c6\u0001J\u0013\u0010\t\u001a\u00020\n2\b\u0010\u000b\u001a\u0004\u0018\u00010\fH\u00d6\u0003J\t\u0010\r\u001a\u00020\u000eH\u00d6\u0001J\t\u0010\u000f\u001a\u00020\u0010H\u00d6\u0001R\u0011\u0010\u0002\u001a\u00020\u0003\u00a2\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006\u00a8\u0006\u0011"}, d2 = {"Lcom/makswin/fizbot/ForgotPasswordOTPMutation$Data;", "Lcom/apollographql/apollo3/api/Mutation$Data;", "forgotPasswordOTP", "Lcom/makswin/fizbot/ForgotPasswordOTPMutation$ForgotPasswordOTP;", "(Lcom/makswin/fizbot/ForgotPasswordOTPMutation$ForgotPasswordOTP;)V", "getForgotPasswordOTP", "()Lcom/makswin/fizbot/ForgotPasswordOTPMutation$ForgotPasswordOTP;", "component1", "copy", "equals", "", "other", "", "hashCode", "", "toString", "", "shared_debug"})
    public static final class Data implements com.apollographql.apollo3.api.Mutation.Data {
        @org.jetbrains.annotations.NotNull()
        private final com.makswin.fizbot.ForgotPasswordOTPMutation.ForgotPasswordOTP forgotPasswordOTP = null;
        
        @org.jetbrains.annotations.NotNull()
        public final com.makswin.fizbot.ForgotPasswordOTPMutation.Data copy(@org.jetbrains.annotations.NotNull()
        com.makswin.fizbot.ForgotPasswordOTPMutation.ForgotPasswordOTP forgotPasswordOTP) {
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
        com.makswin.fizbot.ForgotPasswordOTPMutation.ForgotPasswordOTP forgotPasswordOTP) {
            super();
        }
        
        @org.jetbrains.annotations.NotNull()
        public final com.makswin.fizbot.ForgotPasswordOTPMutation.ForgotPasswordOTP component1() {
            return null;
        }
        
        @org.jetbrains.annotations.NotNull()
        public final com.makswin.fizbot.ForgotPasswordOTPMutation.ForgotPasswordOTP getForgotPasswordOTP() {
            return null;
        }
    }
    
    @kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\b\u0018\u00002\u00020\u0001B\r\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u00a2\u0006\u0002\u0010\u0004J\t\u0010\u0007\u001a\u00020\u0003H\u00c6\u0003J\u0013\u0010\b\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u0003H\u00c6\u0001J\u0013\u0010\t\u001a\u00020\n2\b\u0010\u000b\u001a\u0004\u0018\u00010\u0001H\u00d6\u0003J\t\u0010\f\u001a\u00020\rH\u00d6\u0001J\t\u0010\u000e\u001a\u00020\u0003H\u00d6\u0001R\u0011\u0010\u0002\u001a\u00020\u0003\u00a2\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006\u00a8\u0006\u000f"}, d2 = {"Lcom/makswin/fizbot/ForgotPasswordOTPMutation$ForgotPasswordOTP;", "", "status", "", "(Ljava/lang/String;)V", "getStatus", "()Ljava/lang/String;", "component1", "copy", "equals", "", "other", "hashCode", "", "toString", "shared_debug"})
    public static final class ForgotPasswordOTP {
        @org.jetbrains.annotations.NotNull()
        private final java.lang.String status = null;
        
        @org.jetbrains.annotations.NotNull()
        public final com.makswin.fizbot.ForgotPasswordOTPMutation.ForgotPasswordOTP copy(@org.jetbrains.annotations.NotNull()
        java.lang.String status) {
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
        
        public ForgotPasswordOTP(@org.jetbrains.annotations.NotNull()
        java.lang.String status) {
            super();
        }
        
        @org.jetbrains.annotations.NotNull()
        public final java.lang.String component1() {
            return null;
        }
        
        @org.jetbrains.annotations.NotNull()
        public final java.lang.String getStatus() {
            return null;
        }
    }
    
    @kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002\u00a2\u0006\u0002\u0010\u0002R\u000e\u0010\u0003\u001a\u00020\u0004X\u0086T\u00a2\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0004X\u0086T\u00a2\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0004X\u0086T\u00a2\u0006\u0002\n\u0000\u00a8\u0006\u0007"}, d2 = {"Lcom/makswin/fizbot/ForgotPasswordOTPMutation$Companion;", "", "()V", "OPERATION_DOCUMENT", "", "OPERATION_ID", "OPERATION_NAME", "shared_debug"})
    public static final class Companion {
        
        private Companion() {
            super();
        }
    }
}