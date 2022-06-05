package com.makswin.bifrost.modules.misc;

import java.lang.System;

@kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\u0018\u0000*\u0004\b\u0000\u0010\u00012\b\u0012\u0004\u0012\u0002H\u00010\u0002B\u0013\u0012\f\u0010\u0003\u001a\b\u0012\u0004\u0012\u00028\u00000\u0002\u00a2\u0006\u0002\u0010\u0004J\u001f\u0010\u0005\u001a\u00020\u00062\f\u0010\u0007\u001a\b\u0012\u0004\u0012\u00028\u00000\bH\u0096A\u00f8\u0001\u0000\u00a2\u0006\u0002\u0010\tJ\u001a\u0010\n\u001a\u00020\u000b2\u0012\u0010\f\u001a\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00020\u00060\rR\u0014\u0010\u0003\u001a\b\u0012\u0004\u0012\u00028\u00000\u0002X\u0082\u0004\u00a2\u0006\u0002\n\u0000\u0082\u0002\u0004\n\u0002\b\u0019\u00a8\u0006\u000e"}, d2 = {"Lcom/makswin/bifrost/modules/misc/CommonFlow;", "T", "Lkotlinx/coroutines/flow/Flow;", "origin", "(Lkotlinx/coroutines/flow/Flow;)V", "collect", "", "collector", "Lkotlinx/coroutines/flow/FlowCollector;", "(Lkotlinx/coroutines/flow/FlowCollector;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "watch", "Ldev/icerock/moko/mvvm/livedata/Closeable;", "block", "Lkotlin/Function1;", "shared_debug"})
public final class CommonFlow<T extends java.lang.Object> implements kotlinx.coroutines.flow.Flow<T> {
    private final kotlinx.coroutines.flow.Flow<T> origin = null;
    
    public CommonFlow(@org.jetbrains.annotations.NotNull()
    kotlinx.coroutines.flow.Flow<? extends T> origin) {
        super();
    }
    
    @org.jetbrains.annotations.NotNull()
    public final dev.icerock.moko.mvvm.livedata.Closeable watch(@org.jetbrains.annotations.NotNull()
    kotlin.jvm.functions.Function1<? super T, kotlin.Unit> block) {
        return null;
    }
    
    @org.jetbrains.annotations.Nullable()
    @java.lang.Override()
    public java.lang.Object collect(@org.jetbrains.annotations.NotNull()
    kotlinx.coroutines.flow.FlowCollector<? super T> collector, @org.jetbrains.annotations.NotNull()
    kotlin.coroutines.Continuation<? super kotlin.Unit> p1) {
        return null;
    }
}