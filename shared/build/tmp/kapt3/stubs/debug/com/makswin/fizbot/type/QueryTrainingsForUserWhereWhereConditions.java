package com.makswin.fizbot.type;

import java.lang.System;

/**
 * Dynamic WHERE conditions for the `where` argument on the query `trainings_for_user`.
 */
@kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u0000@\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0010\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\b\u0018\u00002\u00020\u0001B}\u0012\u0010\b\u0002\u0010\u0002\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00040\u0003\u0012\u0010\b\u0002\u0010\u0005\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00060\u0003\u0012\u0010\b\u0002\u0010\u0007\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00010\u0003\u0012\u0016\b\u0002\u0010\b\u001a\u0010\u0012\f\u0012\n\u0012\u0004\u0012\u00020\u0000\u0018\u00010\t0\u0003\u0012\u0016\b\u0002\u0010\n\u001a\u0010\u0012\f\u0012\n\u0012\u0004\u0012\u00020\u0000\u0018\u00010\t0\u0003\u0012\u0010\b\u0002\u0010\u000b\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\f0\u0003\u00a2\u0006\u0002\u0010\rJ\u0011\u0010\u0015\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00040\u0003H\u00c6\u0003J\u0011\u0010\u0016\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00060\u0003H\u00c6\u0003J\u0011\u0010\u0017\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00010\u0003H\u00c6\u0003J\u0017\u0010\u0018\u001a\u0010\u0012\f\u0012\n\u0012\u0004\u0012\u00020\u0000\u0018\u00010\t0\u0003H\u00c6\u0003J\u0017\u0010\u0019\u001a\u0010\u0012\f\u0012\n\u0012\u0004\u0012\u00020\u0000\u0018\u00010\t0\u0003H\u00c6\u0003J\u0011\u0010\u001a\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\f0\u0003H\u00c6\u0003J\u0081\u0001\u0010\u001b\u001a\u00020\u00002\u0010\b\u0002\u0010\u0002\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00040\u00032\u0010\b\u0002\u0010\u0005\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00060\u00032\u0010\b\u0002\u0010\u0007\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00010\u00032\u0016\b\u0002\u0010\b\u001a\u0010\u0012\f\u0012\n\u0012\u0004\u0012\u00020\u0000\u0018\u00010\t0\u00032\u0016\b\u0002\u0010\n\u001a\u0010\u0012\f\u0012\n\u0012\u0004\u0012\u00020\u0000\u0018\u00010\t0\u00032\u0010\b\u0002\u0010\u000b\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\f0\u0003H\u00c6\u0001J\u0013\u0010\u001c\u001a\u00020\u001d2\b\u0010\u001e\u001a\u0004\u0018\u00010\u0001H\u00d6\u0003J\t\u0010\u001f\u001a\u00020 H\u00d6\u0001J\t\u0010!\u001a\u00020\"H\u00d6\u0001R\u001f\u0010\b\u001a\u0010\u0012\f\u0012\n\u0012\u0004\u0012\u00020\u0000\u0018\u00010\t0\u0003\u00a2\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0019\u0010\u000b\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\f0\u0003\u00a2\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u000fR\u001f\u0010\n\u001a\u0010\u0012\f\u0012\n\u0012\u0004\u0012\u00020\u0000\u0018\u00010\t0\u0003\u00a2\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u000fR\u0019\u0010\u0002\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00040\u0003\u00a2\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u000fR\u0019\u0010\u0005\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00060\u0003\u00a2\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u000fR\u0019\u0010\u0007\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00010\u0003\u00a2\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u000f\u00a8\u0006#"}, d2 = {"Lcom/makswin/fizbot/type/QueryTrainingsForUserWhereWhereConditions;", "", "column", "Lcom/apollographql/apollo3/api/Optional;", "Lcom/makswin/fizbot/type/TrainingColumn;", "operator", "Lcom/makswin/fizbot/type/SQLOperator;", "value", "AND", "", "OR", "HAS", "Lcom/makswin/fizbot/type/QueryTrainingsForUserWhereWhereConditionsRelation;", "(Lcom/apollographql/apollo3/api/Optional;Lcom/apollographql/apollo3/api/Optional;Lcom/apollographql/apollo3/api/Optional;Lcom/apollographql/apollo3/api/Optional;Lcom/apollographql/apollo3/api/Optional;Lcom/apollographql/apollo3/api/Optional;)V", "getAND", "()Lcom/apollographql/apollo3/api/Optional;", "getHAS", "getOR", "getColumn", "getOperator", "getValue", "component1", "component2", "component3", "component4", "component5", "component6", "copy", "equals", "", "other", "hashCode", "", "toString", "", "shared_debug"})
public final class QueryTrainingsForUserWhereWhereConditions {
    
    /**
     * The column that is used for the condition.
     */
    @org.jetbrains.annotations.NotNull()
    private final com.apollographql.apollo3.api.Optional<com.makswin.fizbot.type.TrainingColumn> column = null;
    
    /**
     * The operator that is used for the condition.
     */
    @org.jetbrains.annotations.NotNull()
    private final com.apollographql.apollo3.api.Optional<com.makswin.fizbot.type.SQLOperator> operator = null;
    
    /**
     * The value that is used for the condition.
     */
    @org.jetbrains.annotations.NotNull()
    private final com.apollographql.apollo3.api.Optional<java.lang.Object> value = null;
    
    /**
     * A set of conditions that requires all conditions to match.
     */
    @org.jetbrains.annotations.NotNull()
    private final com.apollographql.apollo3.api.Optional<java.util.List<com.makswin.fizbot.type.QueryTrainingsForUserWhereWhereConditions>> AND = null;
    
    /**
     * A set of conditions that requires at least one condition to match.
     */
    @org.jetbrains.annotations.NotNull()
    private final com.apollographql.apollo3.api.Optional<java.util.List<com.makswin.fizbot.type.QueryTrainingsForUserWhereWhereConditions>> OR = null;
    
    /**
     * Check whether a relation exists. Extra conditions or a minimum amount can be applied.
     */
    @org.jetbrains.annotations.NotNull()
    private final com.apollographql.apollo3.api.Optional<com.makswin.fizbot.type.QueryTrainingsForUserWhereWhereConditionsRelation> HAS = null;
    
    /**
     * Dynamic WHERE conditions for the `where` argument on the query `trainings_for_user`.
     */
    @org.jetbrains.annotations.NotNull()
    public final com.makswin.fizbot.type.QueryTrainingsForUserWhereWhereConditions copy(@org.jetbrains.annotations.NotNull()
    com.apollographql.apollo3.api.Optional<? extends com.makswin.fizbot.type.TrainingColumn> column, @org.jetbrains.annotations.NotNull()
    com.apollographql.apollo3.api.Optional<? extends com.makswin.fizbot.type.SQLOperator> operator, @org.jetbrains.annotations.NotNull()
    com.apollographql.apollo3.api.Optional<? extends java.lang.Object> value, @org.jetbrains.annotations.NotNull()
    com.apollographql.apollo3.api.Optional<? extends java.util.List<com.makswin.fizbot.type.QueryTrainingsForUserWhereWhereConditions>> AND, @org.jetbrains.annotations.NotNull()
    com.apollographql.apollo3.api.Optional<? extends java.util.List<com.makswin.fizbot.type.QueryTrainingsForUserWhereWhereConditions>> OR, @org.jetbrains.annotations.NotNull()
    com.apollographql.apollo3.api.Optional<com.makswin.fizbot.type.QueryTrainingsForUserWhereWhereConditionsRelation> HAS) {
        return null;
    }
    
    /**
     * Dynamic WHERE conditions for the `where` argument on the query `trainings_for_user`.
     */
    @java.lang.Override()
    public boolean equals(@org.jetbrains.annotations.Nullable()
    java.lang.Object other) {
        return false;
    }
    
    /**
     * Dynamic WHERE conditions for the `where` argument on the query `trainings_for_user`.
     */
    @java.lang.Override()
    public int hashCode() {
        return 0;
    }
    
    /**
     * Dynamic WHERE conditions for the `where` argument on the query `trainings_for_user`.
     */
    @org.jetbrains.annotations.NotNull()
    @java.lang.Override()
    public java.lang.String toString() {
        return null;
    }
    
    public QueryTrainingsForUserWhereWhereConditions() {
        super();
    }
    
    public QueryTrainingsForUserWhereWhereConditions(@org.jetbrains.annotations.NotNull()
    com.apollographql.apollo3.api.Optional<? extends com.makswin.fizbot.type.TrainingColumn> column, @org.jetbrains.annotations.NotNull()
    com.apollographql.apollo3.api.Optional<? extends com.makswin.fizbot.type.SQLOperator> operator, @org.jetbrains.annotations.NotNull()
    com.apollographql.apollo3.api.Optional<? extends java.lang.Object> value, @org.jetbrains.annotations.NotNull()
    com.apollographql.apollo3.api.Optional<? extends java.util.List<com.makswin.fizbot.type.QueryTrainingsForUserWhereWhereConditions>> AND, @org.jetbrains.annotations.NotNull()
    com.apollographql.apollo3.api.Optional<? extends java.util.List<com.makswin.fizbot.type.QueryTrainingsForUserWhereWhereConditions>> OR, @org.jetbrains.annotations.NotNull()
    com.apollographql.apollo3.api.Optional<com.makswin.fizbot.type.QueryTrainingsForUserWhereWhereConditionsRelation> HAS) {
        super();
    }
    
    /**
     * The column that is used for the condition.
     */
    @org.jetbrains.annotations.NotNull()
    public final com.apollographql.apollo3.api.Optional<com.makswin.fizbot.type.TrainingColumn> component1() {
        return null;
    }
    
    /**
     * The column that is used for the condition.
     */
    @org.jetbrains.annotations.NotNull()
    public final com.apollographql.apollo3.api.Optional<com.makswin.fizbot.type.TrainingColumn> getColumn() {
        return null;
    }
    
    /**
     * The operator that is used for the condition.
     */
    @org.jetbrains.annotations.NotNull()
    public final com.apollographql.apollo3.api.Optional<com.makswin.fizbot.type.SQLOperator> component2() {
        return null;
    }
    
    /**
     * The operator that is used for the condition.
     */
    @org.jetbrains.annotations.NotNull()
    public final com.apollographql.apollo3.api.Optional<com.makswin.fizbot.type.SQLOperator> getOperator() {
        return null;
    }
    
    /**
     * The value that is used for the condition.
     */
    @org.jetbrains.annotations.NotNull()
    public final com.apollographql.apollo3.api.Optional<java.lang.Object> component3() {
        return null;
    }
    
    /**
     * The value that is used for the condition.
     */
    @org.jetbrains.annotations.NotNull()
    public final com.apollographql.apollo3.api.Optional<java.lang.Object> getValue() {
        return null;
    }
    
    /**
     * A set of conditions that requires all conditions to match.
     */
    @org.jetbrains.annotations.NotNull()
    public final com.apollographql.apollo3.api.Optional<java.util.List<com.makswin.fizbot.type.QueryTrainingsForUserWhereWhereConditions>> component4() {
        return null;
    }
    
    /**
     * A set of conditions that requires all conditions to match.
     */
    @org.jetbrains.annotations.NotNull()
    public final com.apollographql.apollo3.api.Optional<java.util.List<com.makswin.fizbot.type.QueryTrainingsForUserWhereWhereConditions>> getAND() {
        return null;
    }
    
    /**
     * A set of conditions that requires at least one condition to match.
     */
    @org.jetbrains.annotations.NotNull()
    public final com.apollographql.apollo3.api.Optional<java.util.List<com.makswin.fizbot.type.QueryTrainingsForUserWhereWhereConditions>> component5() {
        return null;
    }
    
    /**
     * A set of conditions that requires at least one condition to match.
     */
    @org.jetbrains.annotations.NotNull()
    public final com.apollographql.apollo3.api.Optional<java.util.List<com.makswin.fizbot.type.QueryTrainingsForUserWhereWhereConditions>> getOR() {
        return null;
    }
    
    /**
     * Check whether a relation exists. Extra conditions or a minimum amount can be applied.
     */
    @org.jetbrains.annotations.NotNull()
    public final com.apollographql.apollo3.api.Optional<com.makswin.fizbot.type.QueryTrainingsForUserWhereWhereConditionsRelation> component6() {
        return null;
    }
    
    /**
     * Check whether a relation exists. Extra conditions or a minimum amount can be applied.
     */
    @org.jetbrains.annotations.NotNull()
    public final com.apollographql.apollo3.api.Optional<com.makswin.fizbot.type.QueryTrainingsForUserWhereWhereConditionsRelation> getHAS() {
        return null;
    }
}