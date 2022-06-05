package com.makswin.fizbot;

import java.lang.System;

@kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u0000L\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\b\u0086\b\u0018\u0000 \u001e2\b\u0012\u0004\u0012\u00020\u00020\u0001:\u0003\u001e\u001f B\r\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u00a2\u0006\u0002\u0010\u0005J\u000e\u0010\b\u001a\b\u0012\u0004\u0012\u00020\u00020\tH\u0016J\t\u0010\n\u001a\u00020\u0004H\u00c6\u0003J\u0013\u0010\u000b\u001a\u00020\u00002\b\b\u0002\u0010\u0003\u001a\u00020\u0004H\u00c6\u0001J\b\u0010\f\u001a\u00020\u0004H\u0016J\u0013\u0010\r\u001a\u00020\u000e2\b\u0010\u000f\u001a\u0004\u0018\u00010\u0010H\u00d6\u0003J\t\u0010\u0011\u001a\u00020\u0012H\u00d6\u0001J\b\u0010\u0013\u001a\u00020\u0004H\u0016J\b\u0010\u0014\u001a\u00020\u0004H\u0016J\b\u0010\u0015\u001a\u00020\u0016H\u0016J\u0018\u0010\u0017\u001a\u00020\u00182\u0006\u0010\u0019\u001a\u00020\u001a2\u0006\u0010\u001b\u001a\u00020\u001cH\u0016J\t\u0010\u001d\u001a\u00020\u0004H\u00d6\u0001R\u0011\u0010\u0003\u001a\u00020\u0004\u00a2\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007\u00a8\u0006!"}, d2 = {"Lcom/makswin/fizbot/CheckInsuranceQuery;", "Lcom/apollographql/apollo3/api/Query;", "Lcom/makswin/fizbot/CheckInsuranceQuery$Data;", "dealerCode", "", "(Ljava/lang/String;)V", "getDealerCode", "()Ljava/lang/String;", "adapter", "Lcom/apollographql/apollo3/api/Adapter;", "component1", "copy", "document", "equals", "", "other", "", "hashCode", "", "id", "name", "rootField", "Lcom/apollographql/apollo3/api/CompiledField;", "serializeVariables", "", "writer", "Lcom/apollographql/apollo3/api/json/JsonWriter;", "customScalarAdapters", "Lcom/apollographql/apollo3/api/CustomScalarAdapters;", "toString", "Companion", "Data", "Koalay_dealer_info", "shared_debug"})
public final class CheckInsuranceQuery implements com.apollographql.apollo3.api.Query<com.makswin.fizbot.CheckInsuranceQuery.Data> {
    @org.jetbrains.annotations.NotNull()
    private final java.lang.String dealerCode = null;
    @org.jetbrains.annotations.NotNull()
    public static final com.makswin.fizbot.CheckInsuranceQuery.Companion Companion = null;
    @org.jetbrains.annotations.NotNull()
    public static final java.lang.String OPERATION_ID = "60d788bc067dbdc30e53fcd7beacdbab73e07c3695ebea394ebf32d38cf815dc";
    
    /**
     * The minimized GraphQL document being sent to the server to save a few bytes.
     * The un-minimized version is:
     *
     * query checkInsurance($dealerCode: String!) {
     *  koalay_dealer_info(dealerCode: $dealerCode) {
     *    __typename
     *    ...fragmentInsurance
     *  }
     * }
     *
     * fragment fragmentInsurance on KoalayDealer {
     *  url_konut
     *  url_dask
     * }
     */
    @org.jetbrains.annotations.NotNull()
    public static final java.lang.String OPERATION_DOCUMENT = "query checkInsurance($dealerCode: String!) { koalay_dealer_info(dealerCode: $dealerCode) { __typename ...fragmentInsurance } }  fragment fragmentInsurance on KoalayDealer { url_konut url_dask }";
    @org.jetbrains.annotations.NotNull()
    public static final java.lang.String OPERATION_NAME = "checkInsurance";
    
    @org.jetbrains.annotations.NotNull()
    public final com.makswin.fizbot.CheckInsuranceQuery copy(@org.jetbrains.annotations.NotNull()
    java.lang.String dealerCode) {
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
    
    public CheckInsuranceQuery(@org.jetbrains.annotations.NotNull()
    java.lang.String dealerCode) {
        super();
    }
    
    @org.jetbrains.annotations.NotNull()
    public final java.lang.String component1() {
        return null;
    }
    
    @org.jetbrains.annotations.NotNull()
    public final java.lang.String getDealerCode() {
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
    public com.apollographql.apollo3.api.Adapter<com.makswin.fizbot.CheckInsuranceQuery.Data> adapter() {
        return null;
    }
    
    @org.jetbrains.annotations.NotNull()
    @java.lang.Override()
    public com.apollographql.apollo3.api.CompiledField rootField() {
        return null;
    }
    
    @kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\b\u0018\u00002\u00020\u0001B\u000f\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u00a2\u0006\u0002\u0010\u0004J\u000b\u0010\u0007\u001a\u0004\u0018\u00010\u0003H\u00c6\u0003J\u0015\u0010\b\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003H\u00c6\u0001J\u0013\u0010\t\u001a\u00020\n2\b\u0010\u000b\u001a\u0004\u0018\u00010\fH\u00d6\u0003J\t\u0010\r\u001a\u00020\u000eH\u00d6\u0001J\t\u0010\u000f\u001a\u00020\u0010H\u00d6\u0001R\u0013\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u00a2\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006\u00a8\u0006\u0011"}, d2 = {"Lcom/makswin/fizbot/CheckInsuranceQuery$Data;", "Lcom/apollographql/apollo3/api/Query$Data;", "koalay_dealer_info", "Lcom/makswin/fizbot/CheckInsuranceQuery$Koalay_dealer_info;", "(Lcom/makswin/fizbot/CheckInsuranceQuery$Koalay_dealer_info;)V", "getKoalay_dealer_info", "()Lcom/makswin/fizbot/CheckInsuranceQuery$Koalay_dealer_info;", "component1", "copy", "equals", "", "other", "", "hashCode", "", "toString", "", "shared_debug"})
    public static final class Data implements com.apollographql.apollo3.api.Query.Data {
        @org.jetbrains.annotations.Nullable()
        private final com.makswin.fizbot.CheckInsuranceQuery.Koalay_dealer_info koalay_dealer_info = null;
        
        @org.jetbrains.annotations.NotNull()
        public final com.makswin.fizbot.CheckInsuranceQuery.Data copy(@org.jetbrains.annotations.Nullable()
        com.makswin.fizbot.CheckInsuranceQuery.Koalay_dealer_info koalay_dealer_info) {
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
        com.makswin.fizbot.CheckInsuranceQuery.Koalay_dealer_info koalay_dealer_info) {
            super();
        }
        
        @org.jetbrains.annotations.Nullable()
        public final com.makswin.fizbot.CheckInsuranceQuery.Koalay_dealer_info component1() {
            return null;
        }
        
        @org.jetbrains.annotations.Nullable()
        public final com.makswin.fizbot.CheckInsuranceQuery.Koalay_dealer_info getKoalay_dealer_info() {
            return null;
        }
    }
    
    @kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\b\u0018\u00002\u00020\u0001B\u0015\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u00a2\u0006\u0002\u0010\u0006J\t\u0010\u000b\u001a\u00020\u0003H\u00c6\u0003J\t\u0010\f\u001a\u00020\u0005H\u00c6\u0003J\u001d\u0010\r\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u0005H\u00c6\u0001J\u0013\u0010\u000e\u001a\u00020\u000f2\b\u0010\u0010\u001a\u0004\u0018\u00010\u0001H\u00d6\u0003J\t\u0010\u0011\u001a\u00020\u0012H\u00d6\u0001J\t\u0010\u0013\u001a\u00020\u0003H\u00d6\u0001R\u0011\u0010\u0002\u001a\u00020\u0003\u00a2\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u0011\u0010\u0004\u001a\u00020\u0005\u00a2\u0006\b\n\u0000\u001a\u0004\b\t\u0010\n\u00a8\u0006\u0014"}, d2 = {"Lcom/makswin/fizbot/CheckInsuranceQuery$Koalay_dealer_info;", "", "__typename", "", "fragmentInsurance", "Lcom/makswin/fizbot/fragment/FragmentInsurance;", "(Ljava/lang/String;Lcom/makswin/fizbot/fragment/FragmentInsurance;)V", "get__typename", "()Ljava/lang/String;", "getFragmentInsurance", "()Lcom/makswin/fizbot/fragment/FragmentInsurance;", "component1", "component2", "copy", "equals", "", "other", "hashCode", "", "toString", "shared_debug"})
    public static final class Koalay_dealer_info {
        @org.jetbrains.annotations.NotNull()
        private final java.lang.String __typename = null;
        
        /**
         * Synthetic field for 'fragmentInsurance'
         */
        @org.jetbrains.annotations.NotNull()
        private final com.makswin.fizbot.fragment.FragmentInsurance fragmentInsurance = null;
        
        @org.jetbrains.annotations.NotNull()
        public final com.makswin.fizbot.CheckInsuranceQuery.Koalay_dealer_info copy(@org.jetbrains.annotations.NotNull()
        java.lang.String __typename, @org.jetbrains.annotations.NotNull()
        com.makswin.fizbot.fragment.FragmentInsurance fragmentInsurance) {
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
        
        public Koalay_dealer_info(@org.jetbrains.annotations.NotNull()
        java.lang.String __typename, @org.jetbrains.annotations.NotNull()
        com.makswin.fizbot.fragment.FragmentInsurance fragmentInsurance) {
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
         * Synthetic field for 'fragmentInsurance'
         */
        @org.jetbrains.annotations.NotNull()
        public final com.makswin.fizbot.fragment.FragmentInsurance component2() {
            return null;
        }
        
        /**
         * Synthetic field for 'fragmentInsurance'
         */
        @org.jetbrains.annotations.NotNull()
        public final com.makswin.fizbot.fragment.FragmentInsurance getFragmentInsurance() {
            return null;
        }
    }
    
    @kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002\u00a2\u0006\u0002\u0010\u0002R\u000e\u0010\u0003\u001a\u00020\u0004X\u0086T\u00a2\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0004X\u0086T\u00a2\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0004X\u0086T\u00a2\u0006\u0002\n\u0000\u00a8\u0006\u0007"}, d2 = {"Lcom/makswin/fizbot/CheckInsuranceQuery$Companion;", "", "()V", "OPERATION_DOCUMENT", "", "OPERATION_ID", "OPERATION_NAME", "shared_debug"})
    public static final class Companion {
        
        private Companion() {
            super();
        }
    }
}