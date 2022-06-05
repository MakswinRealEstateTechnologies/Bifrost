package com.makswin.bifrost.modules.help;

import java.lang.System;

@kotlin.Metadata(mv = {1, 6, 0}, k = 1, d1 = {"\u0000<\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010 \n\u0000\u0018\u00002\u00020\u0001B\u0005\u00a2\u0006\u0002\u0010\u0002J\u0019\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006H\u0086@\u00f8\u0001\u0000\u00a2\u0006\u0002\u0010\u0007J\u001f\u0010\b\u001a\u0010\u0012\u0004\u0012\u00020\u0004\u0012\u0006\u0012\u0004\u0018\u00010\n0\tH\u0086@\u00f8\u0001\u0000\u00a2\u0006\u0002\u0010\u000bJ.\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000f2\u001e\u0010\u0010\u001a\u001a\u0012\u0004\u0012\u00020\u0004\u0012\n\u0012\b\u0012\u0004\u0012\u00020\n0\u0012\u0012\u0004\u0012\u00020\r0\u0011\u0082\u0002\u0004\n\u0002\b\u0019\u00a8\u0006\u0013"}, d2 = {"Lcom/makswin/bifrost/modules/help/HelpService;", "Lcom/makswin/bifrost/core/BaseService;", "()V", "addFeedback", "Lcom/makswin/bifrost/enums/ResponseType;", "model", "Lcom/makswin/bifrost/modules/help/requestModels/AddFeedBackModel;", "(Lcom/makswin/bifrost/modules/help/requestModels/AddFeedBackModel;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "getLastTraining", "Lkotlin/Pair;", "Lcom/makswin/bifrost/modules/help/responseModels/TrainingModel;", "(Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "getTrainingList", "", "type", "Lcom/makswin/bifrost/enums/TrainingsTimeType;", "completion", "Lkotlin/Function2;", "", "shared_debug"})
public final class HelpService extends com.makswin.bifrost.core.BaseService {
    
    public HelpService() {
        super();
    }
    
    /**
     * Getting some feedback or bug from user about app
     * @author alkincakiralar
     */
    @org.jetbrains.annotations.Nullable()
    public final java.lang.Object addFeedback(@org.jetbrains.annotations.NotNull()
    com.makswin.bifrost.modules.help.requestModels.AddFeedBackModel model, @org.jetbrains.annotations.NotNull()
    kotlin.coroutines.Continuation<? super com.makswin.bifrost.enums.ResponseType> continuation) {
        return null;
    }
    
    /**
     * @author alkincakiralar
     */
    @org.jetbrains.annotations.Nullable()
    public final java.lang.Object getLastTraining(@org.jetbrains.annotations.NotNull()
    kotlin.coroutines.Continuation<? super kotlin.Pair<? extends com.makswin.bifrost.enums.ResponseType, com.makswin.bifrost.modules.help.responseModels.TrainingModel>> continuation) {
        return null;
    }
    
    /**
     * @author alkincakiralar
     */
    public final void getTrainingList(@org.jetbrains.annotations.NotNull()
    com.makswin.bifrost.enums.TrainingsTimeType type, @org.jetbrains.annotations.NotNull()
    kotlin.jvm.functions.Function2<? super com.makswin.bifrost.enums.ResponseType, ? super java.util.List<com.makswin.bifrost.modules.help.responseModels.TrainingModel>, kotlin.Unit> completion) {
    }
}