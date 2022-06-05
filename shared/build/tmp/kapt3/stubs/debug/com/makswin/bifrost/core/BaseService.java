package com.makswin.bifrost.core;

import java.lang.System;

@kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u0000J\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\b\u0016\u0018\u00002\u00020\u0001B\u0005\u00a2\u0006\u0002\u0010\u0002J\u001e\u0010\t\u001a\u00020\n\"\b\b\u0000\u0010\u000b*\u00020\f2\f\u0010\r\u001a\b\u0012\u0004\u0012\u0002H\u000b0\u000eJ\u001e\u0010\u000f\u001a\u00020\n\"\b\b\u0000\u0010\u000b*\u00020\u00102\f\u0010\r\u001a\b\u0012\u0004\u0012\u0002H\u000b0\u000eJ/\u0010\u0011\u001a\b\u0012\u0004\u0012\u0002H\u000b0\u000e\"\b\b\u0000\u0010\u000b*\u00020\f2\f\u0010\u0012\u001a\b\u0012\u0004\u0012\u0002H\u000b0\u0013H\u0086@\u00f8\u0001\u0000\u00a2\u0006\u0002\u0010\u0014J/\u0010\u0015\u001a\b\u0012\u0004\u0012\u0002H\u000b0\u000e\"\b\b\u0000\u0010\u000b*\u00020\u00102\f\u0010\u0016\u001a\b\u0012\u0004\u0012\u0002H\u000b0\u0017H\u0086@\u00f8\u0001\u0000\u00a2\u0006\u0002\u0010\u0018J\b\u0010\u0019\u001a\u00020\u001aH\u0002R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082\u000e\u00a2\u0006\u0002\n\u0000R\u0011\u0010\u0005\u001a\u00020\u0006\u00a2\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\b\u0082\u0002\u0004\n\u0002\b\u0019\u00a8\u0006\u001b"}, d2 = {"Lcom/makswin/bifrost/core/BaseService;", "", "()V", "graphQLNetwork", "Lcom/makswin/bifrost/core/GraphQLNetwork;", "scope", "Lkotlinx/coroutines/CoroutineScope;", "getScope", "()Lkotlinx/coroutines/CoroutineScope;", "checkMutationResponse", "", "D", "Lcom/apollographql/apollo3/api/Mutation$Data;", "response", "Lcom/apollographql/apollo3/api/ApolloResponse;", "checkQueryResponse", "Lcom/apollographql/apollo3/api/Query$Data;", "executeMutation", "mutation", "Lcom/apollographql/apollo3/api/Mutation;", "(Lcom/apollographql/apollo3/api/Mutation;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "executeQuery", "query", "Lcom/apollographql/apollo3/api/Query;", "(Lcom/apollographql/apollo3/api/Query;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "getApolloClient", "Lcom/apollographql/apollo3/ApolloClient;", "shared_debug"})
public class BaseService {
    private com.makswin.bifrost.core.GraphQLNetwork graphQLNetwork;
    @org.jetbrains.annotations.NotNull()
    private final kotlinx.coroutines.CoroutineScope scope = null;
    
    public BaseService() {
        super();
    }
    
    @org.jetbrains.annotations.NotNull()
    public final kotlinx.coroutines.CoroutineScope getScope() {
        return null;
    }
    
    private final com.apollographql.apollo3.ApolloClient getApolloClient() {
        return null;
    }
    
    @org.jetbrains.annotations.Nullable()
    public final <D extends com.apollographql.apollo3.api.Query.Data>java.lang.Object executeQuery(@org.jetbrains.annotations.NotNull()
    com.apollographql.apollo3.api.Query<D> query, @org.jetbrains.annotations.NotNull()
    kotlin.coroutines.Continuation<? super com.apollographql.apollo3.api.ApolloResponse<D>> continuation) {
        return null;
    }
    
    @org.jetbrains.annotations.Nullable()
    public final <D extends com.apollographql.apollo3.api.Mutation.Data>java.lang.Object executeMutation(@org.jetbrains.annotations.NotNull()
    com.apollographql.apollo3.api.Mutation<D> mutation, @org.jetbrains.annotations.NotNull()
    kotlin.coroutines.Continuation<? super com.apollographql.apollo3.api.ApolloResponse<D>> continuation) {
        return null;
    }
    
    public final <D extends com.apollographql.apollo3.api.Query.Data>boolean checkQueryResponse(@org.jetbrains.annotations.NotNull()
    com.apollographql.apollo3.api.ApolloResponse<D> response) {
        return false;
    }
    
    public final <D extends com.apollographql.apollo3.api.Mutation.Data>boolean checkMutationResponse(@org.jetbrains.annotations.NotNull()
    com.apollographql.apollo3.api.ApolloResponse<D> response) {
        return false;
    }
}