package com.makswin.fizbot.type;

import java.lang.System;

/**
 * Dynamic HAS conditions for WHERE conditions for the `where` argument on the query
 * `trainings_for_user`.
 */
@kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\r\n\u0002\u0010\u000b\n\u0002\b\u0004\b\u0086\b\u0018\u00002\u00020\u0001BC\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0010\b\u0002\u0010\u0004\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00060\u0005\u0012\u0010\b\u0002\u0010\u0007\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\b0\u0005\u0012\u0010\b\u0002\u0010\t\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\n0\u0005\u00a2\u0006\u0002\u0010\u000bJ\t\u0010\u0012\u001a\u00020\u0003H\u00c6\u0003J\u0011\u0010\u0013\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00060\u0005H\u00c6\u0003J\u0011\u0010\u0014\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\b0\u0005H\u00c6\u0003J\u0011\u0010\u0015\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\n0\u0005H\u00c6\u0003JI\u0010\u0016\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\u0010\b\u0002\u0010\u0004\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00060\u00052\u0010\b\u0002\u0010\u0007\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\b0\u00052\u0010\b\u0002\u0010\t\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\n0\u0005H\u00c6\u0001J\u0013\u0010\u0017\u001a\u00020\u00182\b\u0010\u0019\u001a\u0004\u0018\u00010\u0001H\u00d6\u0003J\t\u0010\u001a\u001a\u00020\bH\u00d6\u0001J\t\u0010\u001b\u001a\u00020\u0003H\u00d6\u0001R\u0019\u0010\u0007\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\b0\u0005\u00a2\u0006\b\n\u0000\u001a\u0004\b\f\u0010\rR\u0019\u0010\t\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\n0\u0005\u00a2\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\rR\u0019\u0010\u0004\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00060\u0005\u00a2\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\rR\u0011\u0010\u0002\u001a\u00020\u0003\u00a2\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011\u00a8\u0006\u001c"}, d2 = {"Lcom/makswin/fizbot/type/QueryTrainingsForUserWhereWhereConditionsRelation;", "", "relation", "", "operator", "Lcom/apollographql/apollo3/api/Optional;", "Lcom/makswin/fizbot/type/SQLOperator;", "amount", "", "condition", "Lcom/makswin/fizbot/type/QueryTrainingsForUserWhereWhereConditions;", "(Ljava/lang/String;Lcom/apollographql/apollo3/api/Optional;Lcom/apollographql/apollo3/api/Optional;Lcom/apollographql/apollo3/api/Optional;)V", "getAmount", "()Lcom/apollographql/apollo3/api/Optional;", "getCondition", "getOperator", "getRelation", "()Ljava/lang/String;", "component1", "component2", "component3", "component4", "copy", "equals", "", "other", "hashCode", "toString", "shared_debug"})
public final class QueryTrainingsForUserWhereWhereConditionsRelation {
    
    /**
     * The relation that is checked.
     */
    @org.jetbrains.annotations.NotNull()
    private final java.lang.String relation = null;
    
    /**
     * The comparison operator to test against the amount.
     */
    @org.jetbrains.annotations.NotNull()
    private final com.apollographql.apollo3.api.Optional<com.makswin.fizbot.type.SQLOperator> operator = null;
    
    /**
     * The amount to test.
     */
    @org.jetbrains.annotations.NotNull()
    private final com.apollographql.apollo3.api.Optional<java.lang.Integer> amount = null;
    
    /**
     * Additional condition logic.
     */
    @org.jetbrains.annotations.NotNull()
    private final com.apollographql.apollo3.api.Optional<com.makswin.fizbot.type.QueryTrainingsForUserWhereWhereConditions> condition = null;
    
    /**
     * Dynamic HAS conditions for WHERE conditions for the `where` argument on the query
     * `trainings_for_user`.
     */
    @org.jetbrains.annotations.NotNull()
    public final com.makswin.fizbot.type.QueryTrainingsForUserWhereWhereConditionsRelation copy(@org.jetbrains.annotations.NotNull()
    java.lang.String relation, @org.jetbrains.annotations.NotNull()
    com.apollographql.apollo3.api.Optional<? extends com.makswin.fizbot.type.SQLOperator> operator, @org.jetbrains.annotations.NotNull()
    com.apollographql.apollo3.api.Optional<java.lang.Integer> amount, @org.jetbrains.annotations.NotNull()
    com.apollographql.apollo3.api.Optional<com.makswin.fizbot.type.QueryTrainingsForUserWhereWhereConditions> condition) {
        return null;
    }
    
    /**
     * Dynamic HAS conditions for WHERE conditions for the `where` argument on the query
     * `trainings_for_user`.
     */
    @java.lang.Override()
    public boolean equals(@org.jetbrains.annotations.Nullable()
    java.lang.Object other) {
        return false;
    }
    
    /**
     * Dynamic HAS conditions for WHERE conditions for the `where` argument on the query
     * `trainings_for_user`.
     */
    @java.lang.Override()
    public int hashCode() {
        return 0;
    }
    
    /**
     * Dynamic HAS conditions for WHERE conditions for the `where` argument on the query
     * `trainings_for_user`.
     */
    @org.jetbrains.annotations.NotNull()
    @java.lang.Override()
    public java.lang.String toString() {
        return null;
    }
    
    public QueryTrainingsForUserWhereWhereConditionsRelation(@org.jetbrains.annotations.NotNull()
    java.lang.String relation, @org.jetbrains.annotations.NotNull()
    com.apollographql.apollo3.api.Optional<? extends com.makswin.fizbot.type.SQLOperator> operator, @org.jetbrains.annotations.NotNull()
    com.apollographql.apollo3.api.Optional<java.lang.Integer> amount, @org.jetbrains.annotations.NotNull()
    com.apollographql.apollo3.api.Optional<com.makswin.fizbot.type.QueryTrainingsForUserWhereWhereConditions> condition) {
        super();
    }
    
    /**
     * The relation that is checked.
     */
    @org.jetbrains.annotations.NotNull()
    public final java.lang.String component1() {
        return null;
    }
    
    /**
     * The relation that is checked.
     */
    @org.jetbrains.annotations.NotNull()
    public final java.lang.String getRelation() {
        return null;
    }
    
    /**
     * The comparison operator to test against the amount.
     */
    @org.jetbrains.annotations.NotNull()
    public final com.apollographql.apollo3.api.Optional<com.makswin.fizbot.type.SQLOperator> component2() {
        return null;
    }
    
    /**
     * The comparison operator to test against the amount.
     */
    @org.jetbrains.annotations.NotNull()
    public final com.apollographql.apollo3.api.Optional<com.makswin.fizbot.type.SQLOperator> getOperator() {
        return null;
    }
    
    /**
     * The amount to test.
     */
    @org.jetbrains.annotations.NotNull()
    public final com.apollographql.apollo3.api.Optional<java.lang.Integer> component3() {
        return null;
    }
    
    /**
     * The amount to test.
     */
    @org.jetbrains.annotations.NotNull()
    public final com.apollographql.apollo3.api.Optional<java.lang.Integer> getAmount() {
        return null;
    }
    
    /**
     * Additional condition logic.
     */
    @org.jetbrains.annotations.NotNull()
    public final com.apollographql.apollo3.api.Optional<com.makswin.fizbot.type.QueryTrainingsForUserWhereWhereConditions> component4() {
        return null;
    }
    
    /**
     * Additional condition logic.
     */
    @org.jetbrains.annotations.NotNull()
    public final com.apollographql.apollo3.api.Optional<com.makswin.fizbot.type.QueryTrainingsForUserWhereWhereConditions> getCondition() {
        return null;
    }
}