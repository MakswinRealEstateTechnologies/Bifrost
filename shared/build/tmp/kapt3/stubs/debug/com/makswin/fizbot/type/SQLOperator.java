package com.makswin.fizbot.type;

import java.lang.System;

/**
 * The available SQL operators that are used to filter query results.
 */
@kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0016\b\u0086\u0001\u0018\u0000 \u00182\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\u0018B\u000f\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u00a2\u0006\u0002\u0010\u0004R\u0011\u0010\u0002\u001a\u00020\u0003\u00a2\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006j\u0002\b\u0007j\u0002\b\bj\u0002\b\tj\u0002\b\nj\u0002\b\u000bj\u0002\b\fj\u0002\b\rj\u0002\b\u000ej\u0002\b\u000fj\u0002\b\u0010j\u0002\b\u0011j\u0002\b\u0012j\u0002\b\u0013j\u0002\b\u0014j\u0002\b\u0015j\u0002\b\u0016j\u0002\b\u0017\u00a8\u0006\u0019"}, d2 = {"Lcom/makswin/fizbot/type/SQLOperator;", "", "rawValue", "", "(Ljava/lang/String;ILjava/lang/String;)V", "getRawValue", "()Ljava/lang/String;", "EQ", "NEQ", "GT", "GTE", "LT", "LTE", "LIKE", "NOT_LIKE", "IN", "NOT_IN", "BETWEEN", "NOT_BETWEEN", "IS_NULL", "IS_NOT_NULL", "ILIKE", "NOT_ILIKE", "UNKNOWN__", "Companion", "shared_debug"})
public enum SQLOperator {
    /*public static final*/ EQ /* = new EQ(null) */,
    /*public static final*/ NEQ /* = new NEQ(null) */,
    /*public static final*/ GT /* = new GT(null) */,
    /*public static final*/ GTE /* = new GTE(null) */,
    /*public static final*/ LT /* = new LT(null) */,
    /*public static final*/ LTE /* = new LTE(null) */,
    /*public static final*/ LIKE /* = new LIKE(null) */,
    /*public static final*/ NOT_LIKE /* = new NOT_LIKE(null) */,
    /*public static final*/ IN /* = new IN(null) */,
    /*public static final*/ NOT_IN /* = new NOT_IN(null) */,
    /*public static final*/ BETWEEN /* = new BETWEEN(null) */,
    /*public static final*/ NOT_BETWEEN /* = new NOT_BETWEEN(null) */,
    /*public static final*/ IS_NULL /* = new IS_NULL(null) */,
    /*public static final*/ IS_NOT_NULL /* = new IS_NOT_NULL(null) */,
    /*public static final*/ ILIKE /* = new ILIKE(null) */,
    /*public static final*/ NOT_ILIKE /* = new NOT_ILIKE(null) */,
    /*public static final*/ UNKNOWN__ /* = new UNKNOWN__(null) */;
    @org.jetbrains.annotations.NotNull()
    private final java.lang.String rawValue = null;
    @org.jetbrains.annotations.NotNull()
    public static final com.makswin.fizbot.type.SQLOperator.Companion Companion = null;
    @org.jetbrains.annotations.NotNull()
    private static final com.apollographql.apollo3.api.EnumType type = null;
    
    SQLOperator(java.lang.String rawValue) {
    }
    
    @org.jetbrains.annotations.NotNull()
    public final java.lang.String getRawValue() {
        return null;
    }
    
    @kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002\u00a2\u0006\u0002\u0010\u0002J\u0011\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\t0\b\u00a2\u0006\u0002\u0010\nJ\u000e\u0010\u000b\u001a\u00020\t2\u0006\u0010\f\u001a\u00020\rR\u0011\u0010\u0003\u001a\u00020\u0004\u00a2\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006\u00a8\u0006\u000e"}, d2 = {"Lcom/makswin/fizbot/type/SQLOperator$Companion;", "", "()V", "type", "Lcom/apollographql/apollo3/api/EnumType;", "getType", "()Lcom/apollographql/apollo3/api/EnumType;", "knownValues", "", "Lcom/makswin/fizbot/type/SQLOperator;", "()[Lcom/makswin/fizbot/type/SQLOperator;", "safeValueOf", "rawValue", "", "shared_debug"})
    public static final class Companion {
        
        private Companion() {
            super();
        }
        
        @org.jetbrains.annotations.NotNull()
        public final com.apollographql.apollo3.api.EnumType getType() {
            return null;
        }
        
        @org.jetbrains.annotations.NotNull()
        public final com.makswin.fizbot.type.SQLOperator safeValueOf(@org.jetbrains.annotations.NotNull()
        java.lang.String rawValue) {
            return null;
        }
        
        /**
         * Returns all [SQLOperator] known at compile time
         */
        @org.jetbrains.annotations.NotNull()
        public final com.makswin.fizbot.type.SQLOperator[] knownValues() {
            return null;
        }
    }
}