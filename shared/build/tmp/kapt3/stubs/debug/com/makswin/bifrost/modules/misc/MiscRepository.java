package com.makswin.bifrost.modules.misc;

import java.lang.System;

@kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u0000J\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\b\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\u0018\u00002\u00020\u0001B\u0005\u00a2\u0006\u0002\u0010\u0002J\u0019\u0010\u0016\u001a\u00020\u00172\u0006\u0010\u0018\u001a\u00020\u0007H\u0086@\u00f8\u0001\u0000\u00a2\u0006\u0002\u0010\u0019R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082\u0004\u00a2\u0006\u0002\n\u0000R\u001d\u0010\u0005\u001a\u000e\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\b0\u0006\u00a2\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\'\u0010\u000b\u001a\u0018\u0012\u0014\u0012\u0012\u0012\u0004\u0012\u00020\b0\rj\b\u0012\u0004\u0012\u00020\b`\u000e0\f8F\u00a2\u0006\u0006\u001a\u0004\b\u000f\u0010\u0010R\u0012\u0010\u0011\u001a\u00060\u0012j\u0002`\u0013X\u0082\u0004\u00a2\u0006\u0002\n\u0000R\u000e\u0010\u0014\u001a\u00020\u0015X\u0082\u0004\u00a2\u0006\u0002\n\u0000\u0082\u0002\u0004\n\u0002\b\u0019\u00a8\u0006\u001a"}, d2 = {"Lcom/makswin/bifrost/modules/misc/MiscRepository;", "", "()V", "apolloClient", "Lcom/apollographql/apollo3/ApolloClient;", "characterPager", "Lcom/kuuurt/paging/multiplatform/Pager;", "", "Lcom/makswin/fizbot/fragment/FragmentLanguage;", "getCharacterPager", "()Lcom/kuuurt/paging/multiplatform/Pager;", "characterPagingData", "Lcom/makswin/bifrost/modules/misc/CommonFlow;", "Landroidx/paging/PagingData;", "Lcom/kuuurt/paging/multiplatform/PagingData;", "getCharacterPagingData", "()Lcom/makswin/bifrost/modules/misc/CommonFlow;", "pagingConfig", "Landroidx/paging/PagingConfig;", "Lcom/kuuurt/paging/multiplatform/PagingConfig;", "scope", "Lkotlinx/coroutines/CoroutineScope;", "getTypeGroups", "Lcom/makswin/fizbot/LanguagesQuery$Languages;", "page", "(ILkotlin/coroutines/Continuation;)Ljava/lang/Object;", "shared_debug"})
public final class MiscRepository {
    private final kotlinx.coroutines.CoroutineScope scope = null;
    private final com.apollographql.apollo3.ApolloClient apolloClient = null;
    private final androidx.paging.PagingConfig pagingConfig = null;
    @org.jetbrains.annotations.NotNull()
    private final com.kuuurt.paging.multiplatform.Pager<java.lang.Integer, com.makswin.fizbot.fragment.FragmentLanguage> characterPager = null;
    
    public MiscRepository() {
        super();
    }
    
    @org.jetbrains.annotations.Nullable()
    public final java.lang.Object getTypeGroups(int page, @org.jetbrains.annotations.NotNull()
    kotlin.coroutines.Continuation<? super com.makswin.fizbot.LanguagesQuery.Languages> continuation) {
        return null;
    }
    
    @org.jetbrains.annotations.NotNull()
    public final com.kuuurt.paging.multiplatform.Pager<java.lang.Integer, com.makswin.fizbot.fragment.FragmentLanguage> getCharacterPager() {
        return null;
    }
    
    @org.jetbrains.annotations.NotNull()
    public final com.makswin.bifrost.modules.misc.CommonFlow<androidx.paging.PagingData<com.makswin.fizbot.fragment.FragmentLanguage>> getCharacterPagingData() {
        return null;
    }
}