package com.makswin.fizbot.type;

import java.lang.System;

/**
 * The available directions for ordering a list of records.
 */
@kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\u000e\n\u0002\b\b\b\u0086\u0001\u0018\u0000 \n2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\nB\u000f\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u00a2\u0006\u0002\u0010\u0004R\u0011\u0010\u0002\u001a\u00020\u0003\u00a2\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006j\u0002\b\u0007j\u0002\b\bj\u0002\b\t\u00a8\u0006\u000b"}, d2 = {"Lcom/makswin/fizbot/type/SortOrder;", "", "rawValue", "", "(Ljava/lang/String;ILjava/lang/String;)V", "getRawValue", "()Ljava/lang/String;", "ASC", "DESC", "UNKNOWN__", "Companion", "shared_debug"})
public enum SortOrder {
    /*public static final*/ ASC /* = new ASC(null) */,
    /*public static final*/ DESC /* = new DESC(null) */,
    /*public static final*/ UNKNOWN__ /* = new UNKNOWN__(null) */;
    @org.jetbrains.annotations.NotNull()
    private final java.lang.String rawValue = null;
    @org.jetbrains.annotations.NotNull()
    public static final com.makswin.fizbot.type.SortOrder.Companion Companion = null;
    @org.jetbrains.annotations.NotNull()
    private static final com.apollographql.apollo3.api.EnumType type = null;
    
    SortOrder(java.lang.String rawValue) {
    }
    
    @org.jetbrains.annotations.NotNull()
    public final java.lang.String getRawValue() {
        return null;
    }
    
    @kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002\u00a2\u0006\u0002\u0010\u0002J\u0011\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\t0\b\u00a2\u0006\u0002\u0010\nJ\u000e\u0010\u000b\u001a\u00020\t2\u0006\u0010\f\u001a\u00020\rR\u0011\u0010\u0003\u001a\u00020\u0004\u00a2\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006\u00a8\u0006\u000e"}, d2 = {"Lcom/makswin/fizbot/type/SortOrder$Companion;", "", "()V", "type", "Lcom/apollographql/apollo3/api/EnumType;", "getType", "()Lcom/apollographql/apollo3/api/EnumType;", "knownValues", "", "Lcom/makswin/fizbot/type/SortOrder;", "()[Lcom/makswin/fizbot/type/SortOrder;", "safeValueOf", "rawValue", "", "shared_debug"})
    public static final class Companion {
        
        private Companion() {
            super();
        }
        
        @org.jetbrains.annotations.NotNull()
        public final com.apollographql.apollo3.api.EnumType getType() {
            return null;
        }
        
        @org.jetbrains.annotations.NotNull()
        public final com.makswin.fizbot.type.SortOrder safeValueOf(@org.jetbrains.annotations.NotNull()
        java.lang.String rawValue) {
            return null;
        }
        
        /**
         * Returns all [SortOrder] known at compile time
         */
        @org.jetbrains.annotations.NotNull()
        public final com.makswin.fizbot.type.SortOrder[] knownValues() {
            return null;
        }
    }
}