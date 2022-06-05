package com.makswin.fizbot;

import java.lang.System;

@kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u0000R\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\b\u0086\b\u0018\u0000  2\b\u0012\u0004\u0012\u00020\u00020\u0001:\u0003\u001f !B\r\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u00a2\u0006\u0002\u0010\u0005J\u000e\u0010\b\u001a\b\u0012\u0004\u0012\u00020\u00020\tH\u0016J\t\u0010\n\u001a\u00020\u0004H\u00c6\u0003J\u0013\u0010\u000b\u001a\u00020\u00002\b\b\u0002\u0010\u0003\u001a\u00020\u0004H\u00c6\u0001J\b\u0010\f\u001a\u00020\rH\u0016J\u0013\u0010\u000e\u001a\u00020\u000f2\b\u0010\u0010\u001a\u0004\u0018\u00010\u0011H\u00d6\u0003J\t\u0010\u0012\u001a\u00020\u0013H\u00d6\u0001J\b\u0010\u0014\u001a\u00020\rH\u0016J\b\u0010\u0015\u001a\u00020\rH\u0016J\b\u0010\u0016\u001a\u00020\u0017H\u0016J\u0018\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u001a\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u001dH\u0016J\t\u0010\u001e\u001a\u00020\rH\u00d6\u0001R\u0011\u0010\u0003\u001a\u00020\u0004\u00a2\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007\u00a8\u0006\""}, d2 = {"Lcom/makswin/fizbot/AddFeedbackMutation;", "Lcom/apollographql/apollo3/api/Mutation;", "Lcom/makswin/fizbot/AddFeedbackMutation$Data;", "input", "Lcom/makswin/fizbot/type/AddFeedbackInput;", "(Lcom/makswin/fizbot/type/AddFeedbackInput;)V", "getInput", "()Lcom/makswin/fizbot/type/AddFeedbackInput;", "adapter", "Lcom/apollographql/apollo3/api/Adapter;", "component1", "copy", "document", "", "equals", "", "other", "", "hashCode", "", "id", "name", "rootField", "Lcom/apollographql/apollo3/api/CompiledField;", "serializeVariables", "", "writer", "Lcom/apollographql/apollo3/api/json/JsonWriter;", "customScalarAdapters", "Lcom/apollographql/apollo3/api/CustomScalarAdapters;", "toString", "AddFeedback", "Companion", "Data", "shared_debug"})
public final class AddFeedbackMutation implements com.apollographql.apollo3.api.Mutation<com.makswin.fizbot.AddFeedbackMutation.Data> {
    @org.jetbrains.annotations.NotNull()
    private final com.makswin.fizbot.type.AddFeedbackInput input = null;
    @org.jetbrains.annotations.NotNull()
    public static final com.makswin.fizbot.AddFeedbackMutation.Companion Companion = null;
    @org.jetbrains.annotations.NotNull()
    public static final java.lang.String OPERATION_ID = "0bcc3e0d1686b576a3b409264d6f1bdbcf6bc58c2524c3269a33a44b8a40226a";
    
    /**
     * The minimized GraphQL document being sent to the server to save a few bytes.
     * The un-minimized version is:
     *
     * mutation addFeedback($input: AddFeedbackInput!) {
     *  addFeedback(input: $input) {
     *    note
     *  }
     * }
     */
    @org.jetbrains.annotations.NotNull()
    public static final java.lang.String OPERATION_DOCUMENT = "mutation addFeedback($input: AddFeedbackInput!) { addFeedback(input: $input) { note } }";
    @org.jetbrains.annotations.NotNull()
    public static final java.lang.String OPERATION_NAME = "addFeedback";
    
    @org.jetbrains.annotations.NotNull()
    public final com.makswin.fizbot.AddFeedbackMutation copy(@org.jetbrains.annotations.NotNull()
    com.makswin.fizbot.type.AddFeedbackInput input) {
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
    
    public AddFeedbackMutation(@org.jetbrains.annotations.NotNull()
    com.makswin.fizbot.type.AddFeedbackInput input) {
        super();
    }
    
    @org.jetbrains.annotations.NotNull()
    public final com.makswin.fizbot.type.AddFeedbackInput component1() {
        return null;
    }
    
    @org.jetbrains.annotations.NotNull()
    public final com.makswin.fizbot.type.AddFeedbackInput getInput() {
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
    public com.apollographql.apollo3.api.Adapter<com.makswin.fizbot.AddFeedbackMutation.Data> adapter() {
        return null;
    }
    
    @org.jetbrains.annotations.NotNull()
    @java.lang.Override()
    public com.apollographql.apollo3.api.CompiledField rootField() {
        return null;
    }
    
    @kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\b\u0018\u00002\u00020\u0001B\u000f\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u00a2\u0006\u0002\u0010\u0004J\u000b\u0010\u0007\u001a\u0004\u0018\u00010\u0003H\u00c6\u0003J\u0015\u0010\b\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003H\u00c6\u0001J\u0013\u0010\t\u001a\u00020\n2\b\u0010\u000b\u001a\u0004\u0018\u00010\fH\u00d6\u0003J\t\u0010\r\u001a\u00020\u000eH\u00d6\u0001J\t\u0010\u000f\u001a\u00020\u0010H\u00d6\u0001R\u0013\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u00a2\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006\u00a8\u0006\u0011"}, d2 = {"Lcom/makswin/fizbot/AddFeedbackMutation$Data;", "Lcom/apollographql/apollo3/api/Mutation$Data;", "addFeedback", "Lcom/makswin/fizbot/AddFeedbackMutation$AddFeedback;", "(Lcom/makswin/fizbot/AddFeedbackMutation$AddFeedback;)V", "getAddFeedback", "()Lcom/makswin/fizbot/AddFeedbackMutation$AddFeedback;", "component1", "copy", "equals", "", "other", "", "hashCode", "", "toString", "", "shared_debug"})
    public static final class Data implements com.apollographql.apollo3.api.Mutation.Data {
        @org.jetbrains.annotations.Nullable()
        private final com.makswin.fizbot.AddFeedbackMutation.AddFeedback addFeedback = null;
        
        @org.jetbrains.annotations.NotNull()
        public final com.makswin.fizbot.AddFeedbackMutation.Data copy(@org.jetbrains.annotations.Nullable()
        com.makswin.fizbot.AddFeedbackMutation.AddFeedback addFeedback) {
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
        
        public Data(@org.jetbrains.annotations.Nullable()
        com.makswin.fizbot.AddFeedbackMutation.AddFeedback addFeedback) {
            super();
        }
        
        @org.jetbrains.annotations.Nullable()
        public final com.makswin.fizbot.AddFeedbackMutation.AddFeedback component1() {
            return null;
        }
        
        @org.jetbrains.annotations.Nullable()
        public final com.makswin.fizbot.AddFeedbackMutation.AddFeedback getAddFeedback() {
            return null;
        }
    }
    
    @kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\b\u0018\u00002\u00020\u0001B\r\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u00a2\u0006\u0002\u0010\u0004J\t\u0010\u0007\u001a\u00020\u0003H\u00c6\u0003J\u0013\u0010\b\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u0003H\u00c6\u0001J\u0013\u0010\t\u001a\u00020\n2\b\u0010\u000b\u001a\u0004\u0018\u00010\u0001H\u00d6\u0003J\t\u0010\f\u001a\u00020\rH\u00d6\u0001J\t\u0010\u000e\u001a\u00020\u0003H\u00d6\u0001R\u0011\u0010\u0002\u001a\u00020\u0003\u00a2\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006\u00a8\u0006\u000f"}, d2 = {"Lcom/makswin/fizbot/AddFeedbackMutation$AddFeedback;", "", "note", "", "(Ljava/lang/String;)V", "getNote", "()Ljava/lang/String;", "component1", "copy", "equals", "", "other", "hashCode", "", "toString", "shared_debug"})
    public static final class AddFeedback {
        @org.jetbrains.annotations.NotNull()
        private final java.lang.String note = null;
        
        @org.jetbrains.annotations.NotNull()
        public final com.makswin.fizbot.AddFeedbackMutation.AddFeedback copy(@org.jetbrains.annotations.NotNull()
        java.lang.String note) {
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
        
        public AddFeedback(@org.jetbrains.annotations.NotNull()
        java.lang.String note) {
            super();
        }
        
        @org.jetbrains.annotations.NotNull()
        public final java.lang.String component1() {
            return null;
        }
        
        @org.jetbrains.annotations.NotNull()
        public final java.lang.String getNote() {
            return null;
        }
    }
    
    @kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002\u00a2\u0006\u0002\u0010\u0002R\u000e\u0010\u0003\u001a\u00020\u0004X\u0086T\u00a2\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0004X\u0086T\u00a2\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0004X\u0086T\u00a2\u0006\u0002\n\u0000\u00a8\u0006\u0007"}, d2 = {"Lcom/makswin/fizbot/AddFeedbackMutation$Companion;", "", "()V", "OPERATION_DOCUMENT", "", "OPERATION_ID", "OPERATION_NAME", "shared_debug"})
    public static final class Companion {
        
        private Companion() {
            super();
        }
    }
}