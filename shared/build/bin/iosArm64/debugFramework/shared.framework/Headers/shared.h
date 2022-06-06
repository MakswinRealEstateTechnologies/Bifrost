#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedApollo_apiApolloResponse<D>, SharedBaseResponseModel<T>, SharedApollo_apiHttpRequest, SharedApollo_apiHttpResponse, SharedResponseStatus, SharedKotlinEnumCompanion, SharedKotlinEnum<E>, SharedKotlinArray<T>, SharedAddFeedBackType, SharedTrainingsTimeType, SharedBaseRepository, SharedFragmentInsurance, SharedInsuranceModel, SharedLogin, SharedFragmentAuth, SharedUser, SharedAuth, SharedFragmentUser, SharedAddFeedBackModel, SharedFragmentTraining, SharedTrainingModel, SharedLanguageResponse, SharedFragmentLanguage, SharedLanguage, SharedBasePaginatorModel, SharedApollo_apiCompiledField, SharedApollo_apiCustomScalarAdapters, SharedAddFeedbackInput, SharedAddFeedbackMutationCompanion, SharedAddFeedbackMutation, SharedAddFeedbackMutationAddFeedback, SharedAddFeedbackMutationData, SharedCallingCodesQueryCompanion, SharedCallingCodesQueryData1, SharedCallingCodesQueryCalling_codes, SharedCallingCodesQueryData, SharedFragmentCallingCode, SharedCheckInsuranceQueryCompanion, SharedCheckInsuranceQuery, SharedCheckInsuranceQueryKoalay_dealer_info, SharedCheckInsuranceQueryData, SharedKoalayDefineDealerInput, SharedCreateInsuranceMutationCompanion, SharedCreateInsuranceMutation, SharedCreateInsuranceMutationKoalay_define_dealer, SharedCreateInsuranceMutationData, SharedForgotPasswordOTPMutationCompanion, SharedForgotPasswordOTPMutation, SharedForgotPasswordOTPMutationForgotPasswordOTP, SharedForgotPasswordOTPMutationData, SharedLanguagesQueryCompanion, SharedLanguagesQueryLanguages, SharedLanguagesQueryData, SharedLanguagesQueryData1, SharedLoginMutationCompanion, SharedLoginMutation, SharedLoginMutationLogin, SharedLoginMutationData, SharedQueryTrainingsForUserWhereWhereConditions, SharedQueryTrainingsForUserOrderByOrderByClause, SharedTrainingsQueryCompanion, SharedTrainingsQuery, SharedTrainingsQueryTrainings_for_user, SharedTrainingsQueryData, SharedTrainingsQueryData1, SharedAddFeedbackMutation_ResponseAdapter, SharedAddFeedbackMutation_ResponseAdapterAddFeedback, SharedAddFeedbackMutation_ResponseAdapterData, SharedAddFeedbackMutation_VariablesAdapter, SharedCallingCodesQuery_ResponseAdapter, SharedCallingCodesQuery_ResponseAdapterCalling_codes, SharedCallingCodesQuery_ResponseAdapterData, SharedCallingCodesQuery_ResponseAdapterData1, SharedCheckInsuranceQuery_ResponseAdapter, SharedCheckInsuranceQuery_ResponseAdapterData, SharedCheckInsuranceQuery_ResponseAdapterKoalay_dealer_info, SharedCheckInsuranceQuery_VariablesAdapter, SharedCreateInsuranceMutation_ResponseAdapter, SharedCreateInsuranceMutation_ResponseAdapterData, SharedCreateInsuranceMutation_ResponseAdapterKoalay_define_dealer, SharedCreateInsuranceMutation_VariablesAdapter, SharedForgotPasswordOTPMutation_ResponseAdapter, SharedForgotPasswordOTPMutation_ResponseAdapterData, SharedForgotPasswordOTPMutation_ResponseAdapterForgotPasswordOTP, SharedForgotPasswordOTPMutation_VariablesAdapter, SharedLanguagesQuery_ResponseAdapter, SharedLanguagesQuery_ResponseAdapterData, SharedLanguagesQuery_ResponseAdapterData1, SharedLanguagesQuery_ResponseAdapterLanguages, SharedLoginMutation_ResponseAdapter, SharedLoginMutation_ResponseAdapterData, SharedLoginMutation_ResponseAdapterLogin, SharedLoginMutation_VariablesAdapter, SharedTrainingsQuery_ResponseAdapter, SharedTrainingsQuery_ResponseAdapterData, SharedTrainingsQuery_ResponseAdapterData1, SharedTrainingsQuery_ResponseAdapterTrainings_for_user, SharedTrainingsQuery_VariablesAdapter, SharedFeedbackType, SharedApollo_apiOptional<__covariant V>, SharedAuthPayloadCompanion, SharedApollo_apiObjectType, SharedBuyerCompanion, SharedBuyerDemandCompanion, SharedCallingCodeCompanion, SharedCallingCodePaginatorCompanion, SharedDateTimeCompanion, SharedApollo_apiCustomScalarType, SharedFeedbackCompanion, SharedFeedbackTypeCompanion, SharedApollo_apiEnumType, SharedForgotPasswordResponseCompanion, SharedGraphQLBooleanCompanion, SharedGraphQLFloatCompanion, SharedGraphQLIDCompanion, SharedGraphQLIntCompanion, SharedGraphQLStringCompanion, SharedKoalayDealerCompanion, SharedLanguage_Companion, SharedLanguagePaginatorCompanion, SharedMixedCompanion, SharedMutationCompanion, SharedQueryCompanion, SharedTrainingColumn, SharedSortOrder, SharedSQLOperator, SharedQueryTrainingsForUserWhereWhereConditionsRelation, SharedSQLOperatorCompanion, SharedSortOrderCompanion, SharedTrainingCompanion, SharedTrainingColumnCompanion, SharedTrainingPaginatorCompanion, SharedUser_Companion, SharedAddFeedbackInput_InputAdapter, SharedFeedbackType_ResponseAdapter, SharedKoalayDefineDealerInput_InputAdapter, SharedQueryTrainingsForUserOrderByOrderByClause_InputAdapter, SharedQueryTrainingsForUserWhereWhereConditionsRelation_InputAdapter, SharedQueryTrainingsForUserWhereWhereConditions_InputAdapter, SharedSQLOperator_ResponseAdapter, SharedSortOrder_ResponseAdapter, SharedTrainingColumn_ResponseAdapter, SharedAddFeedbackMutationSelections, SharedApollo_apiCompiledSelection, SharedCallingCodesQuerySelections, SharedCheckInsuranceQuerySelections, SharedCreateInsuranceMutationSelections, SharedForgotPasswordOTPMutationSelections, SharedLanguagesQuerySelections, SharedLoginMutationSelections, SharedTrainingsQuerySelections, SharedFragmentAuthUser, SharedFragmentAuthImpl_ResponseAdapter, SharedFragmentAuthImpl_ResponseAdapterFragmentAuth, SharedFragmentAuthImpl_ResponseAdapterUser, SharedFragmentBuyerDemand, SharedFragmentBuyer, SharedFragmentBuyerBuyer, SharedFragmentBuyerImpl_ResponseAdapter, SharedFragmentBuyerImpl_ResponseAdapterBuyer, SharedFragmentBuyerImpl_ResponseAdapterDemand, SharedFragmentBuyerImpl_ResponseAdapterFragmentBuyer, SharedFragmentCallingCodeImpl_ResponseAdapter, SharedFragmentCallingCodeImpl_ResponseAdapterFragmentCallingCode, SharedFragmentInsuranceImpl_ResponseAdapter, SharedFragmentInsuranceImpl_ResponseAdapterFragmentInsurance, SharedFragmentLanguageImpl_ResponseAdapter, SharedFragmentLanguageImpl_ResponseAdapterFragmentLanguage, SharedFragmentTrainingImpl_ResponseAdapter, SharedFragmentTrainingImpl_ResponseAdapterFragmentTraining, SharedFragmentUserImpl_ResponseAdapter, SharedFragmentUserImpl_ResponseAdapterFragmentUser, SharedfragmentAuthSelections, SharedfragmentBuyerSelections, SharedfragmentCallingCodeSelections, SharedfragmentInsuranceSelections, SharedfragmentLanguageSelections, SharedfragmentTrainingSelections, SharedfragmentUserSelections, SharedKotlinThrowable, SharedKotlinException, SharedKotlinRuntimeException, SharedKotlinIllegalStateException, SharedApollo_apiApolloResponseBuilder<D>, SharedApollo_apiError, SharedUuidUuid, SharedApollo_apiHttpRequestBuilder, SharedApollo_apiHttpMethod, SharedApollo_apiHttpHeader, SharedApollo_apiHttpResponseBuilder, SharedApollo_apiExecutableVariables, SharedApollo_apiCompiledFieldBuilder, SharedApollo_apiCompiledArgument, SharedApollo_apiCompiledCondition, SharedApollo_apiCompiledType, SharedApollo_apiJsonNumber, SharedApollo_apiCustomScalarAdaptersKey, SharedApollo_apiCustomScalarAdaptersBuilder, SharedApollo_apiAdapterContext, SharedKotlinNothing, SharedApollo_apiJsonReaderToken, SharedApollo_apiOptionalCompanion, SharedApollo_apiCompiledNamedType, SharedApollo_apiInterfaceType, SharedApollo_apiErrorLocation, SharedKotlinByteArray, SharedOkioByteString, SharedOkioBuffer, SharedOkioTimeout, SharedApollo_apiAdapterContextBuilder, SharedKotlinByteIterator, SharedOkioByteStringCompanion, SharedOkioBufferUnsafeCursor, SharedOkioTimeoutCompanion, SharedApollo_apiCustomTypeValue<T>, SharedApollo_apiDeferredFragmentIdentifier, SharedApollo_apiCustomTypeValueCompanion;

@protocol SharedApollo_apiMutationData, SharedApollo_apiQueryData, SharedApollo_apiMutation, SharedApollo_apiQuery, SharedApollo_runtimeHttpInterceptorChain, SharedApollo_runtimeHttpInterceptor, SharedKotlinComparable, SharedApollo_apiAdapter, SharedApollo_apiJsonWriter, SharedApollo_apiExecutable, SharedApollo_apiOperation, SharedApollo_apiExecutableData, SharedApollo_apiOperationData, SharedApollo_apiJsonReader, SharedApollo_apiFragmentData, SharedApollo_apiExecutionContext, SharedApollo_apiHttpBody, SharedOkioBufferedSource, SharedKotlinIterator, SharedApollo_apiUpload, SharedOkioCloseable, SharedApollo_apiExecutionContextKey, SharedApollo_apiExecutionContextElement, SharedOkioBufferedSink, SharedOkioSink, SharedOkioSource, SharedApollo_apiCustomTypeAdapter;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("BaseRepository")))
@interface SharedBaseRepository : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)checkMutationResponseResponse:(SharedApollo_apiApolloResponse<id<SharedApollo_apiMutationData>> *)response __attribute__((swift_name("checkMutationResponse(response:)")));
- (BOOL)checkQueryResponseResponse:(SharedApollo_apiApolloResponse<id<SharedApollo_apiQueryData>> *)response __attribute__((swift_name("checkQueryResponse(response:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeMutationMutation:(id<SharedApollo_apiMutation>)mutation completionHandler:(void (^)(SharedApollo_apiApolloResponse<id<SharedApollo_apiMutationData>> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("executeMutation(mutation:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeQueryQuery:(id<SharedApollo_apiQuery>)query completionHandler:(void (^)(SharedApollo_apiApolloResponse<id<SharedApollo_apiQueryData>> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("executeQuery(query:completionHandler:)")));
- (SharedBaseResponseModel<id> *)onError __attribute__((swift_name("onError()")));
- (SharedBaseResponseModel<id> *)onSuccess __attribute__((swift_name("onSuccess()")));
- (SharedBaseResponseModel<id> *)onSuccessData:(id _Nullable)data __attribute__((swift_name("onSuccess(data:)")));
@end;

__attribute__((swift_name("Apollo_runtimeHttpInterceptor")))
@protocol SharedApollo_runtimeHttpInterceptor
@required
- (void)dispose __attribute__((swift_name("dispose()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)interceptRequest:(SharedApollo_apiHttpRequest *)request chain:(id<SharedApollo_runtimeHttpInterceptorChain>)chain completionHandler:(void (^)(SharedApollo_apiHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("intercept(request:chain:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLAuthorizationInterceptor")))
@interface SharedGraphQLAuthorizationInterceptor : SharedBase <SharedApollo_runtimeHttpInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)interceptRequest:(SharedApollo_apiHttpRequest *)request chain:(id<SharedApollo_runtimeHttpInterceptorChain>)chain completionHandler:(void (^)(SharedApollo_apiHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("intercept(request:chain:completionHandler:)")));
@end;

__attribute__((swift_name("GraphQLNetwork")))
@interface SharedGraphQLNetwork : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("BasePaginatorModel")))
@interface SharedBasePaginatorModel : SharedBase
- (instancetype)initWithPage:(int32_t)page skip:(int32_t)skip __attribute__((swift_name("init(page:skip:)"))) __attribute__((objc_designated_initializer));
@property int32_t page __attribute__((swift_name("page")));
@property int32_t skip __attribute__((swift_name("skip")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseResponseModel")))
@interface SharedBaseResponseModel<T> : SharedBase
- (instancetype)initWithStatus:(SharedResponseStatus *)status data:(T _Nullable)data __attribute__((swift_name("init(status:data:)"))) __attribute__((objc_designated_initializer));
- (SharedResponseStatus *)component1 __attribute__((swift_name("component1()")));
- (T _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedBaseResponseModel<T> *)doCopyStatus:(SharedResponseStatus *)status data:(T _Nullable)data __attribute__((swift_name("doCopy(status:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@property (readonly) SharedResponseStatus *status __attribute__((swift_name("status")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum<E> : SharedBase <SharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResponseStatus")))
@interface SharedResponseStatus : SharedKotlinEnum<SharedResponseStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedResponseStatus *success __attribute__((swift_name("success")));
@property (class, readonly) SharedResponseStatus *error __attribute__((swift_name("error")));
+ (SharedKotlinArray<SharedResponseStatus *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddFeedBackType")))
@interface SharedAddFeedBackType : SharedKotlinEnum<SharedAddFeedBackType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedAddFeedBackType *bug __attribute__((swift_name("bug")));
@property (class, readonly) SharedAddFeedBackType *feedback __attribute__((swift_name("feedback")));
+ (SharedKotlinArray<SharedAddFeedBackType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingsTimeType")))
@interface SharedTrainingsTimeType : SharedKotlinEnum<SharedTrainingsTimeType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedTrainingsTimeType *previous __attribute__((swift_name("previous")));
@property (class, readonly) SharedTrainingsTimeType *next __attribute__((swift_name("next")));
+ (SharedKotlinArray<SharedTrainingsTimeType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InsuranceService")))
@interface SharedInsuranceService : SharedBaseRepository
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InsuranceModel")))
@interface SharedInsuranceModel : SharedBase
- (instancetype)initWithData:(SharedFragmentInsurance *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithUrlDask:(NSString *)urlDask urlResidencial:(NSString *)urlResidencial __attribute__((swift_name("init(urlDask:urlResidencial:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedInsuranceModel *)doCopyUrlDask:(NSString *)urlDask urlResidencial:(NSString *)urlResidencial __attribute__((swift_name("doCopy(urlDask:urlResidencial:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *urlDask __attribute__((swift_name("urlDask")));
@property NSString *urlResidencial __attribute__((swift_name("urlResidencial")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthenticationService")))
@interface SharedAuthenticationService : SharedBaseRepository
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)configureTokenToken:(NSString *)token __attribute__((swift_name("configureToken(token:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Login")))
@interface SharedLogin : SharedBase
- (instancetype)initWithCellPhone:(NSString *)cellPhone password:(NSString *)password __attribute__((swift_name("init(cellPhone:password:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedLogin *)doCopyCellPhone:(NSString *)cellPhone password:(NSString *)password __attribute__((swift_name("doCopy(cellPhone:password:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cellPhone __attribute__((swift_name("cellPhone")));
@property (readonly) NSString *password __attribute__((swift_name("password")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Auth")))
@interface SharedAuth : SharedBase
- (instancetype)initWithData:(SharedFragmentAuth *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAccessToken:(NSString *)accessToken refreshToken:(NSString *)refreshToken expiresIn:(int32_t)expiresIn user:(SharedUser *)user __attribute__((swift_name("init(accessToken:refreshToken:expiresIn:user:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (SharedUser *)component4 __attribute__((swift_name("component4()")));
- (SharedAuth *)doCopyAccessToken:(NSString *)accessToken refreshToken:(NSString *)refreshToken expiresIn:(int32_t)expiresIn user:(SharedUser *)user __attribute__((swift_name("doCopy(accessToken:refreshToken:expiresIn:user:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *accessToken __attribute__((swift_name("accessToken")));
@property int32_t expiresIn __attribute__((swift_name("expiresIn")));
@property NSString *refreshToken __attribute__((swift_name("refreshToken")));
@property SharedUser *user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User")))
@interface SharedUser : SharedBase
- (instancetype)initWithData:(SharedFragmentUser *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(int32_t)id fullName:(NSString *)fullName cellPhone:(NSString *)cellPhone countryCode:(NSString *)countryCode avatarThumb:(NSString *)avatarThumb email:(NSString *)email paymentUrl:(NSString *)paymentUrl userPaymentState:(BOOL)userPaymentState __attribute__((swift_name("init(id:fullName:cellPhone:countryCode:avatarThumb:email:paymentUrl:userPaymentState:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (SharedUser *)doCopyId:(int32_t)id fullName:(NSString *)fullName cellPhone:(NSString *)cellPhone countryCode:(NSString *)countryCode avatarThumb:(NSString *)avatarThumb email:(NSString *)email paymentUrl:(NSString *)paymentUrl userPaymentState:(BOOL)userPaymentState __attribute__((swift_name("doCopy(id:fullName:cellPhone:countryCode:avatarThumb:email:paymentUrl:userPaymentState:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *avatarThumb __attribute__((swift_name("avatarThumb")));
@property NSString *cellPhone __attribute__((swift_name("cellPhone")));
@property NSString *countryCode __attribute__((swift_name("countryCode")));
@property NSString *email __attribute__((swift_name("email")));
@property NSString *fullName __attribute__((swift_name("fullName")));
@property int32_t id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HelpService")))
@interface SharedHelpService : SharedBaseRepository
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddFeedBackModel")))
@interface SharedAddFeedBackModel : SharedBase
- (instancetype)initWithType:(SharedAddFeedBackType *)type note:(NSString *)note __attribute__((swift_name("init(type:note:)"))) __attribute__((objc_designated_initializer));
- (SharedAddFeedBackType *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedAddFeedBackModel *)doCopyType:(SharedAddFeedBackType *)type note:(NSString *)note __attribute__((swift_name("doCopy(type:note:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *note __attribute__((swift_name("note")));
@property (readonly) SharedAddFeedBackType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingModel")))
@interface SharedTrainingModel : SharedBase
- (instancetype)initWithData:(SharedFragmentTraining *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithStartsAt:(NSString *)startsAt endAt:(NSString *)endAt title:(NSString *)title meetingId:(NSString *)meetingId meetingPassword:(NSString *)meetingPassword meetingLink:(NSString *)meetingLink recordingLink:(NSString *)recordingLink __attribute__((swift_name("init(startsAt:endAt:title:meetingId:meetingPassword:meetingLink:recordingLink:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (SharedTrainingModel *)doCopyStartsAt:(NSString *)startsAt endAt:(NSString *)endAt title:(NSString *)title meetingId:(NSString *)meetingId meetingPassword:(NSString *)meetingPassword meetingLink:(NSString *)meetingLink recordingLink:(NSString *)recordingLink __attribute__((swift_name("doCopy(startsAt:endAt:title:meetingId:meetingPassword:meetingLink:recordingLink:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *endAt __attribute__((swift_name("endAt")));
@property NSString *meetingId __attribute__((swift_name("meetingId")));
@property NSString *meetingLink __attribute__((swift_name("meetingLink")));
@property NSString *meetingPassword __attribute__((swift_name("meetingPassword")));
@property NSString *recordingLink __attribute__((swift_name("recordingLink")));
@property NSString *startsAt __attribute__((swift_name("startsAt")));
@property NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiscellaneousRepository")))
@interface SharedMiscellaneousRepository : SharedBaseRepository
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)languagesWithCompletionHandler:(void (^)(SharedBaseResponseModel<SharedLanguageResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("languages(completionHandler:)")));
- (void)test2 __attribute__((swift_name("test2()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Language")))
@interface SharedLanguage : SharedBase
- (instancetype)initWithData:(SharedFragmentLanguage *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(int32_t)id key:(NSString *)key value:(NSString *)value __attribute__((swift_name("init(id:key:value:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (SharedLanguage *)doCopyId:(int32_t)id key:(NSString *)key value:(NSString *)value __attribute__((swift_name("doCopy(id:key:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t id __attribute__((swift_name("id")));
@property NSString *key __attribute__((swift_name("key")));
@property NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LanguageResponse")))
@interface SharedLanguageResponse : SharedBasePaginatorModel
- (instancetype)initWithLanguages:(NSArray<SharedLanguage *> *)languages __attribute__((swift_name("init(languages:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPage:(int32_t)page skip:(int32_t)skip __attribute__((swift_name("init(page:skip:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property NSArray<SharedLanguage *> *languages __attribute__((swift_name("languages")));
@end;

__attribute__((swift_name("Apollo_apiExecutable")))
@protocol SharedApollo_apiExecutable
@required
- (id<SharedApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (SharedApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:)")));
@end;

__attribute__((swift_name("Apollo_apiOperation")))
@protocol SharedApollo_apiOperation <SharedApollo_apiExecutable>
@required
- (NSString *)document __attribute__((swift_name("document()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name_ __attribute__((swift_name("name()")));
@end;

__attribute__((swift_name("Apollo_apiMutation")))
@protocol SharedApollo_apiMutation <SharedApollo_apiOperation>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddFeedbackMutation")))
@interface SharedAddFeedbackMutation : SharedBase <SharedApollo_apiMutation>
- (instancetype)initWithInput:(SharedAddFeedbackInput *)input __attribute__((swift_name("init(input:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedAddFeedbackMutationCompanion *companion __attribute__((swift_name("companion")));
- (id<SharedApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (SharedAddFeedbackInput *)component1 __attribute__((swift_name("component1()")));
- (SharedAddFeedbackMutation *)doCopyInput:(SharedAddFeedbackInput *)input __attribute__((swift_name("doCopy(input:)")));
- (NSString *)document __attribute__((swift_name("document()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name_ __attribute__((swift_name("name()")));
- (SharedApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedAddFeedbackInput *input __attribute__((swift_name("input")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddFeedbackMutation.AddFeedback")))
@interface SharedAddFeedbackMutationAddFeedback : SharedBase
- (instancetype)initWithNote:(NSString *)note __attribute__((swift_name("init(note:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedAddFeedbackMutationAddFeedback *)doCopyNote:(NSString *)note __attribute__((swift_name("doCopy(note:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *note __attribute__((swift_name("note")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddFeedbackMutation.Companion")))
@interface SharedAddFeedbackMutationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedAddFeedbackMutationCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *OPERATION_DOCUMENT __attribute__((swift_name("OPERATION_DOCUMENT")));
@property (readonly) NSString *OPERATION_ID __attribute__((swift_name("OPERATION_ID")));
@property (readonly) NSString *OPERATION_NAME __attribute__((swift_name("OPERATION_NAME")));
@end;

__attribute__((swift_name("Apollo_apiExecutableData")))
@protocol SharedApollo_apiExecutableData
@required
@end;

__attribute__((swift_name("Apollo_apiOperationData")))
@protocol SharedApollo_apiOperationData <SharedApollo_apiExecutableData>
@required
@end;

__attribute__((swift_name("Apollo_apiMutationData")))
@protocol SharedApollo_apiMutationData <SharedApollo_apiOperationData>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddFeedbackMutation.Data")))
@interface SharedAddFeedbackMutationData : SharedBase <SharedApollo_apiMutationData>
- (instancetype)initWithAddFeedback:(SharedAddFeedbackMutationAddFeedback * _Nullable)addFeedback __attribute__((swift_name("init(addFeedback:)"))) __attribute__((objc_designated_initializer));
- (SharedAddFeedbackMutationAddFeedback * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedAddFeedbackMutationData *)doCopyAddFeedback:(SharedAddFeedbackMutationAddFeedback * _Nullable)addFeedback __attribute__((swift_name("doCopy(addFeedback:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedAddFeedbackMutationAddFeedback * _Nullable addFeedback __attribute__((swift_name("addFeedback")));
@end;

__attribute__((swift_name("Apollo_apiQuery")))
@protocol SharedApollo_apiQuery <SharedApollo_apiOperation>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery")))
@interface SharedCallingCodesQuery : SharedBase <SharedApollo_apiQuery>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedCallingCodesQueryCompanion *companion __attribute__((swift_name("companion")));
- (id<SharedApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (NSString *)document __attribute__((swift_name("document()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name_ __attribute__((swift_name("name()")));
- (SharedApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery.Calling_codes")))
@interface SharedCallingCodesQueryCalling_codes : SharedBase
- (instancetype)initWithData:(NSArray<SharedCallingCodesQueryData1 *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedCallingCodesQueryData1 *> *)component1 __attribute__((swift_name("component1()")));
- (SharedCallingCodesQueryCalling_codes *)doCopyData:(NSArray<SharedCallingCodesQueryData1 *> *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedCallingCodesQueryData1 *> *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery.Companion")))
@interface SharedCallingCodesQueryCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCallingCodesQueryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *OPERATION_DOCUMENT __attribute__((swift_name("OPERATION_DOCUMENT")));
@property (readonly) NSString *OPERATION_ID __attribute__((swift_name("OPERATION_ID")));
@property (readonly) NSString *OPERATION_NAME __attribute__((swift_name("OPERATION_NAME")));
@end;

__attribute__((swift_name("Apollo_apiQueryData")))
@protocol SharedApollo_apiQueryData <SharedApollo_apiOperationData>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery.Data")))
@interface SharedCallingCodesQueryData : SharedBase <SharedApollo_apiQueryData>
- (instancetype)initWithCalling_codes:(SharedCallingCodesQueryCalling_codes * _Nullable)calling_codes __attribute__((swift_name("init(calling_codes:)"))) __attribute__((objc_designated_initializer));
- (SharedCallingCodesQueryCalling_codes * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedCallingCodesQueryData *)doCopyCalling_codes:(SharedCallingCodesQueryCalling_codes * _Nullable)calling_codes __attribute__((swift_name("doCopy(calling_codes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedCallingCodesQueryCalling_codes * _Nullable calling_codes __attribute__((swift_name("calling_codes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery.Data1")))
@interface SharedCallingCodesQueryData1 : SharedBase
- (instancetype)initWith__typename:(NSString *)__typename fragmentCallingCode:(SharedFragmentCallingCode *)fragmentCallingCode __attribute__((swift_name("init(__typename:fragmentCallingCode:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedFragmentCallingCode *)component2 __attribute__((swift_name("component2()")));
- (SharedCallingCodesQueryData1 *)doCopy__typename:(NSString *)__typename fragmentCallingCode:(SharedFragmentCallingCode *)fragmentCallingCode __attribute__((swift_name("doCopy(__typename:fragmentCallingCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) SharedFragmentCallingCode *fragmentCallingCode __attribute__((swift_name("fragmentCallingCode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckInsuranceQuery")))
@interface SharedCheckInsuranceQuery : SharedBase <SharedApollo_apiQuery>
- (instancetype)initWithDealerCode:(NSString *)dealerCode __attribute__((swift_name("init(dealerCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCheckInsuranceQueryCompanion *companion __attribute__((swift_name("companion")));
- (id<SharedApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedCheckInsuranceQuery *)doCopyDealerCode:(NSString *)dealerCode __attribute__((swift_name("doCopy(dealerCode:)")));
- (NSString *)document __attribute__((swift_name("document()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name_ __attribute__((swift_name("name()")));
- (SharedApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *dealerCode __attribute__((swift_name("dealerCode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckInsuranceQuery.Companion")))
@interface SharedCheckInsuranceQueryCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCheckInsuranceQueryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *OPERATION_DOCUMENT __attribute__((swift_name("OPERATION_DOCUMENT")));
@property (readonly) NSString *OPERATION_ID __attribute__((swift_name("OPERATION_ID")));
@property (readonly) NSString *OPERATION_NAME __attribute__((swift_name("OPERATION_NAME")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckInsuranceQuery.Data")))
@interface SharedCheckInsuranceQueryData : SharedBase <SharedApollo_apiQueryData>
- (instancetype)initWithKoalay_dealer_info:(SharedCheckInsuranceQueryKoalay_dealer_info * _Nullable)koalay_dealer_info __attribute__((swift_name("init(koalay_dealer_info:)"))) __attribute__((objc_designated_initializer));
- (SharedCheckInsuranceQueryKoalay_dealer_info * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedCheckInsuranceQueryData *)doCopyKoalay_dealer_info:(SharedCheckInsuranceQueryKoalay_dealer_info * _Nullable)koalay_dealer_info __attribute__((swift_name("doCopy(koalay_dealer_info:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedCheckInsuranceQueryKoalay_dealer_info * _Nullable koalay_dealer_info __attribute__((swift_name("koalay_dealer_info")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckInsuranceQuery.Koalay_dealer_info")))
@interface SharedCheckInsuranceQueryKoalay_dealer_info : SharedBase
- (instancetype)initWith__typename:(NSString *)__typename fragmentInsurance:(SharedFragmentInsurance *)fragmentInsurance __attribute__((swift_name("init(__typename:fragmentInsurance:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedFragmentInsurance *)component2 __attribute__((swift_name("component2()")));
- (SharedCheckInsuranceQueryKoalay_dealer_info *)doCopy__typename:(NSString *)__typename fragmentInsurance:(SharedFragmentInsurance *)fragmentInsurance __attribute__((swift_name("doCopy(__typename:fragmentInsurance:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) SharedFragmentInsurance *fragmentInsurance __attribute__((swift_name("fragmentInsurance")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateInsuranceMutation")))
@interface SharedCreateInsuranceMutation : SharedBase <SharedApollo_apiMutation>
- (instancetype)initWithInput:(SharedKoalayDefineDealerInput *)input __attribute__((swift_name("init(input:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCreateInsuranceMutationCompanion *companion __attribute__((swift_name("companion")));
- (id<SharedApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (SharedKoalayDefineDealerInput *)component1 __attribute__((swift_name("component1()")));
- (SharedCreateInsuranceMutation *)doCopyInput:(SharedKoalayDefineDealerInput *)input __attribute__((swift_name("doCopy(input:)")));
- (NSString *)document __attribute__((swift_name("document()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name_ __attribute__((swift_name("name()")));
- (SharedApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKoalayDefineDealerInput *input __attribute__((swift_name("input")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateInsuranceMutation.Companion")))
@interface SharedCreateInsuranceMutationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCreateInsuranceMutationCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *OPERATION_DOCUMENT __attribute__((swift_name("OPERATION_DOCUMENT")));
@property (readonly) NSString *OPERATION_ID __attribute__((swift_name("OPERATION_ID")));
@property (readonly) NSString *OPERATION_NAME __attribute__((swift_name("OPERATION_NAME")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateInsuranceMutation.Data")))
@interface SharedCreateInsuranceMutationData : SharedBase <SharedApollo_apiMutationData>
- (instancetype)initWithKoalay_define_dealer:(SharedCreateInsuranceMutationKoalay_define_dealer * _Nullable)koalay_define_dealer __attribute__((swift_name("init(koalay_define_dealer:)"))) __attribute__((objc_designated_initializer));
- (SharedCreateInsuranceMutationKoalay_define_dealer * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedCreateInsuranceMutationData *)doCopyKoalay_define_dealer:(SharedCreateInsuranceMutationKoalay_define_dealer * _Nullable)koalay_define_dealer __attribute__((swift_name("doCopy(koalay_define_dealer:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedCreateInsuranceMutationKoalay_define_dealer * _Nullable koalay_define_dealer __attribute__((swift_name("koalay_define_dealer")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateInsuranceMutation.Koalay_define_dealer")))
@interface SharedCreateInsuranceMutationKoalay_define_dealer : SharedBase
- (instancetype)initWith__typename:(NSString *)__typename fragmentInsurance:(SharedFragmentInsurance *)fragmentInsurance __attribute__((swift_name("init(__typename:fragmentInsurance:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedFragmentInsurance *)component2 __attribute__((swift_name("component2()")));
- (SharedCreateInsuranceMutationKoalay_define_dealer *)doCopy__typename:(NSString *)__typename fragmentInsurance:(SharedFragmentInsurance *)fragmentInsurance __attribute__((swift_name("doCopy(__typename:fragmentInsurance:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) SharedFragmentInsurance *fragmentInsurance __attribute__((swift_name("fragmentInsurance")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForgotPasswordOTPMutation")))
@interface SharedForgotPasswordOTPMutation : SharedBase <SharedApollo_apiMutation>
- (instancetype)initWithCell_phone:(NSString *)cell_phone __attribute__((swift_name("init(cell_phone:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedForgotPasswordOTPMutationCompanion *companion __attribute__((swift_name("companion")));
- (id<SharedApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedForgotPasswordOTPMutation *)doCopyCell_phone:(NSString *)cell_phone __attribute__((swift_name("doCopy(cell_phone:)")));
- (NSString *)document __attribute__((swift_name("document()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name_ __attribute__((swift_name("name()")));
- (SharedApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cell_phone __attribute__((swift_name("cell_phone")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForgotPasswordOTPMutation.Companion")))
@interface SharedForgotPasswordOTPMutationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedForgotPasswordOTPMutationCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *OPERATION_DOCUMENT __attribute__((swift_name("OPERATION_DOCUMENT")));
@property (readonly) NSString *OPERATION_ID __attribute__((swift_name("OPERATION_ID")));
@property (readonly) NSString *OPERATION_NAME __attribute__((swift_name("OPERATION_NAME")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForgotPasswordOTPMutation.Data")))
@interface SharedForgotPasswordOTPMutationData : SharedBase <SharedApollo_apiMutationData>
- (instancetype)initWithForgotPasswordOTP:(SharedForgotPasswordOTPMutationForgotPasswordOTP *)forgotPasswordOTP __attribute__((swift_name("init(forgotPasswordOTP:)"))) __attribute__((objc_designated_initializer));
- (SharedForgotPasswordOTPMutationForgotPasswordOTP *)component1 __attribute__((swift_name("component1()")));
- (SharedForgotPasswordOTPMutationData *)doCopyForgotPasswordOTP:(SharedForgotPasswordOTPMutationForgotPasswordOTP *)forgotPasswordOTP __attribute__((swift_name("doCopy(forgotPasswordOTP:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedForgotPasswordOTPMutationForgotPasswordOTP *forgotPasswordOTP __attribute__((swift_name("forgotPasswordOTP")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForgotPasswordOTPMutation.ForgotPasswordOTP")))
@interface SharedForgotPasswordOTPMutationForgotPasswordOTP : SharedBase
- (instancetype)initWithStatus:(NSString *)status __attribute__((swift_name("init(status:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedForgotPasswordOTPMutationForgotPasswordOTP *)doCopyStatus:(NSString *)status __attribute__((swift_name("doCopy(status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LanguagesQuery")))
@interface SharedLanguagesQuery : SharedBase <SharedApollo_apiQuery>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedLanguagesQueryCompanion *companion __attribute__((swift_name("companion")));
- (id<SharedApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (NSString *)document __attribute__((swift_name("document()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name_ __attribute__((swift_name("name()")));
- (SharedApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LanguagesQuery.Companion")))
@interface SharedLanguagesQueryCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLanguagesQueryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *OPERATION_DOCUMENT __attribute__((swift_name("OPERATION_DOCUMENT")));
@property (readonly) NSString *OPERATION_ID __attribute__((swift_name("OPERATION_ID")));
@property (readonly) NSString *OPERATION_NAME __attribute__((swift_name("OPERATION_NAME")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LanguagesQuery.Data")))
@interface SharedLanguagesQueryData : SharedBase <SharedApollo_apiQueryData>
- (instancetype)initWithLanguages:(SharedLanguagesQueryLanguages * _Nullable)languages __attribute__((swift_name("init(languages:)"))) __attribute__((objc_designated_initializer));
- (SharedLanguagesQueryLanguages * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedLanguagesQueryData *)doCopyLanguages:(SharedLanguagesQueryLanguages * _Nullable)languages __attribute__((swift_name("doCopy(languages:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedLanguagesQueryLanguages * _Nullable languages __attribute__((swift_name("languages")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LanguagesQuery.Data1")))
@interface SharedLanguagesQueryData1 : SharedBase
- (instancetype)initWith__typename:(NSString *)__typename fragmentLanguage:(SharedFragmentLanguage *)fragmentLanguage __attribute__((swift_name("init(__typename:fragmentLanguage:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedFragmentLanguage *)component2 __attribute__((swift_name("component2()")));
- (SharedLanguagesQueryData1 *)doCopy__typename:(NSString *)__typename fragmentLanguage:(SharedFragmentLanguage *)fragmentLanguage __attribute__((swift_name("doCopy(__typename:fragmentLanguage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) SharedFragmentLanguage *fragmentLanguage __attribute__((swift_name("fragmentLanguage")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LanguagesQuery.Languages")))
@interface SharedLanguagesQueryLanguages : SharedBase
- (instancetype)initWithData:(NSArray<SharedLanguagesQueryData1 *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedLanguagesQueryData1 *> *)component1 __attribute__((swift_name("component1()")));
- (SharedLanguagesQueryLanguages *)doCopyData:(NSArray<SharedLanguagesQueryData1 *> *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedLanguagesQueryData1 *> *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginMutation")))
@interface SharedLoginMutation : SharedBase <SharedApollo_apiMutation>
- (instancetype)initWithCellPhone:(NSString *)cellPhone password:(NSString *)password __attribute__((swift_name("init(cellPhone:password:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedLoginMutationCompanion *companion __attribute__((swift_name("companion")));
- (id<SharedApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedLoginMutation *)doCopyCellPhone:(NSString *)cellPhone password:(NSString *)password __attribute__((swift_name("doCopy(cellPhone:password:)")));
- (NSString *)document __attribute__((swift_name("document()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name_ __attribute__((swift_name("name()")));
- (SharedApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cellPhone __attribute__((swift_name("cellPhone")));
@property (readonly) NSString *password __attribute__((swift_name("password")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginMutation.Companion")))
@interface SharedLoginMutationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLoginMutationCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *OPERATION_DOCUMENT __attribute__((swift_name("OPERATION_DOCUMENT")));
@property (readonly) NSString *OPERATION_ID __attribute__((swift_name("OPERATION_ID")));
@property (readonly) NSString *OPERATION_NAME __attribute__((swift_name("OPERATION_NAME")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginMutation.Data")))
@interface SharedLoginMutationData : SharedBase <SharedApollo_apiMutationData>
- (instancetype)initWithLogin:(SharedLoginMutationLogin *)login __attribute__((swift_name("init(login:)"))) __attribute__((objc_designated_initializer));
- (SharedLoginMutationLogin *)component1 __attribute__((swift_name("component1()")));
- (SharedLoginMutationData *)doCopyLogin:(SharedLoginMutationLogin *)login __attribute__((swift_name("doCopy(login:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedLoginMutationLogin *login __attribute__((swift_name("login")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginMutation.Login")))
@interface SharedLoginMutationLogin : SharedBase
- (instancetype)initWith__typename:(NSString *)__typename fragmentAuth:(SharedFragmentAuth *)fragmentAuth __attribute__((swift_name("init(__typename:fragmentAuth:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedFragmentAuth *)component2 __attribute__((swift_name("component2()")));
- (SharedLoginMutationLogin *)doCopy__typename:(NSString *)__typename fragmentAuth:(SharedFragmentAuth *)fragmentAuth __attribute__((swift_name("doCopy(__typename:fragmentAuth:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) SharedFragmentAuth *fragmentAuth __attribute__((swift_name("fragmentAuth")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingsQuery")))
@interface SharedTrainingsQuery : SharedBase <SharedApollo_apiQuery>
- (instancetype)initWithWhere:(SharedQueryTrainingsForUserWhereWhereConditions *)where orderBy:(NSArray<SharedQueryTrainingsForUserOrderByOrderByClause *> *)orderBy first:(int32_t)first page:(int32_t)page __attribute__((swift_name("init(where:orderBy:first:page:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedTrainingsQueryCompanion *companion __attribute__((swift_name("companion")));
- (id<SharedApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (SharedQueryTrainingsForUserWhereWhereConditions *)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedQueryTrainingsForUserOrderByOrderByClause *> *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (SharedTrainingsQuery *)doCopyWhere:(SharedQueryTrainingsForUserWhereWhereConditions *)where orderBy:(NSArray<SharedQueryTrainingsForUserOrderByOrderByClause *> *)orderBy first:(int32_t)first page:(int32_t)page __attribute__((swift_name("doCopy(where:orderBy:first:page:)")));
- (NSString *)document __attribute__((swift_name("document()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name_ __attribute__((swift_name("name()")));
- (SharedApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t first __attribute__((swift_name("first")));
@property (readonly) NSArray<SharedQueryTrainingsForUserOrderByOrderByClause *> *orderBy __attribute__((swift_name("orderBy")));
@property (readonly) int32_t page __attribute__((swift_name("page")));
@property (readonly) SharedQueryTrainingsForUserWhereWhereConditions *where __attribute__((swift_name("where")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingsQuery.Companion")))
@interface SharedTrainingsQueryCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTrainingsQueryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *OPERATION_DOCUMENT __attribute__((swift_name("OPERATION_DOCUMENT")));
@property (readonly) NSString *OPERATION_ID __attribute__((swift_name("OPERATION_ID")));
@property (readonly) NSString *OPERATION_NAME __attribute__((swift_name("OPERATION_NAME")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingsQuery.Data")))
@interface SharedTrainingsQueryData : SharedBase <SharedApollo_apiQueryData>
- (instancetype)initWithTrainings_for_user:(SharedTrainingsQueryTrainings_for_user * _Nullable)trainings_for_user __attribute__((swift_name("init(trainings_for_user:)"))) __attribute__((objc_designated_initializer));
- (SharedTrainingsQueryTrainings_for_user * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedTrainingsQueryData *)doCopyTrainings_for_user:(SharedTrainingsQueryTrainings_for_user * _Nullable)trainings_for_user __attribute__((swift_name("doCopy(trainings_for_user:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedTrainingsQueryTrainings_for_user * _Nullable trainings_for_user __attribute__((swift_name("trainings_for_user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingsQuery.Data1")))
@interface SharedTrainingsQueryData1 : SharedBase
- (instancetype)initWith__typename:(NSString *)__typename fragmentTraining:(SharedFragmentTraining *)fragmentTraining __attribute__((swift_name("init(__typename:fragmentTraining:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedFragmentTraining *)component2 __attribute__((swift_name("component2()")));
- (SharedTrainingsQueryData1 *)doCopy__typename:(NSString *)__typename fragmentTraining:(SharedFragmentTraining *)fragmentTraining __attribute__((swift_name("doCopy(__typename:fragmentTraining:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) SharedFragmentTraining *fragmentTraining __attribute__((swift_name("fragmentTraining")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingsQuery.Trainings_for_user")))
@interface SharedTrainingsQueryTrainings_for_user : SharedBase
- (instancetype)initWithData:(NSArray<SharedTrainingsQueryData1 *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedTrainingsQueryData1 *> *)component1 __attribute__((swift_name("component1()")));
- (SharedTrainingsQueryTrainings_for_user *)doCopyData:(NSArray<SharedTrainingsQueryData1 *> *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedTrainingsQueryData1 *> *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddFeedbackMutation_ResponseAdapter")))
@interface SharedAddFeedbackMutation_ResponseAdapter : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)addFeedbackMutation_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedAddFeedbackMutation_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Apollo_apiAdapter")))
@protocol SharedApollo_apiAdapter
@required

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(id _Nullable)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddFeedbackMutation_ResponseAdapter.AddFeedback")))
@interface SharedAddFeedbackMutation_ResponseAdapterAddFeedback : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)addFeedback __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedAddFeedbackMutation_ResponseAdapterAddFeedback *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedAddFeedbackMutationAddFeedback * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedAddFeedbackMutationAddFeedback *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddFeedbackMutation_ResponseAdapter.Data")))
@interface SharedAddFeedbackMutation_ResponseAdapterData : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedAddFeedbackMutation_ResponseAdapterData *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedAddFeedbackMutationData * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedAddFeedbackMutationData *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddFeedbackMutation_VariablesAdapter")))
@interface SharedAddFeedbackMutation_VariablesAdapter : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)addFeedbackMutation_VariablesAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedAddFeedbackMutation_VariablesAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedAddFeedbackMutation * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedAddFeedbackMutation *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery_ResponseAdapter")))
@interface SharedCallingCodesQuery_ResponseAdapter : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)callingCodesQuery_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCallingCodesQuery_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery_ResponseAdapter.Calling_codes")))
@interface SharedCallingCodesQuery_ResponseAdapterCalling_codes : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)calling_codes __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCallingCodesQuery_ResponseAdapterCalling_codes *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedCallingCodesQueryCalling_codes * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedCallingCodesQueryCalling_codes *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery_ResponseAdapter.Data")))
@interface SharedCallingCodesQuery_ResponseAdapterData : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCallingCodesQuery_ResponseAdapterData *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedCallingCodesQueryData * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedCallingCodesQueryData *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery_ResponseAdapter.Data1")))
@interface SharedCallingCodesQuery_ResponseAdapterData1 : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data1 __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCallingCodesQuery_ResponseAdapterData1 *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedCallingCodesQueryData1 * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedCallingCodesQueryData1 *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckInsuranceQuery_ResponseAdapter")))
@interface SharedCheckInsuranceQuery_ResponseAdapter : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)checkInsuranceQuery_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCheckInsuranceQuery_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckInsuranceQuery_ResponseAdapter.Data")))
@interface SharedCheckInsuranceQuery_ResponseAdapterData : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCheckInsuranceQuery_ResponseAdapterData *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedCheckInsuranceQueryData * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedCheckInsuranceQueryData *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckInsuranceQuery_ResponseAdapter.Koalay_dealer_info")))
@interface SharedCheckInsuranceQuery_ResponseAdapterKoalay_dealer_info : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)koalay_dealer_info __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCheckInsuranceQuery_ResponseAdapterKoalay_dealer_info *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedCheckInsuranceQueryKoalay_dealer_info * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedCheckInsuranceQueryKoalay_dealer_info *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckInsuranceQuery_VariablesAdapter")))
@interface SharedCheckInsuranceQuery_VariablesAdapter : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)checkInsuranceQuery_VariablesAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCheckInsuranceQuery_VariablesAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedCheckInsuranceQuery * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedCheckInsuranceQuery *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateInsuranceMutation_ResponseAdapter")))
@interface SharedCreateInsuranceMutation_ResponseAdapter : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)createInsuranceMutation_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCreateInsuranceMutation_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateInsuranceMutation_ResponseAdapter.Data")))
@interface SharedCreateInsuranceMutation_ResponseAdapterData : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCreateInsuranceMutation_ResponseAdapterData *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedCreateInsuranceMutationData * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedCreateInsuranceMutationData *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateInsuranceMutation_ResponseAdapter.Koalay_define_dealer")))
@interface SharedCreateInsuranceMutation_ResponseAdapterKoalay_define_dealer : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)koalay_define_dealer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCreateInsuranceMutation_ResponseAdapterKoalay_define_dealer *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedCreateInsuranceMutationKoalay_define_dealer * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedCreateInsuranceMutationKoalay_define_dealer *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateInsuranceMutation_VariablesAdapter")))
@interface SharedCreateInsuranceMutation_VariablesAdapter : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)createInsuranceMutation_VariablesAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCreateInsuranceMutation_VariablesAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedCreateInsuranceMutation * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedCreateInsuranceMutation *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForgotPasswordOTPMutation_ResponseAdapter")))
@interface SharedForgotPasswordOTPMutation_ResponseAdapter : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)forgotPasswordOTPMutation_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedForgotPasswordOTPMutation_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForgotPasswordOTPMutation_ResponseAdapter.Data")))
@interface SharedForgotPasswordOTPMutation_ResponseAdapterData : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedForgotPasswordOTPMutation_ResponseAdapterData *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedForgotPasswordOTPMutationData * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedForgotPasswordOTPMutationData *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForgotPasswordOTPMutation_ResponseAdapter.ForgotPasswordOTP")))
@interface SharedForgotPasswordOTPMutation_ResponseAdapterForgotPasswordOTP : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)forgotPasswordOTP __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedForgotPasswordOTPMutation_ResponseAdapterForgotPasswordOTP *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedForgotPasswordOTPMutationForgotPasswordOTP * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedForgotPasswordOTPMutationForgotPasswordOTP *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForgotPasswordOTPMutation_VariablesAdapter")))
@interface SharedForgotPasswordOTPMutation_VariablesAdapter : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)forgotPasswordOTPMutation_VariablesAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedForgotPasswordOTPMutation_VariablesAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedForgotPasswordOTPMutation * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedForgotPasswordOTPMutation *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LanguagesQuery_ResponseAdapter")))
@interface SharedLanguagesQuery_ResponseAdapter : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)languagesQuery_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLanguagesQuery_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LanguagesQuery_ResponseAdapter.Data")))
@interface SharedLanguagesQuery_ResponseAdapterData : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLanguagesQuery_ResponseAdapterData *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedLanguagesQueryData * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedLanguagesQueryData *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LanguagesQuery_ResponseAdapter.Data1")))
@interface SharedLanguagesQuery_ResponseAdapterData1 : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data1 __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLanguagesQuery_ResponseAdapterData1 *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedLanguagesQueryData1 * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedLanguagesQueryData1 *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LanguagesQuery_ResponseAdapter.Languages")))
@interface SharedLanguagesQuery_ResponseAdapterLanguages : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)languages __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLanguagesQuery_ResponseAdapterLanguages *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedLanguagesQueryLanguages * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedLanguagesQueryLanguages *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginMutation_ResponseAdapter")))
@interface SharedLoginMutation_ResponseAdapter : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loginMutation_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLoginMutation_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginMutation_ResponseAdapter.Data")))
@interface SharedLoginMutation_ResponseAdapterData : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLoginMutation_ResponseAdapterData *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedLoginMutationData * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedLoginMutationData *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginMutation_ResponseAdapter.Login")))
@interface SharedLoginMutation_ResponseAdapterLogin : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)login __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLoginMutation_ResponseAdapterLogin *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedLoginMutationLogin * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedLoginMutationLogin *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginMutation_VariablesAdapter")))
@interface SharedLoginMutation_VariablesAdapter : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loginMutation_VariablesAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLoginMutation_VariablesAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedLoginMutation * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedLoginMutation *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingsQuery_ResponseAdapter")))
@interface SharedTrainingsQuery_ResponseAdapter : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)trainingsQuery_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTrainingsQuery_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingsQuery_ResponseAdapter.Data")))
@interface SharedTrainingsQuery_ResponseAdapterData : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTrainingsQuery_ResponseAdapterData *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedTrainingsQueryData * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedTrainingsQueryData *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingsQuery_ResponseAdapter.Data1")))
@interface SharedTrainingsQuery_ResponseAdapterData1 : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data1 __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTrainingsQuery_ResponseAdapterData1 *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedTrainingsQueryData1 * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedTrainingsQueryData1 *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingsQuery_ResponseAdapter.Trainings_for_user")))
@interface SharedTrainingsQuery_ResponseAdapterTrainings_for_user : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)trainings_for_user __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTrainingsQuery_ResponseAdapterTrainings_for_user *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedTrainingsQueryTrainings_for_user * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedTrainingsQueryTrainings_for_user *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingsQuery_VariablesAdapter")))
@interface SharedTrainingsQuery_VariablesAdapter : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)trainingsQuery_VariablesAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTrainingsQuery_VariablesAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedTrainingsQuery * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedTrainingsQuery *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddFeedbackInput")))
@interface SharedAddFeedbackInput : SharedBase
- (instancetype)initWithNote:(NSString *)note type:(SharedApollo_apiOptional<SharedFeedbackType *> *)type __attribute__((swift_name("init(note:type:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedApollo_apiOptional<SharedFeedbackType *> *)component2 __attribute__((swift_name("component2()")));
- (SharedAddFeedbackInput *)doCopyNote:(NSString *)note type:(SharedApollo_apiOptional<SharedFeedbackType *> *)type __attribute__((swift_name("doCopy(note:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *note __attribute__((swift_name("note")));
@property (readonly) SharedApollo_apiOptional<SharedFeedbackType *> *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthPayload")))
@interface SharedAuthPayload : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedAuthPayloadCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthPayload.Companion")))
@interface SharedAuthPayloadCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedAuthPayloadCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Buyer")))
@interface SharedBuyer : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedBuyerCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Buyer.Companion")))
@interface SharedBuyerCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedBuyerCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuyerDemand")))
@interface SharedBuyerDemand : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedBuyerDemandCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuyerDemand.Companion")))
@interface SharedBuyerDemandCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedBuyerDemandCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCode")))
@interface SharedCallingCode : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedCallingCodeCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCode.Companion")))
@interface SharedCallingCodeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCallingCodeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodePaginator")))
@interface SharedCallingCodePaginator : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedCallingCodePaginatorCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodePaginator.Companion")))
@interface SharedCallingCodePaginatorCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCallingCodePaginatorCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateTime")))
@interface SharedDateTime : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedDateTimeCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateTime.Companion")))
@interface SharedDateTimeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDateTimeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiCustomScalarType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Feedback")))
@interface SharedFeedback : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedFeedbackCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Feedback.Companion")))
@interface SharedFeedbackCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFeedbackCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeedbackType")))
@interface SharedFeedbackType : SharedKotlinEnum<SharedFeedbackType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedFeedbackTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedFeedbackType *feedback __attribute__((swift_name("feedback")));
@property (class, readonly) SharedFeedbackType *bug __attribute__((swift_name("bug")));
@property (class, readonly) SharedFeedbackType *unknown __attribute__((swift_name("unknown")));
+ (SharedKotlinArray<SharedFeedbackType *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *rawValue __attribute__((swift_name("rawValue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeedbackType.Companion")))
@interface SharedFeedbackTypeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFeedbackTypeCompanion *shared __attribute__((swift_name("shared")));
- (SharedKotlinArray<SharedFeedbackType *> *)knownValues __attribute__((swift_name("knownValues()")));
- (SharedFeedbackType *)safeValueOfRawValue:(NSString *)rawValue __attribute__((swift_name("safeValueOf(rawValue:)")));
@property (readonly) SharedApollo_apiEnumType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForgotPasswordResponse")))
@interface SharedForgotPasswordResponse : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedForgotPasswordResponseCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForgotPasswordResponse.Companion")))
@interface SharedForgotPasswordResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedForgotPasswordResponseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLBoolean")))
@interface SharedGraphQLBoolean : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedGraphQLBooleanCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLBoolean.Companion")))
@interface SharedGraphQLBooleanCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedGraphQLBooleanCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiCustomScalarType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLFloat")))
@interface SharedGraphQLFloat : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedGraphQLFloatCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLFloat.Companion")))
@interface SharedGraphQLFloatCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedGraphQLFloatCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiCustomScalarType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLID")))
@interface SharedGraphQLID : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedGraphQLIDCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLID.Companion")))
@interface SharedGraphQLIDCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedGraphQLIDCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiCustomScalarType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLInt")))
@interface SharedGraphQLInt : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedGraphQLIntCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLInt.Companion")))
@interface SharedGraphQLIntCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedGraphQLIntCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiCustomScalarType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLString")))
@interface SharedGraphQLString : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedGraphQLStringCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLString.Companion")))
@interface SharedGraphQLStringCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedGraphQLStringCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiCustomScalarType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoalayDealer")))
@interface SharedKoalayDealer : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKoalayDealerCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoalayDealer.Companion")))
@interface SharedKoalayDealerCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKoalayDealerCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoalayDefineDealerInput")))
@interface SharedKoalayDefineDealerInput : SharedBase
- (instancetype)initWithIdentityNumber:(NSString *)IdentityNumber __attribute__((swift_name("init(IdentityNumber:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedKoalayDefineDealerInput *)doCopyIdentityNumber:(NSString *)IdentityNumber __attribute__((swift_name("doCopy(IdentityNumber:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *IdentityNumber __attribute__((swift_name("IdentityNumber")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Language_")))
@interface SharedLanguage_ : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedLanguage_Companion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Language_.Companion")))
@interface SharedLanguage_Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLanguage_Companion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LanguagePaginator")))
@interface SharedLanguagePaginator : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedLanguagePaginatorCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LanguagePaginator.Companion")))
@interface SharedLanguagePaginatorCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLanguagePaginatorCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mixed")))
@interface SharedMixed : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedMixedCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mixed.Companion")))
@interface SharedMixedCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedMixedCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiCustomScalarType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mutation")))
@interface SharedMutation : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedMutationCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mutation.Companion")))
@interface SharedMutationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedMutationCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Query")))
@interface SharedQuery : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedQueryCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Query.Companion")))
@interface SharedQueryCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedQueryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QueryTrainingsForUserOrderByOrderByClause")))
@interface SharedQueryTrainingsForUserOrderByOrderByClause : SharedBase
- (instancetype)initWithColumn:(SharedTrainingColumn *)column order:(SharedSortOrder *)order __attribute__((swift_name("init(column:order:)"))) __attribute__((objc_designated_initializer));
- (SharedTrainingColumn *)component1 __attribute__((swift_name("component1()")));
- (SharedSortOrder *)component2 __attribute__((swift_name("component2()")));
- (SharedQueryTrainingsForUserOrderByOrderByClause *)doCopyColumn:(SharedTrainingColumn *)column order:(SharedSortOrder *)order __attribute__((swift_name("doCopy(column:order:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedTrainingColumn *column __attribute__((swift_name("column")));
@property (readonly) SharedSortOrder *order __attribute__((swift_name("order")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QueryTrainingsForUserWhereWhereConditions")))
@interface SharedQueryTrainingsForUserWhereWhereConditions : SharedBase
- (instancetype)initWithColumn:(SharedApollo_apiOptional<SharedTrainingColumn *> *)column operator:(SharedApollo_apiOptional<SharedSQLOperator *> *)operator_ value:(SharedApollo_apiOptional<id> *)value AND:(SharedApollo_apiOptional<NSArray<SharedQueryTrainingsForUserWhereWhereConditions *> *> *)AND OR:(SharedApollo_apiOptional<NSArray<SharedQueryTrainingsForUserWhereWhereConditions *> *> *)OR HAS:(SharedApollo_apiOptional<SharedQueryTrainingsForUserWhereWhereConditionsRelation *> *)HAS __attribute__((swift_name("init(column:operator:value:AND:OR:HAS:)"))) __attribute__((objc_designated_initializer));
- (SharedApollo_apiOptional<SharedTrainingColumn *> *)component1 __attribute__((swift_name("component1()")));
- (SharedApollo_apiOptional<SharedSQLOperator *> *)component2 __attribute__((swift_name("component2()")));
- (SharedApollo_apiOptional<id> *)component3 __attribute__((swift_name("component3()")));
- (SharedApollo_apiOptional<NSArray<SharedQueryTrainingsForUserWhereWhereConditions *> *> *)component4 __attribute__((swift_name("component4()")));
- (SharedApollo_apiOptional<NSArray<SharedQueryTrainingsForUserWhereWhereConditions *> *> *)component5 __attribute__((swift_name("component5()")));
- (SharedApollo_apiOptional<SharedQueryTrainingsForUserWhereWhereConditionsRelation *> *)component6 __attribute__((swift_name("component6()")));
- (SharedQueryTrainingsForUserWhereWhereConditions *)doCopyColumn:(SharedApollo_apiOptional<SharedTrainingColumn *> *)column operator:(SharedApollo_apiOptional<SharedSQLOperator *> *)operator_ value:(SharedApollo_apiOptional<id> *)value AND:(SharedApollo_apiOptional<NSArray<SharedQueryTrainingsForUserWhereWhereConditions *> *> *)AND OR:(SharedApollo_apiOptional<NSArray<SharedQueryTrainingsForUserWhereWhereConditions *> *> *)OR HAS:(SharedApollo_apiOptional<SharedQueryTrainingsForUserWhereWhereConditionsRelation *> *)HAS __attribute__((swift_name("doCopy(column:operator:value:AND:OR:HAS:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedApollo_apiOptional<NSArray<SharedQueryTrainingsForUserWhereWhereConditions *> *> *AND __attribute__((swift_name("AND")));
@property (readonly) SharedApollo_apiOptional<SharedQueryTrainingsForUserWhereWhereConditionsRelation *> *HAS __attribute__((swift_name("HAS")));
@property (readonly) SharedApollo_apiOptional<NSArray<SharedQueryTrainingsForUserWhereWhereConditions *> *> *OR __attribute__((swift_name("OR")));
@property (readonly) SharedApollo_apiOptional<SharedTrainingColumn *> *column __attribute__((swift_name("column")));
@property (readonly, getter=operator) SharedApollo_apiOptional<SharedSQLOperator *> *operator_ __attribute__((swift_name("operator_")));
@property (readonly) SharedApollo_apiOptional<id> *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QueryTrainingsForUserWhereWhereConditionsRelation")))
@interface SharedQueryTrainingsForUserWhereWhereConditionsRelation : SharedBase
- (instancetype)initWithRelation:(NSString *)relation operator:(SharedApollo_apiOptional<SharedSQLOperator *> *)operator_ amount:(SharedApollo_apiOptional<SharedInt *> *)amount condition:(SharedApollo_apiOptional<SharedQueryTrainingsForUserWhereWhereConditions *> *)condition __attribute__((swift_name("init(relation:operator:amount:condition:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedApollo_apiOptional<SharedSQLOperator *> *)component2 __attribute__((swift_name("component2()")));
- (SharedApollo_apiOptional<SharedInt *> *)component3 __attribute__((swift_name("component3()")));
- (SharedApollo_apiOptional<SharedQueryTrainingsForUserWhereWhereConditions *> *)component4 __attribute__((swift_name("component4()")));
- (SharedQueryTrainingsForUserWhereWhereConditionsRelation *)doCopyRelation:(NSString *)relation operator:(SharedApollo_apiOptional<SharedSQLOperator *> *)operator_ amount:(SharedApollo_apiOptional<SharedInt *> *)amount condition:(SharedApollo_apiOptional<SharedQueryTrainingsForUserWhereWhereConditions *> *)condition __attribute__((swift_name("doCopy(relation:operator:amount:condition:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedApollo_apiOptional<SharedInt *> *amount __attribute__((swift_name("amount")));
@property (readonly) SharedApollo_apiOptional<SharedQueryTrainingsForUserWhereWhereConditions *> *condition __attribute__((swift_name("condition")));
@property (readonly, getter=operator) SharedApollo_apiOptional<SharedSQLOperator *> *operator_ __attribute__((swift_name("operator_")));
@property (readonly) NSString *relation __attribute__((swift_name("relation")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SQLOperator")))
@interface SharedSQLOperator : SharedKotlinEnum<SharedSQLOperator *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedSQLOperatorCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedSQLOperator *eq __attribute__((swift_name("eq")));
@property (class, readonly) SharedSQLOperator *neq __attribute__((swift_name("neq")));
@property (class, readonly) SharedSQLOperator *gt __attribute__((swift_name("gt")));
@property (class, readonly) SharedSQLOperator *gte __attribute__((swift_name("gte")));
@property (class, readonly) SharedSQLOperator *lt __attribute__((swift_name("lt")));
@property (class, readonly) SharedSQLOperator *lte __attribute__((swift_name("lte")));
@property (class, readonly) SharedSQLOperator *like __attribute__((swift_name("like")));
@property (class, readonly) SharedSQLOperator *notLike __attribute__((swift_name("notLike")));
@property (class, readonly) SharedSQLOperator *in __attribute__((swift_name("in")));
@property (class, readonly) SharedSQLOperator *notIn __attribute__((swift_name("notIn")));
@property (class, readonly) SharedSQLOperator *between __attribute__((swift_name("between")));
@property (class, readonly) SharedSQLOperator *notBetween __attribute__((swift_name("notBetween")));
@property (class, readonly) SharedSQLOperator *isNull __attribute__((swift_name("isNull")));
@property (class, readonly) SharedSQLOperator *isNotNull __attribute__((swift_name("isNotNull")));
@property (class, readonly) SharedSQLOperator *ilike __attribute__((swift_name("ilike")));
@property (class, readonly) SharedSQLOperator *notIlike __attribute__((swift_name("notIlike")));
@property (class, readonly) SharedSQLOperator *unknown __attribute__((swift_name("unknown")));
+ (SharedKotlinArray<SharedSQLOperator *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *rawValue __attribute__((swift_name("rawValue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SQLOperator.Companion")))
@interface SharedSQLOperatorCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSQLOperatorCompanion *shared __attribute__((swift_name("shared")));
- (SharedKotlinArray<SharedSQLOperator *> *)knownValues __attribute__((swift_name("knownValues()")));
- (SharedSQLOperator *)safeValueOfRawValue:(NSString *)rawValue __attribute__((swift_name("safeValueOf(rawValue:)")));
@property (readonly) SharedApollo_apiEnumType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SortOrder")))
@interface SharedSortOrder : SharedKotlinEnum<SharedSortOrder *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedSortOrderCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedSortOrder *asc __attribute__((swift_name("asc")));
@property (class, readonly) SharedSortOrder *desc __attribute__((swift_name("desc")));
@property (class, readonly) SharedSortOrder *unknown __attribute__((swift_name("unknown")));
+ (SharedKotlinArray<SharedSortOrder *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *rawValue __attribute__((swift_name("rawValue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SortOrder.Companion")))
@interface SharedSortOrderCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSortOrderCompanion *shared __attribute__((swift_name("shared")));
- (SharedKotlinArray<SharedSortOrder *> *)knownValues __attribute__((swift_name("knownValues()")));
- (SharedSortOrder *)safeValueOfRawValue:(NSString *)rawValue __attribute__((swift_name("safeValueOf(rawValue:)")));
@property (readonly) SharedApollo_apiEnumType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Training")))
@interface SharedTraining : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedTrainingCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Training.Companion")))
@interface SharedTrainingCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTrainingCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingColumn")))
@interface SharedTrainingColumn : SharedKotlinEnum<SharedTrainingColumn *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedTrainingColumnCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedTrainingColumn *id __attribute__((swift_name("id")));
@property (class, readonly) SharedTrainingColumn *isPublished __attribute__((swift_name("isPublished")));
@property (class, readonly) SharedTrainingColumn *startsAt __attribute__((swift_name("startsAt")));
@property (class, readonly) SharedTrainingColumn *endsAt __attribute__((swift_name("endsAt")));
@property (class, readonly) SharedTrainingColumn *title __attribute__((swift_name("title")));
@property (class, readonly) SharedTrainingColumn *officeId __attribute__((swift_name("officeId")));
@property (class, readonly) SharedTrainingColumn *meetingId __attribute__((swift_name("meetingId")));
@property (class, readonly) SharedTrainingColumn *meetingPassword __attribute__((swift_name("meetingPassword")));
@property (class, readonly) SharedTrainingColumn *meetingLink __attribute__((swift_name("meetingLink")));
@property (class, readonly) SharedTrainingColumn *meetingRecordingLink __attribute__((swift_name("meetingRecordingLink")));
@property (class, readonly) SharedTrainingColumn *inviteeCount __attribute__((swift_name("inviteeCount")));
@property (class, readonly) SharedTrainingColumn *participantCount __attribute__((swift_name("participantCount")));
@property (class, readonly) SharedTrainingColumn *unknown __attribute__((swift_name("unknown")));
+ (SharedKotlinArray<SharedTrainingColumn *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *rawValue __attribute__((swift_name("rawValue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingColumn.Companion")))
@interface SharedTrainingColumnCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTrainingColumnCompanion *shared __attribute__((swift_name("shared")));
- (SharedKotlinArray<SharedTrainingColumn *> *)knownValues __attribute__((swift_name("knownValues()")));
- (SharedTrainingColumn *)safeValueOfRawValue:(NSString *)rawValue __attribute__((swift_name("safeValueOf(rawValue:)")));
@property (readonly) SharedApollo_apiEnumType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingPaginator")))
@interface SharedTrainingPaginator : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedTrainingPaginatorCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingPaginator.Companion")))
@interface SharedTrainingPaginatorCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTrainingPaginatorCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User_")))
@interface SharedUser_ : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedUser_Companion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User_.Companion")))
@interface SharedUser_Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUser_Companion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddFeedbackInput_InputAdapter")))
@interface SharedAddFeedbackInput_InputAdapter : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)addFeedbackInput_InputAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedAddFeedbackInput_InputAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedAddFeedbackInput * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedAddFeedbackInput *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeedbackType_ResponseAdapter")))
@interface SharedFeedbackType_ResponseAdapter : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)feedbackType_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFeedbackType_ResponseAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedFeedbackType * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedFeedbackType *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoalayDefineDealerInput_InputAdapter")))
@interface SharedKoalayDefineDealerInput_InputAdapter : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)koalayDefineDealerInput_InputAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKoalayDefineDealerInput_InputAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKoalayDefineDealerInput * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedKoalayDefineDealerInput *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QueryTrainingsForUserOrderByOrderByClause_InputAdapter")))
@interface SharedQueryTrainingsForUserOrderByOrderByClause_InputAdapter : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)queryTrainingsForUserOrderByOrderByClause_InputAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedQueryTrainingsForUserOrderByOrderByClause_InputAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedQueryTrainingsForUserOrderByOrderByClause * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedQueryTrainingsForUserOrderByOrderByClause *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QueryTrainingsForUserWhereWhereConditionsRelation_InputAdapter")))
@interface SharedQueryTrainingsForUserWhereWhereConditionsRelation_InputAdapter : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)queryTrainingsForUserWhereWhereConditionsRelation_InputAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedQueryTrainingsForUserWhereWhereConditionsRelation_InputAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedQueryTrainingsForUserWhereWhereConditionsRelation * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedQueryTrainingsForUserWhereWhereConditionsRelation *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QueryTrainingsForUserWhereWhereConditions_InputAdapter")))
@interface SharedQueryTrainingsForUserWhereWhereConditions_InputAdapter : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)queryTrainingsForUserWhereWhereConditions_InputAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedQueryTrainingsForUserWhereWhereConditions_InputAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedQueryTrainingsForUserWhereWhereConditions * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedQueryTrainingsForUserWhereWhereConditions *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SQLOperator_ResponseAdapter")))
@interface SharedSQLOperator_ResponseAdapter : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sQLOperator_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSQLOperator_ResponseAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedSQLOperator * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedSQLOperator *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SortOrder_ResponseAdapter")))
@interface SharedSortOrder_ResponseAdapter : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sortOrder_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSortOrder_ResponseAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedSortOrder * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedSortOrder *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingColumn_ResponseAdapter")))
@interface SharedTrainingColumn_ResponseAdapter : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)trainingColumn_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTrainingColumn_ResponseAdapter *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedTrainingColumn * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedTrainingColumn *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddFeedbackMutationSelections")))
@interface SharedAddFeedbackMutationSelections : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)addFeedbackMutationSelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedAddFeedbackMutationSelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<SharedApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuerySelections")))
@interface SharedCallingCodesQuerySelections : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)callingCodesQuerySelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCallingCodesQuerySelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<SharedApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckInsuranceQuerySelections")))
@interface SharedCheckInsuranceQuerySelections : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)checkInsuranceQuerySelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCheckInsuranceQuerySelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<SharedApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateInsuranceMutationSelections")))
@interface SharedCreateInsuranceMutationSelections : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)createInsuranceMutationSelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCreateInsuranceMutationSelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<SharedApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForgotPasswordOTPMutationSelections")))
@interface SharedForgotPasswordOTPMutationSelections : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)forgotPasswordOTPMutationSelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedForgotPasswordOTPMutationSelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<SharedApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LanguagesQuerySelections")))
@interface SharedLanguagesQuerySelections : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)languagesQuerySelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLanguagesQuerySelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<SharedApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginMutationSelections")))
@interface SharedLoginMutationSelections : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loginMutationSelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLoginMutationSelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<SharedApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrainingsQuerySelections")))
@interface SharedTrainingsQuerySelections : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)trainingsQuerySelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTrainingsQuerySelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<SharedApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((swift_name("Apollo_apiFragmentData")))
@protocol SharedApollo_apiFragmentData <SharedApollo_apiExecutableData>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentAuth")))
@interface SharedFragmentAuth : SharedBase <SharedApollo_apiFragmentData>
- (instancetype)initWithAccess_token:(NSString * _Nullable)access_token refresh_token:(NSString * _Nullable)refresh_token expires_in:(SharedInt * _Nullable)expires_in user:(SharedFragmentAuthUser * _Nullable)user __attribute__((swift_name("init(access_token:refresh_token:expires_in:user:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedFragmentAuthUser * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedFragmentAuth *)doCopyAccess_token:(NSString * _Nullable)access_token refresh_token:(NSString * _Nullable)refresh_token expires_in:(SharedInt * _Nullable)expires_in user:(SharedFragmentAuthUser * _Nullable)user __attribute__((swift_name("doCopy(access_token:refresh_token:expires_in:user:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable access_token __attribute__((swift_name("access_token")));
@property (readonly) SharedInt * _Nullable expires_in __attribute__((swift_name("expires_in")));
@property (readonly) NSString * _Nullable refresh_token __attribute__((swift_name("refresh_token")));
@property (readonly) SharedFragmentAuthUser * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentAuth.User")))
@interface SharedFragmentAuthUser : SharedBase
- (instancetype)initWith__typename:(NSString *)__typename fragmentUser:(SharedFragmentUser *)fragmentUser __attribute__((swift_name("init(__typename:fragmentUser:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedFragmentUser *)component2 __attribute__((swift_name("component2()")));
- (SharedFragmentAuthUser *)doCopy__typename:(NSString *)__typename fragmentUser:(SharedFragmentUser *)fragmentUser __attribute__((swift_name("doCopy(__typename:fragmentUser:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) SharedFragmentUser *fragmentUser __attribute__((swift_name("fragmentUser")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentAuthImpl_ResponseAdapter")))
@interface SharedFragmentAuthImpl_ResponseAdapter : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentAuthImpl_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFragmentAuthImpl_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentAuthImpl_ResponseAdapter.FragmentAuth")))
@interface SharedFragmentAuthImpl_ResponseAdapterFragmentAuth : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentAuth __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFragmentAuthImpl_ResponseAdapterFragmentAuth *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedFragmentAuth * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedFragmentAuth *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentAuthImpl_ResponseAdapter.User")))
@interface SharedFragmentAuthImpl_ResponseAdapterUser : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)user __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFragmentAuthImpl_ResponseAdapterUser *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedFragmentAuthUser * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedFragmentAuthUser *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentBuyer")))
@interface SharedFragmentBuyer : SharedBase <SharedApollo_apiFragmentData>
- (instancetype)initWithId:(NSString *)id deleted_at:(id _Nullable)deleted_at demands:(NSArray<SharedFragmentBuyerDemand *> *)demands __attribute__((swift_name("init(id:deleted_at:demands:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<SharedFragmentBuyerDemand *> *)component3 __attribute__((swift_name("component3()")));
- (SharedFragmentBuyer *)doCopyId:(NSString *)id deleted_at:(id _Nullable)deleted_at demands:(NSArray<SharedFragmentBuyerDemand *> *)demands __attribute__((swift_name("doCopy(id:deleted_at:demands:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id _Nullable deleted_at __attribute__((swift_name("deleted_at")));
@property (readonly) NSArray<SharedFragmentBuyerDemand *> *demands __attribute__((swift_name("demands")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentBuyer.Buyer")))
@interface SharedFragmentBuyerBuyer : SharedBase
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedFragmentBuyerBuyer *)doCopyId:(NSString *)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentBuyer.Demand")))
@interface SharedFragmentBuyerDemand : SharedBase
- (instancetype)initWithId:(NSString *)id buyer:(SharedFragmentBuyerBuyer * _Nullable)buyer __attribute__((swift_name("init(id:buyer:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedFragmentBuyerBuyer * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedFragmentBuyerDemand *)doCopyId:(NSString *)id buyer:(SharedFragmentBuyerBuyer * _Nullable)buyer __attribute__((swift_name("doCopy(id:buyer:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedFragmentBuyerBuyer * _Nullable buyer __attribute__((swift_name("buyer")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentBuyerImpl_ResponseAdapter")))
@interface SharedFragmentBuyerImpl_ResponseAdapter : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentBuyerImpl_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFragmentBuyerImpl_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentBuyerImpl_ResponseAdapter.Buyer")))
@interface SharedFragmentBuyerImpl_ResponseAdapterBuyer : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)buyer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFragmentBuyerImpl_ResponseAdapterBuyer *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedFragmentBuyerBuyer * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedFragmentBuyerBuyer *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentBuyerImpl_ResponseAdapter.Demand")))
@interface SharedFragmentBuyerImpl_ResponseAdapterDemand : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)demand __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFragmentBuyerImpl_ResponseAdapterDemand *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedFragmentBuyerDemand * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedFragmentBuyerDemand *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentBuyerImpl_ResponseAdapter.FragmentBuyer")))
@interface SharedFragmentBuyerImpl_ResponseAdapterFragmentBuyer : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentBuyer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFragmentBuyerImpl_ResponseAdapterFragmentBuyer *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedFragmentBuyer * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedFragmentBuyer *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentCallingCode")))
@interface SharedFragmentCallingCode : SharedBase <SharedApollo_apiFragmentData>
- (instancetype)initWithId:(NSString *)id value:(NSString * _Nullable)value description:(NSString * _Nullable)description key:(NSString * _Nullable)key flag:(NSString * _Nullable)flag __attribute__((swift_name("init(id:value:description:key:flag:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedFragmentCallingCode *)doCopyId:(NSString *)id value:(NSString * _Nullable)value description:(NSString * _Nullable)description key:(NSString * _Nullable)key flag:(NSString * _Nullable)flag __attribute__((swift_name("doCopy(id:value:description:key:flag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString * _Nullable flag __attribute__((swift_name("flag")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable key __attribute__((swift_name("key")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentCallingCodeImpl_ResponseAdapter")))
@interface SharedFragmentCallingCodeImpl_ResponseAdapter : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentCallingCodeImpl_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFragmentCallingCodeImpl_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentCallingCodeImpl_ResponseAdapter.FragmentCallingCode")))
@interface SharedFragmentCallingCodeImpl_ResponseAdapterFragmentCallingCode : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentCallingCode __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFragmentCallingCodeImpl_ResponseAdapterFragmentCallingCode *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedFragmentCallingCode * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedFragmentCallingCode *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentInsurance")))
@interface SharedFragmentInsurance : SharedBase <SharedApollo_apiFragmentData>
- (instancetype)initWithUrl_konut:(NSString * _Nullable)url_konut url_dask:(NSString * _Nullable)url_dask __attribute__((swift_name("init(url_konut:url_dask:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedFragmentInsurance *)doCopyUrl_konut:(NSString * _Nullable)url_konut url_dask:(NSString * _Nullable)url_dask __attribute__((swift_name("doCopy(url_konut:url_dask:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable url_dask __attribute__((swift_name("url_dask")));
@property (readonly) NSString * _Nullable url_konut __attribute__((swift_name("url_konut")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentInsuranceImpl_ResponseAdapter")))
@interface SharedFragmentInsuranceImpl_ResponseAdapter : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentInsuranceImpl_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFragmentInsuranceImpl_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentInsuranceImpl_ResponseAdapter.FragmentInsurance")))
@interface SharedFragmentInsuranceImpl_ResponseAdapterFragmentInsurance : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentInsurance __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFragmentInsuranceImpl_ResponseAdapterFragmentInsurance *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedFragmentInsurance * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedFragmentInsurance *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentLanguage")))
@interface SharedFragmentLanguage : SharedBase <SharedApollo_apiFragmentData>
- (instancetype)initWithId:(NSString *)id value:(NSString * _Nullable)value description:(NSString * _Nullable)description key:(NSString * _Nullable)key __attribute__((swift_name("init(id:value:description:key:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedFragmentLanguage *)doCopyId:(NSString *)id value:(NSString * _Nullable)value description:(NSString * _Nullable)description key:(NSString * _Nullable)key __attribute__((swift_name("doCopy(id:value:description:key:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable key __attribute__((swift_name("key")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentLanguageImpl_ResponseAdapter")))
@interface SharedFragmentLanguageImpl_ResponseAdapter : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentLanguageImpl_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFragmentLanguageImpl_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentLanguageImpl_ResponseAdapter.FragmentLanguage")))
@interface SharedFragmentLanguageImpl_ResponseAdapterFragmentLanguage : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentLanguage __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFragmentLanguageImpl_ResponseAdapterFragmentLanguage *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedFragmentLanguage * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedFragmentLanguage *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentTraining")))
@interface SharedFragmentTraining : SharedBase <SharedApollo_apiFragmentData>
- (instancetype)initWithStarts_at:(id)starts_at ends_at:(id)ends_at title:(NSString * _Nullable)title meeting_id:(NSString * _Nullable)meeting_id meeting_password:(NSString * _Nullable)meeting_password meeting_link:(NSString * _Nullable)meeting_link meeting_recording_link:(NSString * _Nullable)meeting_recording_link __attribute__((swift_name("init(starts_at:ends_at:title:meeting_id:meeting_password:meeting_link:meeting_recording_link:)"))) __attribute__((objc_designated_initializer));
- (id)component1 __attribute__((swift_name("component1()")));
- (id)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedFragmentTraining *)doCopyStarts_at:(id)starts_at ends_at:(id)ends_at title:(NSString * _Nullable)title meeting_id:(NSString * _Nullable)meeting_id meeting_password:(NSString * _Nullable)meeting_password meeting_link:(NSString * _Nullable)meeting_link meeting_recording_link:(NSString * _Nullable)meeting_recording_link __attribute__((swift_name("doCopy(starts_at:ends_at:title:meeting_id:meeting_password:meeting_link:meeting_recording_link:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id ends_at __attribute__((swift_name("ends_at")));
@property (readonly) NSString * _Nullable meeting_id __attribute__((swift_name("meeting_id")));
@property (readonly) NSString * _Nullable meeting_link __attribute__((swift_name("meeting_link")));
@property (readonly) NSString * _Nullable meeting_password __attribute__((swift_name("meeting_password")));
@property (readonly) NSString * _Nullable meeting_recording_link __attribute__((swift_name("meeting_recording_link")));
@property (readonly) id starts_at __attribute__((swift_name("starts_at")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentTrainingImpl_ResponseAdapter")))
@interface SharedFragmentTrainingImpl_ResponseAdapter : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentTrainingImpl_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFragmentTrainingImpl_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentTrainingImpl_ResponseAdapter.FragmentTraining")))
@interface SharedFragmentTrainingImpl_ResponseAdapterFragmentTraining : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentTraining __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFragmentTrainingImpl_ResponseAdapterFragmentTraining *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedFragmentTraining * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedFragmentTraining *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentUser")))
@interface SharedFragmentUser : SharedBase <SharedApollo_apiFragmentData>
- (instancetype)initWithId:(NSString *)id full_name:(NSString * _Nullable)full_name cell_phone:(NSString *)cell_phone country_code:(NSString *)country_code payment_url:(NSString * _Nullable)payment_url avatarThumb:(NSString * _Nullable)avatarThumb email:(NSString * _Nullable)email login_fizbot_agent:(BOOL)login_fizbot_agent __attribute__((swift_name("init(id:full_name:cell_phone:country_code:payment_url:avatarThumb:email:login_fizbot_agent:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (BOOL)component8 __attribute__((swift_name("component8()")));
- (SharedFragmentUser *)doCopyId:(NSString *)id full_name:(NSString * _Nullable)full_name cell_phone:(NSString *)cell_phone country_code:(NSString *)country_code payment_url:(NSString * _Nullable)payment_url avatarThumb:(NSString * _Nullable)avatarThumb email:(NSString * _Nullable)email login_fizbot_agent:(BOOL)login_fizbot_agent __attribute__((swift_name("doCopy(id:full_name:cell_phone:country_code:payment_url:avatarThumb:email:login_fizbot_agent:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable avatarThumb __attribute__((swift_name("avatarThumb")));
@property (readonly) NSString *cell_phone __attribute__((swift_name("cell_phone")));
@property (readonly) NSString *country_code __attribute__((swift_name("country_code")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) NSString * _Nullable full_name __attribute__((swift_name("full_name")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL login_fizbot_agent __attribute__((swift_name("login_fizbot_agent")));
@property (readonly) NSString * _Nullable payment_url __attribute__((swift_name("payment_url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentUserImpl_ResponseAdapter")))
@interface SharedFragmentUserImpl_ResponseAdapter : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentUserImpl_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFragmentUserImpl_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentUserImpl_ResponseAdapter.FragmentUser")))
@interface SharedFragmentUserImpl_ResponseAdapterFragmentUser : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentUser __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFragmentUserImpl_ResponseAdapterFragmentUser *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedFragmentUser * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedFragmentUser *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("fragmentAuthSelections")))
@interface SharedfragmentAuthSelections : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentAuthSelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedfragmentAuthSelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<SharedApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("fragmentBuyerSelections")))
@interface SharedfragmentBuyerSelections : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentBuyerSelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedfragmentBuyerSelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<SharedApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("fragmentCallingCodeSelections")))
@interface SharedfragmentCallingCodeSelections : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentCallingCodeSelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedfragmentCallingCodeSelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<SharedApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("fragmentInsuranceSelections")))
@interface SharedfragmentInsuranceSelections : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentInsuranceSelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedfragmentInsuranceSelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<SharedApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("fragmentLanguageSelections")))
@interface SharedfragmentLanguageSelections : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentLanguageSelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedfragmentLanguageSelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<SharedApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("fragmentTrainingSelections")))
@interface SharedfragmentTrainingSelections : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentTrainingSelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedfragmentTrainingSelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<SharedApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("fragmentUserSelections")))
@interface SharedfragmentUserSelections : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentUserSelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedfragmentUserSelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<SharedApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKotlinThrowable : SharedBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface SharedKotlinException : SharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface SharedKotlinRuntimeException : SharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SharedKotlinIllegalStateException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface SharedKotlinCancellationException : SharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiApolloResponse")))
@interface SharedApollo_apiApolloResponse<D> : SharedBase
- (BOOL)hasErrors __attribute__((swift_name("hasErrors()")));
- (SharedApollo_apiApolloResponseBuilder<D> *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
@property (readonly) D _Nullable data __attribute__((swift_name("data")));
@property (readonly) D dataAssertNoErrors __attribute__((swift_name("dataAssertNoErrors")));
@property (readonly) NSArray<SharedApollo_apiError *> * _Nullable errors __attribute__((swift_name("errors")));
@property (readonly) id<SharedApollo_apiExecutionContext> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) NSDictionary<NSString *, id> *extensions __attribute__((swift_name("extensions")));
@property (readonly) BOOL isLast __attribute__((swift_name("isLast")));
@property (readonly) id<SharedApollo_apiOperation> operation __attribute__((swift_name("operation")));
@property (readonly) SharedUuidUuid *requestUuid __attribute__((swift_name("requestUuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiHttpRequest")))
@interface SharedApollo_apiHttpRequest : SharedBase
- (SharedApollo_apiHttpRequestBuilder *)doNewBuilderMethod:(SharedApollo_apiHttpMethod *)method url:(NSString *)url __attribute__((swift_name("doNewBuilder(method:url:)")));
@property (readonly) id<SharedApollo_apiHttpBody> _Nullable body __attribute__((swift_name("body")));
@property (readonly) NSArray<SharedApollo_apiHttpHeader *> *headers __attribute__((swift_name("headers")));
@property (readonly) SharedApollo_apiHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Apollo_runtimeHttpInterceptorChain")))
@protocol SharedApollo_runtimeHttpInterceptorChain
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)proceedRequest:(SharedApollo_apiHttpRequest *)request completionHandler:(void (^)(SharedApollo_apiHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("proceed(request:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiHttpResponse")))
@interface SharedApollo_apiHttpResponse : SharedBase
- (SharedApollo_apiHttpResponseBuilder *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
@property (readonly) id<SharedOkioBufferedSource> _Nullable body __attribute__((swift_name("body")));
@property (readonly) NSArray<SharedApollo_apiHttpHeader *> *headers __attribute__((swift_name("headers")));
@property (readonly) int32_t statusCode __attribute__((swift_name("statusCode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SharedKotlinEnumCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("OkioIOException")))
@interface SharedOkioIOException : SharedKotlinException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("Apollo_apiCompiledSelection")))
@interface SharedApollo_apiCompiledSelection : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCompiledField")))
@interface SharedApollo_apiCompiledField : SharedApollo_apiCompiledSelection
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)nameWithArgumentsVariables:(SharedApollo_apiExecutableVariables *)variables __attribute__((swift_name("nameWithArguments(variables:)")));
- (SharedApollo_apiCompiledFieldBuilder *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
- (id _Nullable)resolveArgumentName:(NSString *)name variables:(SharedApollo_apiExecutableVariables *)variables __attribute__((swift_name("resolveArgument(name:variables:)")));
@property (readonly) NSString * _Nullable alias __attribute__((swift_name("alias")));
@property (readonly) NSArray<SharedApollo_apiCompiledArgument *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) NSArray<SharedApollo_apiCompiledCondition *> *condition __attribute__((swift_name("condition")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *responseName __attribute__((swift_name("responseName")));
@property (readonly) NSArray<SharedApollo_apiCompiledSelection *> *selections __attribute__((swift_name("selections")));
@property (readonly) SharedApollo_apiCompiledType *type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("OkioCloseable")))
@protocol SharedOkioCloseable
@required

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)closeAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Apollo_apiJsonWriter")))
@protocol SharedApollo_apiJsonWriter <SharedOkioCloseable>
@required

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonWriter> _Nullable)beginArrayAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("beginArray()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonWriter> _Nullable)beginObjectAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("beginObject()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonWriter> _Nullable)endArrayAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("endArray()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonWriter> _Nullable)endObjectAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("endObject()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)flushAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("flush()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonWriter> _Nullable)nameName:(NSString *)name error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("name(name:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonWriter> _Nullable)nullValueAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nullValue()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonWriter> _Nullable)valueValue:(id<SharedApollo_apiUpload>)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonWriter> _Nullable)valueValue:(SharedApollo_apiJsonNumber *)value error_:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value_:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonWriter> _Nullable)valueValue:(BOOL)value error__:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value__:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonWriter> _Nullable)valueValue:(double)value error___:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value___:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonWriter> _Nullable)valueValue:(int32_t)value error____:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value____:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonWriter> _Nullable)valueValue:(int64_t)value error_____:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value_____:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonWriter> _Nullable)valueValue:(NSString *)value error______:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value______:)")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@end;

__attribute__((swift_name("Apollo_apiExecutionContext")))
@protocol SharedApollo_apiExecutionContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<SharedApollo_apiExecutionContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<SharedApollo_apiExecutionContextElement> _Nullable)getKey:(id<SharedApollo_apiExecutionContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<SharedApollo_apiExecutionContext>)minusKeyKey:(id<SharedApollo_apiExecutionContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<SharedApollo_apiExecutionContext>)plusContext:(id<SharedApollo_apiExecutionContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("Apollo_apiExecutionContextElement")))
@protocol SharedApollo_apiExecutionContextElement <SharedApollo_apiExecutionContext>
@required
@property (readonly) id<SharedApollo_apiExecutionContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomScalarAdapters")))
@interface SharedApollo_apiCustomScalarAdapters : SharedBase <SharedApollo_apiExecutionContextElement>
@property (class, readonly, getter=companion) SharedApollo_apiCustomScalarAdaptersKey *companion __attribute__((swift_name("companion")));
- (SharedApollo_apiCustomScalarAdaptersBuilder *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
- (id<SharedApollo_apiAdapter>)responseAdapterForCustomScalar:(SharedApollo_apiCustomScalarType *)customScalar __attribute__((swift_name("responseAdapterFor(customScalar:)")));
- (NSSet<NSString *> *)variables __attribute__((swift_name("variables()"))) __attribute__((deprecated("Use adapterContext.variables() instead")));
@property (readonly) SharedApollo_apiAdapterContext *adapterContext __attribute__((swift_name("adapterContext")));
@property (readonly) id<SharedApollo_apiExecutionContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Apollo_apiJsonReader")))
@protocol SharedApollo_apiJsonReader <SharedOkioCloseable>
@required

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonReader> _Nullable)beginArrayAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("beginArray()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonReader> _Nullable)beginObjectAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("beginObject()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonReader> _Nullable)endArrayAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("endArray()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonReader> _Nullable)endObjectAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("endObject()")));
- (NSArray<id> *)getPath __attribute__((swift_name("getPath()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)hasNextAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("hasNext()"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)nextBooleanAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextBoolean()"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (double)nextDoubleAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextDouble()"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (int32_t)nextIntAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextInt()"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (int64_t)nextLongAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextLong()"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (NSString * _Nullable)nextNameAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextName()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKotlinNothing * _Nullable)nextNullAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextNull()"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedApollo_apiJsonNumber * _Nullable)nextNumberAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextNumber()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (NSString * _Nullable)nextStringAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextString()"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (SharedApollo_apiJsonReaderToken * _Nullable)peekAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("peek()")));
- (void)rewind __attribute__((swift_name("rewind()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (int32_t)selectNameNames:(NSArray<NSString *> *)names error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("selectName(names:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)skipValueAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("skipValue()")));
@end;

__attribute__((swift_name("Apollo_apiOptional")))
@interface SharedApollo_apiOptional<__covariant V> : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedApollo_apiOptionalCompanion *companion __attribute__((swift_name("companion")));
- (V _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (V _Nullable)getOrThrow __attribute__((swift_name("getOrThrow()")));
@end;

__attribute__((swift_name("Apollo_apiCompiledType")))
@interface SharedApollo_apiCompiledType : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedApollo_apiCompiledNamedType *)leafType __attribute__((swift_name("leafType()")));
@end;

__attribute__((swift_name("Apollo_apiCompiledNamedType")))
@interface SharedApollo_apiCompiledNamedType : SharedApollo_apiCompiledType
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (SharedApollo_apiCompiledNamedType *)leafType __attribute__((swift_name("leafType()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiObjectType")))
@interface SharedApollo_apiObjectType : SharedApollo_apiCompiledNamedType
- (instancetype)initWithName:(NSString *)name keyFields:(NSArray<NSString *> *)keyFields implements:(NSArray<SharedApollo_apiInterfaceType *> *)implements __attribute__((swift_name("init(name:keyFields:implements:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSArray<SharedApollo_apiInterfaceType *> *implements __attribute__((swift_name("implements")));
@property (readonly) NSArray<NSString *> *keyFields __attribute__((swift_name("keyFields")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomScalarType")))
@interface SharedApollo_apiCustomScalarType : SharedApollo_apiCompiledNamedType
- (instancetype)initWithName:(NSString *)name className:(NSString *)className __attribute__((swift_name("init(name:className:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *className __attribute__((swift_name("className")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiEnumType")))
@interface SharedApollo_apiEnumType : SharedApollo_apiCompiledNamedType
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiApolloResponseBuilder")))
@interface SharedApollo_apiApolloResponseBuilder<D> : SharedBase
- (instancetype)initWithOperation:(id<SharedApollo_apiOperation>)operation requestUuid:(SharedUuidUuid *)requestUuid data:(D _Nullable)data __attribute__((swift_name("init(operation:requestUuid:data:)"))) __attribute__((objc_designated_initializer));
- (SharedApollo_apiApolloResponseBuilder<D> *)addExecutionContextExecutionContext:(id<SharedApollo_apiExecutionContext>)executionContext __attribute__((swift_name("addExecutionContext(executionContext:)")));
- (SharedApollo_apiApolloResponse<D> *)build __attribute__((swift_name("build()")));
- (SharedApollo_apiApolloResponseBuilder<D> *)errorsErrors:(NSArray<SharedApollo_apiError *> * _Nullable)errors __attribute__((swift_name("errors(errors:)")));
- (SharedApollo_apiApolloResponseBuilder<D> *)extensionsExtensions:(NSDictionary<NSString *, id> * _Nullable)extensions __attribute__((swift_name("extensions(extensions:)")));
- (SharedApollo_apiApolloResponseBuilder<D> *)isLastIsLast:(BOOL)isLast __attribute__((swift_name("isLast(isLast:)")));
- (SharedApollo_apiApolloResponseBuilder<D> *)requestUuidRequestUuid:(SharedUuidUuid *)requestUuid __attribute__((swift_name("requestUuid(requestUuid:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiError")))
@interface SharedApollo_apiError : SharedBase
- (instancetype)initWithMessage:(NSString *)message locations:(NSArray<SharedApollo_apiErrorLocation *> * _Nullable)locations path:(NSArray<id> * _Nullable)path extensions:(NSDictionary<NSString *, id> * _Nullable)extensions nonStandardFields:(NSDictionary<NSString *, id> * _Nullable)nonStandardFields __attribute__((swift_name("init(message:locations:path:extensions:nonStandardFields:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, id> *customAttributes __attribute__((swift_name("customAttributes"))) __attribute__((unavailable("Used for backward compatibility with 2.x")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable extensions __attribute__((swift_name("extensions")));
@property (readonly) NSArray<SharedApollo_apiErrorLocation *> * _Nullable locations __attribute__((swift_name("locations")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable nonStandardFields __attribute__((swift_name("nonStandardFields")));
@property (readonly) NSArray<id> * _Nullable path __attribute__((swift_name("path")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UuidUuid")))
@interface SharedUuidUuid : SharedBase <SharedKotlinComparable>
- (instancetype)initWithMsb:(int64_t)msb lsb:(int64_t)lsb __attribute__((swift_name("init(msb:lsb:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithUuidBytes:(SharedKotlinByteArray *)uuidBytes __attribute__((swift_name("init(uuidBytes:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use `uuidOf` instead.")));
- (int32_t)compareToOther:(SharedUuidUuid *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t leastSignificantBits __attribute__((swift_name("leastSignificantBits")));
@property (readonly) int64_t mostSignificantBits __attribute__((swift_name("mostSignificantBits")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiHttpRequest.Builder")))
@interface SharedApollo_apiHttpRequestBuilder : SharedBase
- (instancetype)initWithMethod:(SharedApollo_apiHttpMethod *)method url:(NSString *)url __attribute__((swift_name("init(method:url:)"))) __attribute__((objc_designated_initializer));
- (SharedApollo_apiHttpRequestBuilder *)addHeaderName:(NSString *)name value:(NSString *)value __attribute__((swift_name("addHeader(name:value:)")));
- (SharedApollo_apiHttpRequestBuilder *)addHeadersHeaders:(NSArray<SharedApollo_apiHttpHeader *> *)headers __attribute__((swift_name("addHeaders(headers:)")));
- (SharedApollo_apiHttpRequestBuilder *)bodyBody:(id<SharedApollo_apiHttpBody>)body __attribute__((swift_name("body(body:)")));
- (SharedApollo_apiHttpRequest *)build __attribute__((swift_name("build()")));
- (SharedApollo_apiHttpRequestBuilder *)headersHeaders:(NSArray<SharedApollo_apiHttpHeader *> *)headers __attribute__((swift_name("headers(headers:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiHttpMethod")))
@interface SharedApollo_apiHttpMethod : SharedKotlinEnum<SharedApollo_apiHttpMethod *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedApollo_apiHttpMethod *get __attribute__((swift_name("get")));
@property (class, readonly) SharedApollo_apiHttpMethod *post __attribute__((swift_name("post")));
+ (SharedKotlinArray<SharedApollo_apiHttpMethod *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Apollo_apiHttpBody")))
@protocol SharedApollo_apiHttpBody
@required
- (void)writeToBufferedSink:(id<SharedOkioBufferedSink>)bufferedSink __attribute__((swift_name("writeTo(bufferedSink:)")));
@property (readonly) int64_t contentLength __attribute__((swift_name("contentLength")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiHttpHeader")))
@interface SharedApollo_apiHttpHeader : SharedBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedApollo_apiHttpHeader *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiHttpResponse.Builder")))
@interface SharedApollo_apiHttpResponseBuilder : SharedBase
- (instancetype)initWithStatusCode:(int32_t)statusCode __attribute__((swift_name("init(statusCode:)"))) __attribute__((objc_designated_initializer));
- (SharedApollo_apiHttpResponseBuilder *)addHeaderName:(NSString *)name value:(NSString *)value __attribute__((swift_name("addHeader(name:value:)")));
- (SharedApollo_apiHttpResponseBuilder *)addHeadersHeaders:(NSArray<SharedApollo_apiHttpHeader *> *)headers __attribute__((swift_name("addHeaders(headers:)")));
- (SharedApollo_apiHttpResponseBuilder *)bodyBodySource:(id<SharedOkioBufferedSource>)bodySource __attribute__((swift_name("body(bodySource:)")));
- (SharedApollo_apiHttpResponseBuilder *)bodyBodyString:(SharedOkioByteString *)bodyString __attribute__((swift_name("body(bodyString:)")));
- (SharedApollo_apiHttpResponse *)build __attribute__((swift_name("build()")));
- (SharedApollo_apiHttpResponseBuilder *)headersHeaders:(NSArray<SharedApollo_apiHttpHeader *> *)headers __attribute__((swift_name("headers(headers:)")));
@property (readonly) int32_t statusCode __attribute__((swift_name("statusCode")));
@end;

__attribute__((swift_name("OkioSource")))
@protocol SharedOkioSource <SharedOkioCloseable>
@required

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (int64_t)readSink:(SharedOkioBuffer *)sink byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("read(sink:byteCount:)"))) __attribute__((swift_error(nonnull_error)));
- (SharedOkioTimeout *)timeout __attribute__((swift_name("timeout()")));
@end;

__attribute__((swift_name("OkioBufferedSource")))
@protocol SharedOkioBufferedSource <SharedOkioSource>
@required
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (int64_t)indexOfB:(int8_t)b __attribute__((swift_name("indexOf(b:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(b:fromIndex:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex toIndex:(int64_t)toIndex __attribute__((swift_name("indexOf(b:fromIndex:toIndex:)")));
- (int64_t)indexOfBytes:(SharedOkioByteString *)bytes __attribute__((swift_name("indexOf(bytes:)")));
- (int64_t)indexOfBytes:(SharedOkioByteString *)bytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(bytes:fromIndex:)")));
- (int64_t)indexOfElementTargetBytes:(SharedOkioByteString *)targetBytes __attribute__((swift_name("indexOfElement(targetBytes:)")));
- (int64_t)indexOfElementTargetBytes:(SharedOkioByteString *)targetBytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOfElement(targetBytes:fromIndex:)")));
- (id<SharedOkioBufferedSource>)peek __attribute__((swift_name("peek_()")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(SharedOkioByteString *)bytes __attribute__((swift_name("rangeEquals(offset:bytes:)")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(SharedOkioByteString *)bytes bytesOffset:(int32_t)bytesOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:bytes:bytesOffset:byteCount:)")));
- (int32_t)readSink:(SharedKotlinByteArray *)sink __attribute__((swift_name("read(sink:)")));
- (int32_t)readSink:(SharedKotlinByteArray *)sink offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("read(sink:offset:byteCount:)")));
- (int64_t)readAllSink:(id<SharedOkioSink>)sink __attribute__((swift_name("readAll(sink:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (SharedKotlinByteArray *)readByteArray __attribute__((swift_name("readByteArray()")));
- (SharedKotlinByteArray *)readByteArrayByteCount:(int64_t)byteCount __attribute__((swift_name("readByteArray(byteCount:)")));
- (SharedOkioByteString *)readByteString __attribute__((swift_name("readByteString()")));
- (SharedOkioByteString *)readByteStringByteCount:(int64_t)byteCount __attribute__((swift_name("readByteString(byteCount:)")));
- (int64_t)readDecimalLong __attribute__((swift_name("readDecimalLong()")));
- (void)readFullySink:(SharedKotlinByteArray *)sink __attribute__((swift_name("readFully(sink:)")));
- (void)readFullySink:(SharedOkioBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readFully(sink:byteCount:)")));
- (int64_t)readHexadecimalUnsignedLong __attribute__((swift_name("readHexadecimalUnsignedLong()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int32_t)readIntLe __attribute__((swift_name("readIntLe()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int64_t)readLongLe __attribute__((swift_name("readLongLe()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (int16_t)readShortLe __attribute__((swift_name("readShortLe()")));
- (NSString *)readUtf8 __attribute__((swift_name("readUtf8()")));
- (NSString *)readUtf8ByteCount:(int64_t)byteCount __attribute__((swift_name("readUtf8(byteCount:)")));
- (int32_t)readUtf8CodePoint __attribute__((swift_name("readUtf8CodePoint()")));
- (NSString * _Nullable)readUtf8Line __attribute__((swift_name("readUtf8Line()")));
- (NSString *)readUtf8LineStrict __attribute__((swift_name("readUtf8LineStrict()")));
- (NSString *)readUtf8LineStrictLimit:(int64_t)limit __attribute__((swift_name("readUtf8LineStrict(limit:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (int32_t)selectOptions:(NSArray<SharedOkioByteString *> *)options __attribute__((swift_name("select(options:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
@property (readonly) SharedOkioBuffer *buffer __attribute__((swift_name("buffer")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext_()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiExecutableVariables")))
@interface SharedApollo_apiExecutableVariables : SharedBase
- (instancetype)initWithValueMap:(NSDictionary<NSString *, id> *)valueMap __attribute__((swift_name("init(valueMap:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSDictionary<NSString *, id> *valueMap __attribute__((swift_name("valueMap")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCompiledField.Builder")))
@interface SharedApollo_apiCompiledFieldBuilder : SharedBase
- (instancetype)initWithCompiledField:(SharedApollo_apiCompiledField *)compiledField __attribute__((swift_name("init(compiledField:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name type:(SharedApollo_apiCompiledType *)type __attribute__((swift_name("init(name:type:)"))) __attribute__((objc_designated_initializer));
- (SharedApollo_apiCompiledFieldBuilder *)aliasAlias:(NSString * _Nullable)alias __attribute__((swift_name("alias(alias:)")));
- (SharedApollo_apiCompiledFieldBuilder *)argumentsArguments:(NSArray<SharedApollo_apiCompiledArgument *> *)arguments __attribute__((swift_name("arguments(arguments:)")));
- (SharedApollo_apiCompiledField *)build __attribute__((swift_name("build()")));
- (SharedApollo_apiCompiledFieldBuilder *)conditionCondition:(NSArray<SharedApollo_apiCompiledCondition *> *)condition __attribute__((swift_name("condition(condition:)")));
- (SharedApollo_apiCompiledFieldBuilder *)selectionsSelections:(NSArray<SharedApollo_apiCompiledSelection *> *)selections __attribute__((swift_name("selections(selections:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) SharedApollo_apiCompiledType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCompiledArgument")))
@interface SharedApollo_apiCompiledArgument : SharedBase
- (instancetype)initWithName:(NSString *)name value:(id _Nullable)value isKey:(BOOL)isKey __attribute__((swift_name("init(name:value:isKey:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BOOL isKey __attribute__((swift_name("isKey")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCompiledCondition")))
@interface SharedApollo_apiCompiledCondition : SharedBase
- (instancetype)initWithName:(NSString *)name inverted:(BOOL)inverted __attribute__((swift_name("init(name:inverted:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (SharedApollo_apiCompiledCondition *)doCopyName:(NSString *)name inverted:(BOOL)inverted __attribute__((swift_name("doCopy(name:inverted:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL inverted __attribute__((swift_name("inverted")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Apollo_apiUpload")))
@protocol SharedApollo_apiUpload
@required
- (void)writeToSink:(id<SharedOkioBufferedSink>)sink __attribute__((swift_name("writeTo(sink:)")));
@property (readonly) int64_t contentLength __attribute__((swift_name("contentLength")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@property (readonly) NSString * _Nullable fileName __attribute__((swift_name("fileName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiJsonNumber")))
@interface SharedApollo_apiJsonNumber : SharedBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Apollo_apiExecutionContextKey")))
@protocol SharedApollo_apiExecutionContextKey
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomScalarAdapters.Key")))
@interface SharedApollo_apiCustomScalarAdaptersKey : SharedBase <SharedApollo_apiExecutionContextKey>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedApollo_apiCustomScalarAdaptersKey *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiCustomScalarAdapters *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomScalarAdapters.Builder")))
@interface SharedApollo_apiCustomScalarAdaptersBuilder : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedApollo_apiCustomScalarAdaptersBuilder *)adapterContextAdapterContext:(SharedApollo_apiAdapterContext *)adapterContext __attribute__((swift_name("adapterContext(adapterContext:)")));
- (SharedApollo_apiCustomScalarAdaptersBuilder *)addCustomScalarType:(SharedApollo_apiCustomScalarType *)customScalarType customScalarAdapter:(id<SharedApollo_apiAdapter>)customScalarAdapter __attribute__((swift_name("add(customScalarType:customScalarAdapter:)")));
- (SharedApollo_apiCustomScalarAdaptersBuilder *)addCustomScalarType:(SharedApollo_apiCustomScalarType *)customScalarType customTypeAdapter:(id<SharedApollo_apiCustomTypeAdapter>)customTypeAdapter __attribute__((swift_name("add(customScalarType:customTypeAdapter:)"))) __attribute__((deprecated("Used for backward compatibility with 2.x")));
- (SharedApollo_apiCustomScalarAdaptersBuilder *)addAllCustomScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters __attribute__((swift_name("addAll(customScalarAdapters:)")));
- (SharedApollo_apiCustomScalarAdapters *)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (SharedApollo_apiCustomScalarAdaptersBuilder *)variablesVariables:(SharedApollo_apiExecutableVariables *)variables __attribute__((swift_name("variables(variables:)"))) __attribute__((deprecated("Use AdapterContext.Builder.variables() instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiAdapterContext")))
@interface SharedApollo_apiAdapterContext : SharedBase
- (BOOL)hasDeferredFragmentPath:(NSArray<id> *)path label:(NSString * _Nullable)label __attribute__((swift_name("hasDeferredFragment(path:label:)")));
- (SharedApollo_apiAdapterContextBuilder *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
- (NSSet<NSString *> *)variables __attribute__((swift_name("variables()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SharedKotlinNothing : SharedBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiJsonReaderToken")))
@interface SharedApollo_apiJsonReaderToken : SharedKotlinEnum<SharedApollo_apiJsonReaderToken *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedApollo_apiJsonReaderToken *beginArray __attribute__((swift_name("beginArray")));
@property (class, readonly) SharedApollo_apiJsonReaderToken *endArray __attribute__((swift_name("endArray")));
@property (class, readonly) SharedApollo_apiJsonReaderToken *beginObject __attribute__((swift_name("beginObject")));
@property (class, readonly) SharedApollo_apiJsonReaderToken *endObject __attribute__((swift_name("endObject")));
@property (class, readonly) SharedApollo_apiJsonReaderToken *name __attribute__((swift_name("name")));
@property (class, readonly) SharedApollo_apiJsonReaderToken *string __attribute__((swift_name("string")));
@property (class, readonly) SharedApollo_apiJsonReaderToken *number __attribute__((swift_name("number")));
@property (class, readonly) SharedApollo_apiJsonReaderToken *long_ __attribute__((swift_name("long_")));
@property (class, readonly) SharedApollo_apiJsonReaderToken *boolean __attribute__((swift_name("boolean")));
@property (class, readonly) SharedApollo_apiJsonReaderToken *null __attribute__((swift_name("null")));
@property (class, readonly) SharedApollo_apiJsonReaderToken *endDocument __attribute__((swift_name("endDocument")));
+ (SharedKotlinArray<SharedApollo_apiJsonReaderToken *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiOptionalCompanion")))
@interface SharedApollo_apiOptionalCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedApollo_apiOptionalCompanion *shared __attribute__((swift_name("shared")));
- (SharedApollo_apiOptional<id> *)presentIfNotNullValue:(id _Nullable)value __attribute__((swift_name("presentIfNotNull(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiInterfaceType")))
@interface SharedApollo_apiInterfaceType : SharedApollo_apiCompiledNamedType
- (instancetype)initWithName:(NSString *)name keyFields:(NSArray<NSString *> *)keyFields implements:(NSArray<SharedApollo_apiInterfaceType *> *)implements __attribute__((swift_name("init(name:keyFields:implements:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSArray<SharedApollo_apiInterfaceType *> *implements __attribute__((swift_name("implements")));
@property (readonly) NSArray<NSString *> *keyFields __attribute__((swift_name("keyFields")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiError.Location")))
@interface SharedApollo_apiErrorLocation : SharedBase
- (instancetype)initWithLine:(int32_t)line column:(int32_t)column __attribute__((swift_name("init(line:column:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t column __attribute__((swift_name("column")));
@property (readonly) int32_t line __attribute__((swift_name("line")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface SharedKotlinByteArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedByte *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("OkioSink")))
@protocol SharedOkioSink <SharedOkioCloseable>
@required

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)flushAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("flush()")));
- (SharedOkioTimeout *)timeout __attribute__((swift_name("timeout()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)writeSource:(SharedOkioBuffer *)source byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("write(source:byteCount_:)")));
@end;

__attribute__((swift_name("OkioBufferedSink")))
@protocol SharedOkioBufferedSink <SharedOkioSink>
@required
- (id<SharedOkioBufferedSink>)emit __attribute__((swift_name("emit()")));
- (id<SharedOkioBufferedSink>)emitCompleteSegments __attribute__((swift_name("emitCompleteSegments()")));
- (id<SharedOkioBufferedSink>)writeSource:(SharedKotlinByteArray *)source __attribute__((swift_name("write(source:)")));
- (id<SharedOkioBufferedSink>)writeSource:(SharedKotlinByteArray *)source offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(source:offset:byteCount:)")));
- (id<SharedOkioBufferedSink>)writeByteString:(SharedOkioByteString *)byteString __attribute__((swift_name("write(byteString:)")));
- (id<SharedOkioBufferedSink>)writeByteString:(SharedOkioByteString *)byteString offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(byteString:offset:byteCount:)")));
- (id<SharedOkioBufferedSink>)writeSource:(id<SharedOkioSource>)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (int64_t)writeAllSource:(id<SharedOkioSource>)source __attribute__((swift_name("writeAll(source:)")));
- (id<SharedOkioBufferedSink>)writeByteB:(int32_t)b __attribute__((swift_name("writeByte(b:)")));
- (id<SharedOkioBufferedSink>)writeDecimalLongV:(int64_t)v __attribute__((swift_name("writeDecimalLong(v:)")));
- (id<SharedOkioBufferedSink>)writeHexadecimalUnsignedLongV:(int64_t)v __attribute__((swift_name("writeHexadecimalUnsignedLong(v:)")));
- (id<SharedOkioBufferedSink>)writeIntI:(int32_t)i __attribute__((swift_name("writeInt(i:)")));
- (id<SharedOkioBufferedSink>)writeIntLeI:(int32_t)i __attribute__((swift_name("writeIntLe(i:)")));
- (id<SharedOkioBufferedSink>)writeLongV:(int64_t)v __attribute__((swift_name("writeLong(v:)")));
- (id<SharedOkioBufferedSink>)writeLongLeV:(int64_t)v __attribute__((swift_name("writeLongLe(v:)")));
- (id<SharedOkioBufferedSink>)writeShortS:(int32_t)s __attribute__((swift_name("writeShort(s:)")));
- (id<SharedOkioBufferedSink>)writeShortLeS:(int32_t)s __attribute__((swift_name("writeShortLe(s:)")));
- (id<SharedOkioBufferedSink>)writeUtf8String:(NSString *)string __attribute__((swift_name("writeUtf8(string:)")));
- (id<SharedOkioBufferedSink>)writeUtf8String:(NSString *)string beginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("writeUtf8(string:beginIndex:endIndex:)")));
- (id<SharedOkioBufferedSink>)writeUtf8CodePointCodePoint:(int32_t)codePoint __attribute__((swift_name("writeUtf8CodePoint(codePoint:)")));
@property (readonly) SharedOkioBuffer *buffer __attribute__((swift_name("buffer")));
@end;

__attribute__((swift_name("OkioByteString")))
@interface SharedOkioByteString : SharedBase <SharedKotlinComparable>
@property (class, readonly, getter=companion) SharedOkioByteStringCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)base64 __attribute__((swift_name("base64()")));
- (NSString *)base64Url __attribute__((swift_name("base64Url()")));
- (int32_t)compareToOther:(SharedOkioByteString *)other __attribute__((swift_name("compareTo(other:)")));
- (void)doCopyIntoOffset:(int32_t)offset target:(SharedKotlinByteArray *)target targetOffset:(int32_t)targetOffset byteCount:(int32_t)byteCount __attribute__((swift_name("doCopyInto(offset:target:targetOffset:byteCount:)")));
- (BOOL)endsWithSuffix:(SharedKotlinByteArray *)suffix __attribute__((swift_name("endsWith(suffix:)")));
- (BOOL)endsWithSuffix_:(SharedOkioByteString *)suffix __attribute__((swift_name("endsWith(suffix_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)hex __attribute__((swift_name("hex()")));
- (SharedOkioByteString *)hmacSha1Key:(SharedOkioByteString *)key __attribute__((swift_name("hmacSha1(key:)")));
- (SharedOkioByteString *)hmacSha256Key:(SharedOkioByteString *)key __attribute__((swift_name("hmacSha256(key:)")));
- (SharedOkioByteString *)hmacSha512Key:(SharedOkioByteString *)key __attribute__((swift_name("hmacSha512(key:)")));
- (int32_t)indexOfOther:(SharedKotlinByteArray *)other fromIndex:(int32_t)fromIndex __attribute__((swift_name("indexOf(other:fromIndex:)")));
- (int32_t)indexOfOther:(SharedOkioByteString *)other fromIndex_:(int32_t)fromIndex __attribute__((swift_name("indexOf(other:fromIndex_:)")));
- (int32_t)lastIndexOfOther:(SharedKotlinByteArray *)other fromIndex:(int32_t)fromIndex __attribute__((swift_name("lastIndexOf(other:fromIndex:)")));
- (int32_t)lastIndexOfOther:(SharedOkioByteString *)other fromIndex_:(int32_t)fromIndex __attribute__((swift_name("lastIndexOf(other:fromIndex_:)")));
- (SharedOkioByteString *)md5 __attribute__((swift_name("md5()")));
- (BOOL)rangeEqualsOffset:(int32_t)offset other:(SharedKotlinByteArray *)other otherOffset:(int32_t)otherOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:other:otherOffset:byteCount:)")));
- (BOOL)rangeEqualsOffset:(int32_t)offset other:(SharedOkioByteString *)other otherOffset:(int32_t)otherOffset byteCount_:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:other:otherOffset:byteCount_:)")));
- (SharedOkioByteString *)sha1 __attribute__((swift_name("sha1()")));
- (SharedOkioByteString *)sha256 __attribute__((swift_name("sha256()")));
- (SharedOkioByteString *)sha512 __attribute__((swift_name("sha512()")));
- (BOOL)startsWithPrefix:(SharedKotlinByteArray *)prefix __attribute__((swift_name("startsWith(prefix:)")));
- (BOOL)startsWithPrefix_:(SharedOkioByteString *)prefix __attribute__((swift_name("startsWith(prefix_:)")));
- (SharedOkioByteString *)substringBeginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("substring(beginIndex:endIndex:)")));
- (SharedOkioByteString *)toAsciiLowercase __attribute__((swift_name("toAsciiLowercase()")));
- (SharedOkioByteString *)toAsciiUppercase __attribute__((swift_name("toAsciiUppercase()")));
- (SharedKotlinByteArray *)toByteArray __attribute__((swift_name("toByteArray()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)utf8 __attribute__((swift_name("utf8()")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioBuffer")))
@interface SharedOkioBuffer : SharedBase <SharedOkioBufferedSource, SharedOkioBufferedSink>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)closeAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("close()")));
- (int64_t)completeSegmentByteCount __attribute__((swift_name("completeSegmentByteCount()")));
- (SharedOkioBuffer *)doCopy __attribute__((swift_name("doCopy()")));
- (SharedOkioBuffer *)doCopyToOut:(SharedOkioBuffer *)out offset:(int64_t)offset __attribute__((swift_name("doCopyTo(out:offset:)")));
- (SharedOkioBuffer *)doCopyToOut:(SharedOkioBuffer *)out offset:(int64_t)offset byteCount:(int64_t)byteCount __attribute__((swift_name("doCopyTo(out:offset:byteCount:)")));
- (SharedOkioBuffer *)emit __attribute__((swift_name("emit()")));
- (SharedOkioBuffer *)emitCompleteSegments __attribute__((swift_name("emitCompleteSegments()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)flushAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("flush()")));
- (int8_t)getPos:(int64_t)pos __attribute__((swift_name("get(pos:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedOkioByteString *)hmacSha1Key:(SharedOkioByteString *)key __attribute__((swift_name("hmacSha1(key:)")));
- (SharedOkioByteString *)hmacSha256Key:(SharedOkioByteString *)key __attribute__((swift_name("hmacSha256(key:)")));
- (SharedOkioByteString *)hmacSha512Key:(SharedOkioByteString *)key __attribute__((swift_name("hmacSha512(key:)")));
- (int64_t)indexOfB:(int8_t)b __attribute__((swift_name("indexOf(b:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(b:fromIndex:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex toIndex:(int64_t)toIndex __attribute__((swift_name("indexOf(b:fromIndex:toIndex:)")));
- (int64_t)indexOfBytes:(SharedOkioByteString *)bytes __attribute__((swift_name("indexOf(bytes:)")));
- (int64_t)indexOfBytes:(SharedOkioByteString *)bytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(bytes:fromIndex:)")));
- (int64_t)indexOfElementTargetBytes:(SharedOkioByteString *)targetBytes __attribute__((swift_name("indexOfElement(targetBytes:)")));
- (int64_t)indexOfElementTargetBytes:(SharedOkioByteString *)targetBytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOfElement(targetBytes:fromIndex:)")));
- (SharedOkioByteString *)md5 __attribute__((swift_name("md5()")));
- (id<SharedOkioBufferedSource>)peek __attribute__((swift_name("peek_()")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(SharedOkioByteString *)bytes __attribute__((swift_name("rangeEquals(offset:bytes:)")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(SharedOkioByteString *)bytes bytesOffset:(int32_t)bytesOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:bytes:bytesOffset:byteCount:)")));
- (int32_t)readSink:(SharedKotlinByteArray *)sink __attribute__((swift_name("read(sink:)")));
- (int32_t)readSink:(SharedKotlinByteArray *)sink offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("read(sink:offset:byteCount:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (int64_t)readSink:(SharedOkioBuffer *)sink byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("read(sink:byteCount:)"))) __attribute__((swift_error(nonnull_error)));
- (int64_t)readAllSink:(id<SharedOkioSink>)sink __attribute__((swift_name("readAll(sink:)")));
- (SharedOkioBufferUnsafeCursor *)readAndWriteUnsafeUnsafeCursor:(SharedOkioBufferUnsafeCursor *)unsafeCursor __attribute__((swift_name("readAndWriteUnsafe(unsafeCursor:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (SharedKotlinByteArray *)readByteArray __attribute__((swift_name("readByteArray()")));
- (SharedKotlinByteArray *)readByteArrayByteCount:(int64_t)byteCount __attribute__((swift_name("readByteArray(byteCount:)")));
- (SharedOkioByteString *)readByteString __attribute__((swift_name("readByteString()")));
- (SharedOkioByteString *)readByteStringByteCount:(int64_t)byteCount __attribute__((swift_name("readByteString(byteCount:)")));
- (int64_t)readDecimalLong __attribute__((swift_name("readDecimalLong()")));
- (void)readFullySink:(SharedKotlinByteArray *)sink __attribute__((swift_name("readFully(sink:)")));
- (void)readFullySink:(SharedOkioBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readFully(sink:byteCount:)")));
- (int64_t)readHexadecimalUnsignedLong __attribute__((swift_name("readHexadecimalUnsignedLong()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int32_t)readIntLe __attribute__((swift_name("readIntLe()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int64_t)readLongLe __attribute__((swift_name("readLongLe()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (int16_t)readShortLe __attribute__((swift_name("readShortLe()")));
- (SharedOkioBufferUnsafeCursor *)readUnsafeUnsafeCursor:(SharedOkioBufferUnsafeCursor *)unsafeCursor __attribute__((swift_name("readUnsafe(unsafeCursor:)")));
- (NSString *)readUtf8 __attribute__((swift_name("readUtf8()")));
- (NSString *)readUtf8ByteCount:(int64_t)byteCount __attribute__((swift_name("readUtf8(byteCount:)")));
- (int32_t)readUtf8CodePoint __attribute__((swift_name("readUtf8CodePoint()")));
- (NSString * _Nullable)readUtf8Line __attribute__((swift_name("readUtf8Line()")));
- (NSString *)readUtf8LineStrict __attribute__((swift_name("readUtf8LineStrict()")));
- (NSString *)readUtf8LineStrictLimit:(int64_t)limit __attribute__((swift_name("readUtf8LineStrict(limit:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (int32_t)selectOptions:(NSArray<SharedOkioByteString *> *)options __attribute__((swift_name("select(options:)")));
- (SharedOkioByteString *)sha1 __attribute__((swift_name("sha1()")));
- (SharedOkioByteString *)sha256 __attribute__((swift_name("sha256()")));
- (SharedOkioByteString *)sha512 __attribute__((swift_name("sha512()")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (SharedOkioByteString *)snapshot __attribute__((swift_name("snapshot()")));
- (SharedOkioByteString *)snapshotByteCount:(int32_t)byteCount __attribute__((swift_name("snapshot(byteCount:)")));
- (SharedOkioTimeout *)timeout __attribute__((swift_name("timeout()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (SharedOkioBuffer *)writeSource:(SharedKotlinByteArray *)source __attribute__((swift_name("write(source:)")));
- (SharedOkioBuffer *)writeSource:(SharedKotlinByteArray *)source offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(source:offset:byteCount:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)writeSource:(SharedOkioBuffer *)source byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("write(source:byteCount_:)")));
- (SharedOkioBuffer *)writeByteString:(SharedOkioByteString *)byteString __attribute__((swift_name("write(byteString:)")));
- (SharedOkioBuffer *)writeByteString:(SharedOkioByteString *)byteString offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(byteString:offset:byteCount:)")));
- (SharedOkioBuffer *)writeSource:(id<SharedOkioSource>)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (int64_t)writeAllSource:(id<SharedOkioSource>)source __attribute__((swift_name("writeAll(source:)")));
- (SharedOkioBuffer *)writeByteB:(int32_t)b __attribute__((swift_name("writeByte(b:)")));
- (SharedOkioBuffer *)writeDecimalLongV:(int64_t)v __attribute__((swift_name("writeDecimalLong(v:)")));
- (SharedOkioBuffer *)writeHexadecimalUnsignedLongV:(int64_t)v __attribute__((swift_name("writeHexadecimalUnsignedLong(v:)")));
- (SharedOkioBuffer *)writeIntI:(int32_t)i __attribute__((swift_name("writeInt(i:)")));
- (SharedOkioBuffer *)writeIntLeI:(int32_t)i __attribute__((swift_name("writeIntLe(i:)")));
- (SharedOkioBuffer *)writeLongV:(int64_t)v __attribute__((swift_name("writeLong(v:)")));
- (SharedOkioBuffer *)writeLongLeV:(int64_t)v __attribute__((swift_name("writeLongLe(v:)")));
- (SharedOkioBuffer *)writeShortS:(int32_t)s __attribute__((swift_name("writeShort(s:)")));
- (SharedOkioBuffer *)writeShortLeS:(int32_t)s __attribute__((swift_name("writeShortLe(s:)")));
- (SharedOkioBuffer *)writeUtf8String:(NSString *)string __attribute__((swift_name("writeUtf8(string:)")));
- (SharedOkioBuffer *)writeUtf8String:(NSString *)string beginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("writeUtf8(string:beginIndex:endIndex:)")));
- (SharedOkioBuffer *)writeUtf8CodePointCodePoint:(int32_t)codePoint __attribute__((swift_name("writeUtf8CodePoint(codePoint:)")));
@property (readonly) SharedOkioBuffer *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("OkioTimeout")))
@interface SharedOkioTimeout : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedOkioTimeoutCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((swift_name("Apollo_apiCustomTypeAdapter")))
@protocol SharedApollo_apiCustomTypeAdapter
@required
- (id _Nullable)decodeValue:(SharedApollo_apiCustomTypeValue<id> *)value __attribute__((swift_name("decode(value:)")));
- (SharedApollo_apiCustomTypeValue<id> *)encodeValue:(id _Nullable)value __attribute__((swift_name("encode(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiAdapterContext.Builder")))
@interface SharedApollo_apiAdapterContextBuilder : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedApollo_apiAdapterContext *)build __attribute__((swift_name("build()")));
- (SharedApollo_apiAdapterContextBuilder *)mergedDeferredFragmentIdsMergedDeferredFragmentIds:(NSSet<SharedApollo_apiDeferredFragmentIdentifier *> * _Nullable)mergedDeferredFragmentIds __attribute__((swift_name("mergedDeferredFragmentIds(mergedDeferredFragmentIds:)")));
- (SharedApollo_apiAdapterContextBuilder *)variablesVariables:(SharedApollo_apiExecutableVariables * _Nullable)variables __attribute__((swift_name("variables(variables:)")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface SharedKotlinByteIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioByteString.Companion")))
@interface SharedOkioByteStringCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedOkioByteStringCompanion *shared __attribute__((swift_name("shared")));
- (SharedOkioByteString *)ofData:(SharedKotlinByteArray *)data __attribute__((swift_name("of(data:)")));
- (SharedOkioByteString * _Nullable)decodeBase64:(NSString *)receiver __attribute__((swift_name("decodeBase64(_:)")));
- (SharedOkioByteString *)decodeHex:(NSString *)receiver __attribute__((swift_name("decodeHex(_:)")));
- (SharedOkioByteString *)encodeUtf8:(NSString *)receiver __attribute__((swift_name("encodeUtf8(_:)")));
- (SharedOkioByteString *)toByteString:(SharedKotlinByteArray *)receiver offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("toByteString(_:offset:byteCount:)")));
@property (readonly) SharedOkioByteString *EMPTY __attribute__((swift_name("EMPTY")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioBuffer.UnsafeCursor")))
@interface SharedOkioBufferUnsafeCursor : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (int64_t)expandBufferMinByteCount:(int32_t)minByteCount __attribute__((swift_name("expandBuffer(minByteCount:)")));
- (int32_t)next __attribute__((swift_name("next()")));
- (int64_t)resizeBufferNewSize:(int64_t)newSize __attribute__((swift_name("resizeBuffer(newSize:)")));
- (int32_t)seekOffset:(int64_t)offset __attribute__((swift_name("seek(offset:)")));
@property SharedOkioBuffer * _Nullable buffer __attribute__((swift_name("buffer")));
@property SharedKotlinByteArray * _Nullable data __attribute__((swift_name("data")));
@property int32_t end __attribute__((swift_name("end")));
@property int64_t offset __attribute__((swift_name("offset")));
@property BOOL readWrite __attribute__((swift_name("readWrite")));
@property int32_t start __attribute__((swift_name("start")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioTimeout.Companion")))
@interface SharedOkioTimeoutCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedOkioTimeoutCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedOkioTimeout *NONE __attribute__((swift_name("NONE")));
@end;

__attribute__((swift_name("Apollo_apiCustomTypeValue")))
@interface SharedApollo_apiCustomTypeValue<T> : SharedBase
- (instancetype)initWithValue:(T _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Used for backward compatibility with 2.x, use Adapter instead")));
@property (class, readonly, getter=companion) SharedApollo_apiCustomTypeValueCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiDeferredFragmentIdentifier")))
@interface SharedApollo_apiDeferredFragmentIdentifier : SharedBase
- (instancetype)initWithPath:(NSArray<id> *)path label:(NSString * _Nullable)label __attribute__((swift_name("init(path:label:)"))) __attribute__((objc_designated_initializer));
- (NSArray<id> *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedApollo_apiDeferredFragmentIdentifier *)doCopyPath:(NSArray<id> *)path label:(NSString * _Nullable)label __attribute__((swift_name("doCopy(path:label:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) NSArray<id> *path __attribute__((swift_name("path")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomTypeValueCompanion")))
@interface SharedApollo_apiCustomTypeValueCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedApollo_apiCustomTypeValueCompanion *shared __attribute__((swift_name("shared")));
- (SharedApollo_apiCustomTypeValue<id> *)fromRawValueValue:(id _Nullable)value __attribute__((swift_name("fromRawValue(value:)")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
