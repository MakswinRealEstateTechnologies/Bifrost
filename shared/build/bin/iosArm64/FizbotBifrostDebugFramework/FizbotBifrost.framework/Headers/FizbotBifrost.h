#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class FizbotBifrostFragmentCallingCode, FizbotBifrostCallingCode, FizbotBifrostApollo_apiApolloResponse<D>, FizbotBifrostBaseService, FizbotBifrostResponseType, FizbotBifrostKotlinEnumCompanion, FizbotBifrostKotlinEnum<E>, FizbotBifrostKotlinArray<T>, FizbotBifrostApollo_apiCompiledField, FizbotBifrostApollo_apiCustomScalarAdapters, FizbotBifrostCallingCodesQueryCompanion, FizbotBifrostCallingCodesQueryData1, FizbotBifrostCallingCodesQueryCalling_codes, FizbotBifrostCallingCodesQueryData, FizbotBifrostCallingCodesQuery_ResponseAdapter, FizbotBifrostCallingCodesQuery_ResponseAdapterCalling_codes, FizbotBifrostCallingCodesQuery_ResponseAdapterData, FizbotBifrostCallingCodesQuery_ResponseAdapterData1, FizbotBifrostCallingCode_Companion, FizbotBifrostApollo_apiObjectType, FizbotBifrostCallingCodePaginatorCompanion, FizbotBifrostQueryCompanion, FizbotBifrostCallingCodesQuerySelections, FizbotBifrostApollo_apiCompiledSelection, FizbotBifrostFragmentCallingCodeImpl_ResponseAdapter, FizbotBifrostFragmentCallingCodeImpl_ResponseAdapterFragmentCallingCode, FizbotBifrostfragmentCallingCodeSelections, FizbotBifrostApollo_apiApolloResponseBuilder<D>, FizbotBifrostApollo_apiError, FizbotBifrostUuidUuid, FizbotBifrostKotlinThrowable, FizbotBifrostKotlinException, FizbotBifrostApollo_apiExecutableVariables, FizbotBifrostApollo_apiCompiledFieldBuilder, FizbotBifrostApollo_apiCompiledArgument, FizbotBifrostApollo_apiCompiledCondition, FizbotBifrostApollo_apiCompiledType, FizbotBifrostApollo_apiJsonNumber, FizbotBifrostApollo_apiCustomScalarAdaptersKey, FizbotBifrostApollo_apiCustomScalarAdaptersBuilder, FizbotBifrostApollo_apiCustomScalarType, FizbotBifrostKotlinNothing, FizbotBifrostApollo_apiJsonReaderToken, FizbotBifrostApollo_apiCompiledNamedType, FizbotBifrostApollo_apiInterfaceType, FizbotBifrostApollo_apiErrorLocation, FizbotBifrostKotlinByteArray, FizbotBifrostKotlinByteIterator, FizbotBifrostOkioByteString, FizbotBifrostOkioBuffer, FizbotBifrostOkioTimeout, FizbotBifrostApollo_apiCustomTypeValue<T>, FizbotBifrostOkioByteStringCompanion, FizbotBifrostOkioBufferUnsafeCursor, FizbotBifrostOkioTimeoutCompanion, FizbotBifrostApollo_apiCustomTypeValueCompanion;

@protocol FizbotBifrostApollo_apiQueryData, FizbotBifrostKotlinComparable, FizbotBifrostApollo_apiAdapter, FizbotBifrostApollo_apiJsonWriter, FizbotBifrostApollo_apiExecutable, FizbotBifrostApollo_apiOperation, FizbotBifrostApollo_apiQuery, FizbotBifrostApollo_apiExecutableData, FizbotBifrostApollo_apiOperationData, FizbotBifrostApollo_apiJsonReader, FizbotBifrostApollo_apiFragmentData, FizbotBifrostApollo_apiExecutionContext, FizbotBifrostKotlinIterator, FizbotBifrostApollo_apiUpload, FizbotBifrostOkioCloseable, FizbotBifrostApollo_apiExecutionContextKey, FizbotBifrostApollo_apiExecutionContextElement, FizbotBifrostOkioBufferedSink, FizbotBifrostApollo_apiCustomTypeAdapter, FizbotBifrostOkioSource, FizbotBifrostOkioSink, FizbotBifrostOkioBufferedSource;

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
@interface FizbotBifrostBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface FizbotBifrostBase (FizbotBifrostBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface FizbotBifrostMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface FizbotBifrostMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorFizbotBifrostKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface FizbotBifrostNumber : NSNumber
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
@interface FizbotBifrostByte : FizbotBifrostNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface FizbotBifrostUByte : FizbotBifrostNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface FizbotBifrostShort : FizbotBifrostNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface FizbotBifrostUShort : FizbotBifrostNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface FizbotBifrostInt : FizbotBifrostNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface FizbotBifrostUInt : FizbotBifrostNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface FizbotBifrostLong : FizbotBifrostNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface FizbotBifrostULong : FizbotBifrostNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface FizbotBifrostFloat : FizbotBifrostNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface FizbotBifrostDouble : FizbotBifrostNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface FizbotBifrostBoolean : FizbotBifrostNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCode")))
@interface FizbotBifrostCallingCode : FizbotBifrostBase
- (instancetype)initWithData:(FizbotBifrostFragmentCallingCode * _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(int32_t)id countryCode:(NSString *)countryCode countryName:(NSString *)countryName flag:(NSString *)flag value:(NSString *)value __attribute__((swift_name("init(id:countryCode:countryName:flag:value:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (FizbotBifrostCallingCode *)doCopyId:(int32_t)id countryCode:(NSString *)countryCode countryName:(NSString *)countryName flag:(NSString *)flag value:(NSString *)value __attribute__((swift_name("doCopy(id:countryCode:countryName:flag:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *countryCode __attribute__((swift_name("countryCode")));
@property NSString *countryName __attribute__((swift_name("countryName")));
@property NSString *flag __attribute__((swift_name("flag")));
@property int32_t id __attribute__((swift_name("id")));
@property NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("BaseService")))
@interface FizbotBifrostBaseService : FizbotBifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)checkResponseResponse:(FizbotBifrostApollo_apiApolloResponse<id<FizbotBifrostApollo_apiQueryData>> *)response __attribute__((swift_name("checkResponse(response:)")));
@end;

__attribute__((swift_name("GraphQLNetwork")))
@interface FizbotBifrostGraphQLNetwork : FizbotBifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiscService")))
@interface FizbotBifrostMiscService : FizbotBifrostBaseService
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)getCallingCodesCompletion:(void (^)(FizbotBifrostResponseType *, NSArray<FizbotBifrostCallingCode *> *))completion __attribute__((swift_name("getCallingCodes(completion:)")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol FizbotBifrostKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface FizbotBifrostKotlinEnum<E> : FizbotBifrostBase <FizbotBifrostKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FizbotBifrostKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResponseType")))
@interface FizbotBifrostResponseType : FizbotBifrostKotlinEnum<FizbotBifrostResponseType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FizbotBifrostResponseType *success __attribute__((swift_name("success")));
@property (class, readonly) FizbotBifrostResponseType *error __attribute__((swift_name("error")));
+ (FizbotBifrostKotlinArray<FizbotBifrostResponseType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Apollo_apiExecutable")))
@protocol FizbotBifrostApollo_apiExecutable
@required
- (id<FizbotBifrostApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (FizbotBifrostApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<FizbotBifrostApollo_apiJsonWriter>)writer customScalarAdapters:(FizbotBifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:)")));
@end;

__attribute__((swift_name("Apollo_apiOperation")))
@protocol FizbotBifrostApollo_apiOperation <FizbotBifrostApollo_apiExecutable>
@required
- (NSString *)document __attribute__((swift_name("document()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name_ __attribute__((swift_name("name()")));
@end;

__attribute__((swift_name("Apollo_apiQuery")))
@protocol FizbotBifrostApollo_apiQuery <FizbotBifrostApollo_apiOperation>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery")))
@interface FizbotBifrostCallingCodesQuery : FizbotBifrostBase <FizbotBifrostApollo_apiQuery>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) FizbotBifrostCallingCodesQueryCompanion *companion __attribute__((swift_name("companion")));
- (id<FizbotBifrostApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (NSString *)document __attribute__((swift_name("document()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name_ __attribute__((swift_name("name()")));
- (FizbotBifrostApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<FizbotBifrostApollo_apiJsonWriter>)writer customScalarAdapters:(FizbotBifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery.Calling_codes")))
@interface FizbotBifrostCallingCodesQueryCalling_codes : FizbotBifrostBase
- (instancetype)initWithData:(NSArray<FizbotBifrostCallingCodesQueryData1 *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (NSArray<FizbotBifrostCallingCodesQueryData1 *> *)component1 __attribute__((swift_name("component1()")));
- (FizbotBifrostCallingCodesQueryCalling_codes *)doCopyData:(NSArray<FizbotBifrostCallingCodesQueryData1 *> *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<FizbotBifrostCallingCodesQueryData1 *> *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery.Companion")))
@interface FizbotBifrostCallingCodesQueryCompanion : FizbotBifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FizbotBifrostCallingCodesQueryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *OPERATION_DOCUMENT __attribute__((swift_name("OPERATION_DOCUMENT")));
@property (readonly) NSString *OPERATION_ID __attribute__((swift_name("OPERATION_ID")));
@property (readonly) NSString *OPERATION_NAME __attribute__((swift_name("OPERATION_NAME")));
@end;

__attribute__((swift_name("Apollo_apiExecutableData")))
@protocol FizbotBifrostApollo_apiExecutableData
@required
@end;

__attribute__((swift_name("Apollo_apiOperationData")))
@protocol FizbotBifrostApollo_apiOperationData <FizbotBifrostApollo_apiExecutableData>
@required
@end;

__attribute__((swift_name("Apollo_apiQueryData")))
@protocol FizbotBifrostApollo_apiQueryData <FizbotBifrostApollo_apiOperationData>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery.Data")))
@interface FizbotBifrostCallingCodesQueryData : FizbotBifrostBase <FizbotBifrostApollo_apiQueryData>
- (instancetype)initWithCalling_codes:(FizbotBifrostCallingCodesQueryCalling_codes * _Nullable)calling_codes __attribute__((swift_name("init(calling_codes:)"))) __attribute__((objc_designated_initializer));
- (FizbotBifrostCallingCodesQueryCalling_codes * _Nullable)component1 __attribute__((swift_name("component1()")));
- (FizbotBifrostCallingCodesQueryData *)doCopyCalling_codes:(FizbotBifrostCallingCodesQueryCalling_codes * _Nullable)calling_codes __attribute__((swift_name("doCopy(calling_codes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FizbotBifrostCallingCodesQueryCalling_codes * _Nullable calling_codes __attribute__((swift_name("calling_codes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery.Data1")))
@interface FizbotBifrostCallingCodesQueryData1 : FizbotBifrostBase
- (instancetype)initWith__typename:(NSString *)__typename fragmentCallingCode:(FizbotBifrostFragmentCallingCode *)fragmentCallingCode __attribute__((swift_name("init(__typename:fragmentCallingCode:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (FizbotBifrostFragmentCallingCode *)component2 __attribute__((swift_name("component2()")));
- (FizbotBifrostCallingCodesQueryData1 *)doCopy__typename:(NSString *)__typename fragmentCallingCode:(FizbotBifrostFragmentCallingCode *)fragmentCallingCode __attribute__((swift_name("doCopy(__typename:fragmentCallingCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) FizbotBifrostFragmentCallingCode *fragmentCallingCode __attribute__((swift_name("fragmentCallingCode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery_ResponseAdapter")))
@interface FizbotBifrostCallingCodesQuery_ResponseAdapter : FizbotBifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)callingCodesQuery_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FizbotBifrostCallingCodesQuery_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Apollo_apiAdapter")))
@protocol FizbotBifrostApollo_apiAdapter
@required

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id _Nullable)fromJsonReader:(id<FizbotBifrostApollo_apiJsonReader>)reader customScalarAdapters:(FizbotBifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<FizbotBifrostApollo_apiJsonWriter>)writer customScalarAdapters:(FizbotBifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(id _Nullable)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery_ResponseAdapter.Calling_codes")))
@interface FizbotBifrostCallingCodesQuery_ResponseAdapterCalling_codes : FizbotBifrostBase <FizbotBifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)calling_codes __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FizbotBifrostCallingCodesQuery_ResponseAdapterCalling_codes *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (FizbotBifrostCallingCodesQueryCalling_codes * _Nullable)fromJsonReader:(id<FizbotBifrostApollo_apiJsonReader>)reader customScalarAdapters:(FizbotBifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<FizbotBifrostApollo_apiJsonWriter>)writer customScalarAdapters:(FizbotBifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(FizbotBifrostCallingCodesQueryCalling_codes *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery_ResponseAdapter.Data")))
@interface FizbotBifrostCallingCodesQuery_ResponseAdapterData : FizbotBifrostBase <FizbotBifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FizbotBifrostCallingCodesQuery_ResponseAdapterData *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (FizbotBifrostCallingCodesQueryData * _Nullable)fromJsonReader:(id<FizbotBifrostApollo_apiJsonReader>)reader customScalarAdapters:(FizbotBifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<FizbotBifrostApollo_apiJsonWriter>)writer customScalarAdapters:(FizbotBifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(FizbotBifrostCallingCodesQueryData *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery_ResponseAdapter.Data1")))
@interface FizbotBifrostCallingCodesQuery_ResponseAdapterData1 : FizbotBifrostBase <FizbotBifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data1 __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FizbotBifrostCallingCodesQuery_ResponseAdapterData1 *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (FizbotBifrostCallingCodesQueryData1 * _Nullable)fromJsonReader:(id<FizbotBifrostApollo_apiJsonReader>)reader customScalarAdapters:(FizbotBifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<FizbotBifrostApollo_apiJsonWriter>)writer customScalarAdapters:(FizbotBifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(FizbotBifrostCallingCodesQueryData1 *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCode_")))
@interface FizbotBifrostCallingCode_ : FizbotBifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) FizbotBifrostCallingCode_Companion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCode_.Companion")))
@interface FizbotBifrostCallingCode_Companion : FizbotBifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FizbotBifrostCallingCode_Companion *shared __attribute__((swift_name("shared")));
@property (readonly) FizbotBifrostApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodePaginator")))
@interface FizbotBifrostCallingCodePaginator : FizbotBifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) FizbotBifrostCallingCodePaginatorCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodePaginator.Companion")))
@interface FizbotBifrostCallingCodePaginatorCompanion : FizbotBifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FizbotBifrostCallingCodePaginatorCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) FizbotBifrostApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Query")))
@interface FizbotBifrostQuery : FizbotBifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) FizbotBifrostQueryCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Query.Companion")))
@interface FizbotBifrostQueryCompanion : FizbotBifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FizbotBifrostQueryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) FizbotBifrostApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuerySelections")))
@interface FizbotBifrostCallingCodesQuerySelections : FizbotBifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)callingCodesQuerySelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FizbotBifrostCallingCodesQuerySelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<FizbotBifrostApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((swift_name("Apollo_apiFragmentData")))
@protocol FizbotBifrostApollo_apiFragmentData <FizbotBifrostApollo_apiExecutableData>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentCallingCode")))
@interface FizbotBifrostFragmentCallingCode : FizbotBifrostBase <FizbotBifrostApollo_apiFragmentData>
- (instancetype)initWithId:(NSString *)id value:(NSString * _Nullable)value description:(NSString * _Nullable)description key:(NSString * _Nullable)key flag:(NSString * _Nullable)flag __attribute__((swift_name("init(id:value:description:key:flag:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (FizbotBifrostFragmentCallingCode *)doCopyId:(NSString *)id value:(NSString * _Nullable)value description:(NSString * _Nullable)description key:(NSString * _Nullable)key flag:(NSString * _Nullable)flag __attribute__((swift_name("doCopy(id:value:description:key:flag:)")));
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
@interface FizbotBifrostFragmentCallingCodeImpl_ResponseAdapter : FizbotBifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentCallingCodeImpl_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FizbotBifrostFragmentCallingCodeImpl_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentCallingCodeImpl_ResponseAdapter.FragmentCallingCode")))
@interface FizbotBifrostFragmentCallingCodeImpl_ResponseAdapterFragmentCallingCode : FizbotBifrostBase <FizbotBifrostApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentCallingCode __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FizbotBifrostFragmentCallingCodeImpl_ResponseAdapterFragmentCallingCode *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (FizbotBifrostFragmentCallingCode * _Nullable)fromJsonReader:(id<FizbotBifrostApollo_apiJsonReader>)reader customScalarAdapters:(FizbotBifrostApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<FizbotBifrostApollo_apiJsonWriter>)writer customScalarAdapters:(FizbotBifrostApollo_apiCustomScalarAdapters *)customScalarAdapters value:(FizbotBifrostFragmentCallingCode *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("fragmentCallingCodeSelections")))
@interface FizbotBifrostfragmentCallingCodeSelections : FizbotBifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentCallingCodeSelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FizbotBifrostfragmentCallingCodeSelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<FizbotBifrostApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiApolloResponse")))
@interface FizbotBifrostApollo_apiApolloResponse<D> : FizbotBifrostBase
- (BOOL)hasErrors __attribute__((swift_name("hasErrors()")));
- (FizbotBifrostApollo_apiApolloResponseBuilder<D> *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
@property (readonly) D _Nullable data __attribute__((swift_name("data")));
@property (readonly) D dataAssertNoErrors __attribute__((swift_name("dataAssertNoErrors")));
@property (readonly) NSArray<FizbotBifrostApollo_apiError *> * _Nullable errors __attribute__((swift_name("errors")));
@property (readonly) id<FizbotBifrostApollo_apiExecutionContext> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) NSDictionary<NSString *, id> *extensions __attribute__((swift_name("extensions")));
@property (readonly) id<FizbotBifrostApollo_apiOperation> operation __attribute__((swift_name("operation")));
@property (readonly) FizbotBifrostUuidUuid *requestUuid __attribute__((swift_name("requestUuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface FizbotBifrostKotlinEnumCompanion : FizbotBifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FizbotBifrostKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface FizbotBifrostKotlinArray<T> : FizbotBifrostBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(FizbotBifrostInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<FizbotBifrostKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface FizbotBifrostKotlinThrowable : FizbotBifrostBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(FizbotBifrostKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FizbotBifrostKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (FizbotBifrostKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FizbotBifrostKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface FizbotBifrostKotlinException : FizbotBifrostKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FizbotBifrostKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(FizbotBifrostKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("OkioIOException")))
@interface FizbotBifrostOkioIOException : FizbotBifrostKotlinException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FizbotBifrostKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithCause:(FizbotBifrostKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("Apollo_apiCompiledSelection")))
@interface FizbotBifrostApollo_apiCompiledSelection : FizbotBifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCompiledField")))
@interface FizbotBifrostApollo_apiCompiledField : FizbotBifrostApollo_apiCompiledSelection
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)nameWithArgumentsVariables:(FizbotBifrostApollo_apiExecutableVariables *)variables __attribute__((swift_name("nameWithArguments(variables:)")));
- (FizbotBifrostApollo_apiCompiledFieldBuilder *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
- (id _Nullable)resolveArgumentName:(NSString *)name variables:(FizbotBifrostApollo_apiExecutableVariables *)variables __attribute__((swift_name("resolveArgument(name:variables:)")));
@property (readonly) NSString * _Nullable alias __attribute__((swift_name("alias")));
@property (readonly) NSArray<FizbotBifrostApollo_apiCompiledArgument *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) NSArray<FizbotBifrostApollo_apiCompiledCondition *> *condition __attribute__((swift_name("condition")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *responseName __attribute__((swift_name("responseName")));
@property (readonly) NSArray<FizbotBifrostApollo_apiCompiledSelection *> *selections __attribute__((swift_name("selections")));
@property (readonly) FizbotBifrostApollo_apiCompiledType *type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("OkioCloseable")))
@protocol FizbotBifrostOkioCloseable
@required

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)closeAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Apollo_apiJsonWriter")))
@protocol FizbotBifrostApollo_apiJsonWriter <FizbotBifrostOkioCloseable>
@required

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<FizbotBifrostApollo_apiJsonWriter> _Nullable)beginArrayAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("beginArray()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<FizbotBifrostApollo_apiJsonWriter> _Nullable)beginObjectAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("beginObject()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<FizbotBifrostApollo_apiJsonWriter> _Nullable)endArrayAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("endArray()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<FizbotBifrostApollo_apiJsonWriter> _Nullable)endObjectAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("endObject()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)flushAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("flush()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<FizbotBifrostApollo_apiJsonWriter> _Nullable)nameName:(NSString *)name error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("name(name:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<FizbotBifrostApollo_apiJsonWriter> _Nullable)nullValueAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nullValue()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<FizbotBifrostApollo_apiJsonWriter> _Nullable)valueValue:(id<FizbotBifrostApollo_apiUpload>)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<FizbotBifrostApollo_apiJsonWriter> _Nullable)valueValue:(FizbotBifrostApollo_apiJsonNumber *)value error_:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value_:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<FizbotBifrostApollo_apiJsonWriter> _Nullable)valueValue:(BOOL)value error__:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value__:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<FizbotBifrostApollo_apiJsonWriter> _Nullable)valueValue:(double)value error___:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value___:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<FizbotBifrostApollo_apiJsonWriter> _Nullable)valueValue:(int32_t)value error____:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value____:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<FizbotBifrostApollo_apiJsonWriter> _Nullable)valueValue:(int64_t)value error_____:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value_____:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<FizbotBifrostApollo_apiJsonWriter> _Nullable)valueValue:(NSString *)value error______:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value______:)")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@end;

__attribute__((swift_name("Apollo_apiExecutionContext")))
@protocol FizbotBifrostApollo_apiExecutionContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<FizbotBifrostApollo_apiExecutionContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<FizbotBifrostApollo_apiExecutionContextElement> _Nullable)getKey:(id<FizbotBifrostApollo_apiExecutionContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<FizbotBifrostApollo_apiExecutionContext>)minusKeyKey:(id<FizbotBifrostApollo_apiExecutionContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<FizbotBifrostApollo_apiExecutionContext>)plusContext:(id<FizbotBifrostApollo_apiExecutionContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("Apollo_apiExecutionContextElement")))
@protocol FizbotBifrostApollo_apiExecutionContextElement <FizbotBifrostApollo_apiExecutionContext>
@required
@property (readonly) id<FizbotBifrostApollo_apiExecutionContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomScalarAdapters")))
@interface FizbotBifrostApollo_apiCustomScalarAdapters : FizbotBifrostBase <FizbotBifrostApollo_apiExecutionContextElement>
@property (class, readonly, getter=companion) FizbotBifrostApollo_apiCustomScalarAdaptersKey *companion __attribute__((swift_name("companion")));
- (FizbotBifrostApollo_apiCustomScalarAdaptersBuilder *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
- (id<FizbotBifrostApollo_apiAdapter>)responseAdapterForCustomScalar:(FizbotBifrostApollo_apiCustomScalarType *)customScalar __attribute__((swift_name("responseAdapterFor(customScalar:)")));
@property (readonly) id<FizbotBifrostApollo_apiExecutionContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Apollo_apiJsonReader")))
@protocol FizbotBifrostApollo_apiJsonReader <FizbotBifrostOkioCloseable>
@required

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<FizbotBifrostApollo_apiJsonReader> _Nullable)beginArrayAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("beginArray()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<FizbotBifrostApollo_apiJsonReader> _Nullable)beginObjectAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("beginObject()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<FizbotBifrostApollo_apiJsonReader> _Nullable)endArrayAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("endArray()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<FizbotBifrostApollo_apiJsonReader> _Nullable)endObjectAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("endObject()")));

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
- (FizbotBifrostKotlinNothing * _Nullable)nextNullAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextNull()"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (FizbotBifrostApollo_apiJsonNumber * _Nullable)nextNumberAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextNumber()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (NSString * _Nullable)nextStringAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextString()"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (FizbotBifrostApollo_apiJsonReaderToken * _Nullable)peekAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("peek()")));
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

__attribute__((swift_name("Apollo_apiCompiledType")))
@interface FizbotBifrostApollo_apiCompiledType : FizbotBifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (FizbotBifrostApollo_apiCompiledNamedType *)leafType __attribute__((swift_name("leafType()")));
@end;

__attribute__((swift_name("Apollo_apiCompiledNamedType")))
@interface FizbotBifrostApollo_apiCompiledNamedType : FizbotBifrostApollo_apiCompiledType
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (FizbotBifrostApollo_apiCompiledNamedType *)leafType __attribute__((swift_name("leafType()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiObjectType")))
@interface FizbotBifrostApollo_apiObjectType : FizbotBifrostApollo_apiCompiledNamedType
- (instancetype)initWithName:(NSString *)name keyFields:(NSArray<NSString *> *)keyFields implements:(NSArray<FizbotBifrostApollo_apiInterfaceType *> *)implements __attribute__((swift_name("init(name:keyFields:implements:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSArray<FizbotBifrostApollo_apiInterfaceType *> *implements __attribute__((swift_name("implements")));
@property (readonly) NSArray<NSString *> *keyFields __attribute__((swift_name("keyFields")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiApolloResponseBuilder")))
@interface FizbotBifrostApollo_apiApolloResponseBuilder<D> : FizbotBifrostBase
- (instancetype)initWithOperation:(id<FizbotBifrostApollo_apiOperation>)operation requestUuid:(FizbotBifrostUuidUuid *)requestUuid data:(D _Nullable)data __attribute__((swift_name("init(operation:requestUuid:data:)"))) __attribute__((objc_designated_initializer));
- (FizbotBifrostApollo_apiApolloResponseBuilder<D> *)addExecutionContextExecutionContext:(id<FizbotBifrostApollo_apiExecutionContext>)executionContext __attribute__((swift_name("addExecutionContext(executionContext:)")));
- (FizbotBifrostApollo_apiApolloResponse<D> *)build __attribute__((swift_name("build()")));
- (FizbotBifrostApollo_apiApolloResponseBuilder<D> *)errorsErrors:(NSArray<FizbotBifrostApollo_apiError *> * _Nullable)errors __attribute__((swift_name("errors(errors:)")));
- (FizbotBifrostApollo_apiApolloResponseBuilder<D> *)extensionsExtensions:(NSDictionary<NSString *, id> * _Nullable)extensions __attribute__((swift_name("extensions(extensions:)")));
- (FizbotBifrostApollo_apiApolloResponseBuilder<D> *)requestUuidRequestUuid:(FizbotBifrostUuidUuid *)requestUuid __attribute__((swift_name("requestUuid(requestUuid:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiError")))
@interface FizbotBifrostApollo_apiError : FizbotBifrostBase
- (instancetype)initWithMessage:(NSString *)message locations:(NSArray<FizbotBifrostApollo_apiErrorLocation *> * _Nullable)locations path:(NSArray<id> * _Nullable)path extensions:(NSDictionary<NSString *, id> * _Nullable)extensions nonStandardFields:(NSDictionary<NSString *, id> * _Nullable)nonStandardFields __attribute__((swift_name("init(message:locations:path:extensions:nonStandardFields:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, id> *customAttributes __attribute__((swift_name("customAttributes"))) __attribute__((unavailable("Used for backward compatibility with 2.x")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable extensions __attribute__((swift_name("extensions")));
@property (readonly) NSArray<FizbotBifrostApollo_apiErrorLocation *> * _Nullable locations __attribute__((swift_name("locations")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable nonStandardFields __attribute__((swift_name("nonStandardFields")));
@property (readonly) NSArray<id> * _Nullable path __attribute__((swift_name("path")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UuidUuid")))
@interface FizbotBifrostUuidUuid : FizbotBifrostBase <FizbotBifrostKotlinComparable>
- (instancetype)initWithMsb:(int64_t)msb lsb:(int64_t)lsb __attribute__((swift_name("init(msb:lsb:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithUuidBytes:(FizbotBifrostKotlinByteArray *)uuidBytes __attribute__((swift_name("init(uuidBytes:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use `uuidOf` instead.")));
- (int32_t)compareToOther:(FizbotBifrostUuidUuid *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t leastSignificantBits __attribute__((swift_name("leastSignificantBits")));
@property (readonly) int64_t mostSignificantBits __attribute__((swift_name("mostSignificantBits")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol FizbotBifrostKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext_()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiExecutableVariables")))
@interface FizbotBifrostApollo_apiExecutableVariables : FizbotBifrostBase
- (instancetype)initWithValueMap:(NSDictionary<NSString *, id> *)valueMap __attribute__((swift_name("init(valueMap:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSDictionary<NSString *, id> *valueMap __attribute__((swift_name("valueMap")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCompiledField.Builder")))
@interface FizbotBifrostApollo_apiCompiledFieldBuilder : FizbotBifrostBase
- (instancetype)initWithCompiledField:(FizbotBifrostApollo_apiCompiledField *)compiledField __attribute__((swift_name("init(compiledField:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name type:(FizbotBifrostApollo_apiCompiledType *)type __attribute__((swift_name("init(name:type:)"))) __attribute__((objc_designated_initializer));
- (FizbotBifrostApollo_apiCompiledFieldBuilder *)aliasAlias:(NSString * _Nullable)alias __attribute__((swift_name("alias(alias:)")));
- (FizbotBifrostApollo_apiCompiledFieldBuilder *)argumentsArguments:(NSArray<FizbotBifrostApollo_apiCompiledArgument *> *)arguments __attribute__((swift_name("arguments(arguments:)")));
- (FizbotBifrostApollo_apiCompiledField *)build __attribute__((swift_name("build()")));
- (FizbotBifrostApollo_apiCompiledFieldBuilder *)conditionCondition:(NSArray<FizbotBifrostApollo_apiCompiledCondition *> *)condition __attribute__((swift_name("condition(condition:)")));
- (FizbotBifrostApollo_apiCompiledFieldBuilder *)selectionsSelections:(NSArray<FizbotBifrostApollo_apiCompiledSelection *> *)selections __attribute__((swift_name("selections(selections:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) FizbotBifrostApollo_apiCompiledType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCompiledArgument")))
@interface FizbotBifrostApollo_apiCompiledArgument : FizbotBifrostBase
- (instancetype)initWithName:(NSString *)name value:(id _Nullable)value isKey:(BOOL)isKey __attribute__((swift_name("init(name:value:isKey:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BOOL isKey __attribute__((swift_name("isKey")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCompiledCondition")))
@interface FizbotBifrostApollo_apiCompiledCondition : FizbotBifrostBase
- (instancetype)initWithName:(NSString *)name inverted:(BOOL)inverted __attribute__((swift_name("init(name:inverted:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (FizbotBifrostApollo_apiCompiledCondition *)doCopyName:(NSString *)name inverted:(BOOL)inverted __attribute__((swift_name("doCopy(name:inverted:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL inverted __attribute__((swift_name("inverted")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Apollo_apiUpload")))
@protocol FizbotBifrostApollo_apiUpload
@required
- (void)writeToSink:(id<FizbotBifrostOkioBufferedSink>)sink __attribute__((swift_name("writeTo(sink:)")));
@property (readonly) int64_t contentLength __attribute__((swift_name("contentLength")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@property (readonly) NSString * _Nullable fileName __attribute__((swift_name("fileName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiJsonNumber")))
@interface FizbotBifrostApollo_apiJsonNumber : FizbotBifrostBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Apollo_apiExecutionContextKey")))
@protocol FizbotBifrostApollo_apiExecutionContextKey
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomScalarAdapters.Key")))
@interface FizbotBifrostApollo_apiCustomScalarAdaptersKey : FizbotBifrostBase <FizbotBifrostApollo_apiExecutionContextKey>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FizbotBifrostApollo_apiCustomScalarAdaptersKey *shared __attribute__((swift_name("shared")));
@property (readonly) FizbotBifrostApollo_apiCustomScalarAdapters *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomScalarAdapters.Builder")))
@interface FizbotBifrostApollo_apiCustomScalarAdaptersBuilder : FizbotBifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (FizbotBifrostApollo_apiCustomScalarAdaptersBuilder *)addCustomScalarType:(FizbotBifrostApollo_apiCustomScalarType *)customScalarType customScalarAdapter:(id<FizbotBifrostApollo_apiAdapter>)customScalarAdapter __attribute__((swift_name("add(customScalarType:customScalarAdapter:)")));
- (FizbotBifrostApollo_apiCustomScalarAdaptersBuilder *)addCustomScalarType:(FizbotBifrostApollo_apiCustomScalarType *)customScalarType customTypeAdapter:(id<FizbotBifrostApollo_apiCustomTypeAdapter>)customTypeAdapter __attribute__((swift_name("add(customScalarType:customTypeAdapter:)"))) __attribute__((deprecated("Used for backward compatibility with 2.x")));
- (FizbotBifrostApollo_apiCustomScalarAdaptersBuilder *)addAllCustomScalarAdapters:(FizbotBifrostApollo_apiCustomScalarAdapters *)customScalarAdapters __attribute__((swift_name("addAll(customScalarAdapters:)")));
- (FizbotBifrostApollo_apiCustomScalarAdapters *)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomScalarType")))
@interface FizbotBifrostApollo_apiCustomScalarType : FizbotBifrostApollo_apiCompiledNamedType
- (instancetype)initWithName:(NSString *)name className:(NSString *)className __attribute__((swift_name("init(name:className:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *className __attribute__((swift_name("className")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface FizbotBifrostKotlinNothing : FizbotBifrostBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiJsonReaderToken")))
@interface FizbotBifrostApollo_apiJsonReaderToken : FizbotBifrostKotlinEnum<FizbotBifrostApollo_apiJsonReaderToken *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FizbotBifrostApollo_apiJsonReaderToken *beginArray __attribute__((swift_name("beginArray")));
@property (class, readonly) FizbotBifrostApollo_apiJsonReaderToken *endArray __attribute__((swift_name("endArray")));
@property (class, readonly) FizbotBifrostApollo_apiJsonReaderToken *beginObject __attribute__((swift_name("beginObject")));
@property (class, readonly) FizbotBifrostApollo_apiJsonReaderToken *endObject __attribute__((swift_name("endObject")));
@property (class, readonly) FizbotBifrostApollo_apiJsonReaderToken *name __attribute__((swift_name("name")));
@property (class, readonly) FizbotBifrostApollo_apiJsonReaderToken *string __attribute__((swift_name("string")));
@property (class, readonly) FizbotBifrostApollo_apiJsonReaderToken *number __attribute__((swift_name("number")));
@property (class, readonly) FizbotBifrostApollo_apiJsonReaderToken *long_ __attribute__((swift_name("long_")));
@property (class, readonly) FizbotBifrostApollo_apiJsonReaderToken *boolean __attribute__((swift_name("boolean")));
@property (class, readonly) FizbotBifrostApollo_apiJsonReaderToken *null __attribute__((swift_name("null")));
@property (class, readonly) FizbotBifrostApollo_apiJsonReaderToken *endDocument __attribute__((swift_name("endDocument")));
+ (FizbotBifrostKotlinArray<FizbotBifrostApollo_apiJsonReaderToken *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiInterfaceType")))
@interface FizbotBifrostApollo_apiInterfaceType : FizbotBifrostApollo_apiCompiledNamedType
- (instancetype)initWithName:(NSString *)name keyFields:(NSArray<NSString *> *)keyFields implements:(NSArray<FizbotBifrostApollo_apiInterfaceType *> *)implements __attribute__((swift_name("init(name:keyFields:implements:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSArray<FizbotBifrostApollo_apiInterfaceType *> *implements __attribute__((swift_name("implements")));
@property (readonly) NSArray<NSString *> *keyFields __attribute__((swift_name("keyFields")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiError.Location")))
@interface FizbotBifrostApollo_apiErrorLocation : FizbotBifrostBase
- (instancetype)initWithLine:(int32_t)line column:(int32_t)column __attribute__((swift_name("init(line:column:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t column __attribute__((swift_name("column")));
@property (readonly) int32_t line __attribute__((swift_name("line")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface FizbotBifrostKotlinByteArray : FizbotBifrostBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(FizbotBifrostByte *(^)(FizbotBifrostInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (FizbotBifrostKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("OkioSink")))
@protocol FizbotBifrostOkioSink <FizbotBifrostOkioCloseable>
@required

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)flushAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("flush()")));
- (FizbotBifrostOkioTimeout *)timeout __attribute__((swift_name("timeout()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)writeSource:(FizbotBifrostOkioBuffer *)source byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("write(source:byteCount_:)")));
@end;

__attribute__((swift_name("OkioBufferedSink")))
@protocol FizbotBifrostOkioBufferedSink <FizbotBifrostOkioSink>
@required
- (id<FizbotBifrostOkioBufferedSink>)emit __attribute__((swift_name("emit()")));
- (id<FizbotBifrostOkioBufferedSink>)emitCompleteSegments __attribute__((swift_name("emitCompleteSegments()")));
- (id<FizbotBifrostOkioBufferedSink>)writeSource:(FizbotBifrostKotlinByteArray *)source __attribute__((swift_name("write(source:)")));
- (id<FizbotBifrostOkioBufferedSink>)writeSource:(FizbotBifrostKotlinByteArray *)source offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(source:offset:byteCount:)")));
- (id<FizbotBifrostOkioBufferedSink>)writeByteString:(FizbotBifrostOkioByteString *)byteString __attribute__((swift_name("write(byteString:)")));
- (id<FizbotBifrostOkioBufferedSink>)writeByteString:(FizbotBifrostOkioByteString *)byteString offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(byteString:offset:byteCount:)")));
- (id<FizbotBifrostOkioBufferedSink>)writeSource:(id<FizbotBifrostOkioSource>)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (int64_t)writeAllSource:(id<FizbotBifrostOkioSource>)source __attribute__((swift_name("writeAll(source:)")));
- (id<FizbotBifrostOkioBufferedSink>)writeByteB:(int32_t)b __attribute__((swift_name("writeByte(b:)")));
- (id<FizbotBifrostOkioBufferedSink>)writeDecimalLongV:(int64_t)v __attribute__((swift_name("writeDecimalLong(v:)")));
- (id<FizbotBifrostOkioBufferedSink>)writeHexadecimalUnsignedLongV:(int64_t)v __attribute__((swift_name("writeHexadecimalUnsignedLong(v:)")));
- (id<FizbotBifrostOkioBufferedSink>)writeIntI:(int32_t)i __attribute__((swift_name("writeInt(i:)")));
- (id<FizbotBifrostOkioBufferedSink>)writeIntLeI:(int32_t)i __attribute__((swift_name("writeIntLe(i:)")));
- (id<FizbotBifrostOkioBufferedSink>)writeLongV:(int64_t)v __attribute__((swift_name("writeLong(v:)")));
- (id<FizbotBifrostOkioBufferedSink>)writeLongLeV:(int64_t)v __attribute__((swift_name("writeLongLe(v:)")));
- (id<FizbotBifrostOkioBufferedSink>)writeShortS:(int32_t)s __attribute__((swift_name("writeShort(s:)")));
- (id<FizbotBifrostOkioBufferedSink>)writeShortLeS:(int32_t)s __attribute__((swift_name("writeShortLe(s:)")));
- (id<FizbotBifrostOkioBufferedSink>)writeUtf8String:(NSString *)string __attribute__((swift_name("writeUtf8(string:)")));
- (id<FizbotBifrostOkioBufferedSink>)writeUtf8String:(NSString *)string beginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("writeUtf8(string:beginIndex:endIndex:)")));
- (id<FizbotBifrostOkioBufferedSink>)writeUtf8CodePointCodePoint:(int32_t)codePoint __attribute__((swift_name("writeUtf8CodePoint(codePoint:)")));
@property (readonly) FizbotBifrostOkioBuffer *buffer __attribute__((swift_name("buffer")));
@end;

__attribute__((swift_name("Apollo_apiCustomTypeAdapter")))
@protocol FizbotBifrostApollo_apiCustomTypeAdapter
@required
- (id _Nullable)decodeValue:(FizbotBifrostApollo_apiCustomTypeValue<id> *)value __attribute__((swift_name("decode(value:)")));
- (FizbotBifrostApollo_apiCustomTypeValue<id> *)encodeValue:(id _Nullable)value __attribute__((swift_name("encode(value:)")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface FizbotBifrostKotlinByteIterator : FizbotBifrostBase <FizbotBifrostKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (FizbotBifrostByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("OkioByteString")))
@interface FizbotBifrostOkioByteString : FizbotBifrostBase <FizbotBifrostKotlinComparable>
@property (class, readonly, getter=companion) FizbotBifrostOkioByteStringCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)base64 __attribute__((swift_name("base64()")));
- (NSString *)base64Url __attribute__((swift_name("base64Url()")));
- (int32_t)compareToOther:(FizbotBifrostOkioByteString *)other __attribute__((swift_name("compareTo(other:)")));
- (void)doCopyIntoOffset:(int32_t)offset target:(FizbotBifrostKotlinByteArray *)target targetOffset:(int32_t)targetOffset byteCount:(int32_t)byteCount __attribute__((swift_name("doCopyInto(offset:target:targetOffset:byteCount:)")));
- (BOOL)endsWithSuffix:(FizbotBifrostKotlinByteArray *)suffix __attribute__((swift_name("endsWith(suffix:)")));
- (BOOL)endsWithSuffix_:(FizbotBifrostOkioByteString *)suffix __attribute__((swift_name("endsWith(suffix_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)hex __attribute__((swift_name("hex()")));
- (FizbotBifrostOkioByteString *)hmacSha1Key:(FizbotBifrostOkioByteString *)key __attribute__((swift_name("hmacSha1(key:)")));
- (FizbotBifrostOkioByteString *)hmacSha256Key:(FizbotBifrostOkioByteString *)key __attribute__((swift_name("hmacSha256(key:)")));
- (FizbotBifrostOkioByteString *)hmacSha512Key:(FizbotBifrostOkioByteString *)key __attribute__((swift_name("hmacSha512(key:)")));
- (int32_t)indexOfOther:(FizbotBifrostKotlinByteArray *)other fromIndex:(int32_t)fromIndex __attribute__((swift_name("indexOf(other:fromIndex:)")));
- (int32_t)indexOfOther:(FizbotBifrostOkioByteString *)other fromIndex_:(int32_t)fromIndex __attribute__((swift_name("indexOf(other:fromIndex_:)")));
- (int32_t)lastIndexOfOther:(FizbotBifrostKotlinByteArray *)other fromIndex:(int32_t)fromIndex __attribute__((swift_name("lastIndexOf(other:fromIndex:)")));
- (int32_t)lastIndexOfOther:(FizbotBifrostOkioByteString *)other fromIndex_:(int32_t)fromIndex __attribute__((swift_name("lastIndexOf(other:fromIndex_:)")));
- (FizbotBifrostOkioByteString *)md5 __attribute__((swift_name("md5()")));
- (BOOL)rangeEqualsOffset:(int32_t)offset other:(FizbotBifrostKotlinByteArray *)other otherOffset:(int32_t)otherOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:other:otherOffset:byteCount:)")));
- (BOOL)rangeEqualsOffset:(int32_t)offset other:(FizbotBifrostOkioByteString *)other otherOffset:(int32_t)otherOffset byteCount_:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:other:otherOffset:byteCount_:)")));
- (FizbotBifrostOkioByteString *)sha1 __attribute__((swift_name("sha1()")));
- (FizbotBifrostOkioByteString *)sha256 __attribute__((swift_name("sha256()")));
- (FizbotBifrostOkioByteString *)sha512 __attribute__((swift_name("sha512()")));
- (BOOL)startsWithPrefix:(FizbotBifrostKotlinByteArray *)prefix __attribute__((swift_name("startsWith(prefix:)")));
- (BOOL)startsWithPrefix_:(FizbotBifrostOkioByteString *)prefix __attribute__((swift_name("startsWith(prefix_:)")));
- (FizbotBifrostOkioByteString *)substringBeginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("substring(beginIndex:endIndex:)")));
- (FizbotBifrostOkioByteString *)toAsciiLowercase __attribute__((swift_name("toAsciiLowercase()")));
- (FizbotBifrostOkioByteString *)toAsciiUppercase __attribute__((swift_name("toAsciiUppercase()")));
- (FizbotBifrostKotlinByteArray *)toByteArray __attribute__((swift_name("toByteArray()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)utf8 __attribute__((swift_name("utf8()")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("OkioSource")))
@protocol FizbotBifrostOkioSource <FizbotBifrostOkioCloseable>
@required

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (int64_t)readSink:(FizbotBifrostOkioBuffer *)sink byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("read(sink:byteCount:)"))) __attribute__((swift_error(nonnull_error)));
- (FizbotBifrostOkioTimeout *)timeout __attribute__((swift_name("timeout()")));
@end;

__attribute__((swift_name("OkioBufferedSource")))
@protocol FizbotBifrostOkioBufferedSource <FizbotBifrostOkioSource>
@required
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (int64_t)indexOfB:(int8_t)b __attribute__((swift_name("indexOf(b:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(b:fromIndex:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex toIndex:(int64_t)toIndex __attribute__((swift_name("indexOf(b:fromIndex:toIndex:)")));
- (int64_t)indexOfBytes:(FizbotBifrostOkioByteString *)bytes __attribute__((swift_name("indexOf(bytes:)")));
- (int64_t)indexOfBytes:(FizbotBifrostOkioByteString *)bytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(bytes:fromIndex:)")));
- (int64_t)indexOfElementTargetBytes:(FizbotBifrostOkioByteString *)targetBytes __attribute__((swift_name("indexOfElement(targetBytes:)")));
- (int64_t)indexOfElementTargetBytes:(FizbotBifrostOkioByteString *)targetBytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOfElement(targetBytes:fromIndex:)")));
- (id<FizbotBifrostOkioBufferedSource>)peek __attribute__((swift_name("peek_()")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(FizbotBifrostOkioByteString *)bytes __attribute__((swift_name("rangeEquals(offset:bytes:)")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(FizbotBifrostOkioByteString *)bytes bytesOffset:(int32_t)bytesOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:bytes:bytesOffset:byteCount:)")));
- (int32_t)readSink:(FizbotBifrostKotlinByteArray *)sink __attribute__((swift_name("read(sink:)")));
- (int32_t)readSink:(FizbotBifrostKotlinByteArray *)sink offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("read(sink:offset:byteCount:)")));
- (int64_t)readAllSink:(id<FizbotBifrostOkioSink>)sink __attribute__((swift_name("readAll(sink:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (FizbotBifrostKotlinByteArray *)readByteArray __attribute__((swift_name("readByteArray()")));
- (FizbotBifrostKotlinByteArray *)readByteArrayByteCount:(int64_t)byteCount __attribute__((swift_name("readByteArray(byteCount:)")));
- (FizbotBifrostOkioByteString *)readByteString __attribute__((swift_name("readByteString()")));
- (FizbotBifrostOkioByteString *)readByteStringByteCount:(int64_t)byteCount __attribute__((swift_name("readByteString(byteCount:)")));
- (int64_t)readDecimalLong __attribute__((swift_name("readDecimalLong()")));
- (void)readFullySink:(FizbotBifrostKotlinByteArray *)sink __attribute__((swift_name("readFully(sink:)")));
- (void)readFullySink:(FizbotBifrostOkioBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readFully(sink:byteCount:)")));
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
- (int32_t)selectOptions:(NSArray<FizbotBifrostOkioByteString *> *)options __attribute__((swift_name("select(options:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
@property (readonly) FizbotBifrostOkioBuffer *buffer __attribute__((swift_name("buffer")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioBuffer")))
@interface FizbotBifrostOkioBuffer : FizbotBifrostBase <FizbotBifrostOkioBufferedSource, FizbotBifrostOkioBufferedSink>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)closeAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("close()")));
- (int64_t)completeSegmentByteCount __attribute__((swift_name("completeSegmentByteCount()")));
- (FizbotBifrostOkioBuffer *)doCopy __attribute__((swift_name("doCopy()")));
- (FizbotBifrostOkioBuffer *)doCopyToOut:(FizbotBifrostOkioBuffer *)out offset:(int64_t)offset __attribute__((swift_name("doCopyTo(out:offset:)")));
- (FizbotBifrostOkioBuffer *)doCopyToOut:(FizbotBifrostOkioBuffer *)out offset:(int64_t)offset byteCount:(int64_t)byteCount __attribute__((swift_name("doCopyTo(out:offset:byteCount:)")));
- (FizbotBifrostOkioBuffer *)emit __attribute__((swift_name("emit()")));
- (FizbotBifrostOkioBuffer *)emitCompleteSegments __attribute__((swift_name("emitCompleteSegments()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)flushAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("flush()")));
- (int8_t)getPos:(int64_t)pos __attribute__((swift_name("get(pos:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (FizbotBifrostOkioByteString *)hmacSha1Key:(FizbotBifrostOkioByteString *)key __attribute__((swift_name("hmacSha1(key:)")));
- (FizbotBifrostOkioByteString *)hmacSha256Key:(FizbotBifrostOkioByteString *)key __attribute__((swift_name("hmacSha256(key:)")));
- (FizbotBifrostOkioByteString *)hmacSha512Key:(FizbotBifrostOkioByteString *)key __attribute__((swift_name("hmacSha512(key:)")));
- (int64_t)indexOfB:(int8_t)b __attribute__((swift_name("indexOf(b:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(b:fromIndex:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex toIndex:(int64_t)toIndex __attribute__((swift_name("indexOf(b:fromIndex:toIndex:)")));
- (int64_t)indexOfBytes:(FizbotBifrostOkioByteString *)bytes __attribute__((swift_name("indexOf(bytes:)")));
- (int64_t)indexOfBytes:(FizbotBifrostOkioByteString *)bytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(bytes:fromIndex:)")));
- (int64_t)indexOfElementTargetBytes:(FizbotBifrostOkioByteString *)targetBytes __attribute__((swift_name("indexOfElement(targetBytes:)")));
- (int64_t)indexOfElementTargetBytes:(FizbotBifrostOkioByteString *)targetBytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOfElement(targetBytes:fromIndex:)")));
- (FizbotBifrostOkioByteString *)md5 __attribute__((swift_name("md5()")));
- (id<FizbotBifrostOkioBufferedSource>)peek __attribute__((swift_name("peek_()")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(FizbotBifrostOkioByteString *)bytes __attribute__((swift_name("rangeEquals(offset:bytes:)")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(FizbotBifrostOkioByteString *)bytes bytesOffset:(int32_t)bytesOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:bytes:bytesOffset:byteCount:)")));
- (int32_t)readSink:(FizbotBifrostKotlinByteArray *)sink __attribute__((swift_name("read(sink:)")));
- (int32_t)readSink:(FizbotBifrostKotlinByteArray *)sink offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("read(sink:offset:byteCount:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (int64_t)readSink:(FizbotBifrostOkioBuffer *)sink byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("read(sink:byteCount:)"))) __attribute__((swift_error(nonnull_error)));
- (int64_t)readAllSink:(id<FizbotBifrostOkioSink>)sink __attribute__((swift_name("readAll(sink:)")));
- (FizbotBifrostOkioBufferUnsafeCursor *)readAndWriteUnsafeUnsafeCursor:(FizbotBifrostOkioBufferUnsafeCursor *)unsafeCursor __attribute__((swift_name("readAndWriteUnsafe(unsafeCursor:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (FizbotBifrostKotlinByteArray *)readByteArray __attribute__((swift_name("readByteArray()")));
- (FizbotBifrostKotlinByteArray *)readByteArrayByteCount:(int64_t)byteCount __attribute__((swift_name("readByteArray(byteCount:)")));
- (FizbotBifrostOkioByteString *)readByteString __attribute__((swift_name("readByteString()")));
- (FizbotBifrostOkioByteString *)readByteStringByteCount:(int64_t)byteCount __attribute__((swift_name("readByteString(byteCount:)")));
- (int64_t)readDecimalLong __attribute__((swift_name("readDecimalLong()")));
- (void)readFullySink:(FizbotBifrostKotlinByteArray *)sink __attribute__((swift_name("readFully(sink:)")));
- (void)readFullySink:(FizbotBifrostOkioBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readFully(sink:byteCount:)")));
- (int64_t)readHexadecimalUnsignedLong __attribute__((swift_name("readHexadecimalUnsignedLong()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int32_t)readIntLe __attribute__((swift_name("readIntLe()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int64_t)readLongLe __attribute__((swift_name("readLongLe()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (int16_t)readShortLe __attribute__((swift_name("readShortLe()")));
- (FizbotBifrostOkioBufferUnsafeCursor *)readUnsafeUnsafeCursor:(FizbotBifrostOkioBufferUnsafeCursor *)unsafeCursor __attribute__((swift_name("readUnsafe(unsafeCursor:)")));
- (NSString *)readUtf8 __attribute__((swift_name("readUtf8()")));
- (NSString *)readUtf8ByteCount:(int64_t)byteCount __attribute__((swift_name("readUtf8(byteCount:)")));
- (int32_t)readUtf8CodePoint __attribute__((swift_name("readUtf8CodePoint()")));
- (NSString * _Nullable)readUtf8Line __attribute__((swift_name("readUtf8Line()")));
- (NSString *)readUtf8LineStrict __attribute__((swift_name("readUtf8LineStrict()")));
- (NSString *)readUtf8LineStrictLimit:(int64_t)limit __attribute__((swift_name("readUtf8LineStrict(limit:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (int32_t)selectOptions:(NSArray<FizbotBifrostOkioByteString *> *)options __attribute__((swift_name("select(options:)")));
- (FizbotBifrostOkioByteString *)sha1 __attribute__((swift_name("sha1()")));
- (FizbotBifrostOkioByteString *)sha256 __attribute__((swift_name("sha256()")));
- (FizbotBifrostOkioByteString *)sha512 __attribute__((swift_name("sha512()")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (FizbotBifrostOkioByteString *)snapshot __attribute__((swift_name("snapshot()")));
- (FizbotBifrostOkioByteString *)snapshotByteCount:(int32_t)byteCount __attribute__((swift_name("snapshot(byteCount:)")));
- (FizbotBifrostOkioTimeout *)timeout __attribute__((swift_name("timeout()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (FizbotBifrostOkioBuffer *)writeSource:(FizbotBifrostKotlinByteArray *)source __attribute__((swift_name("write(source:)")));
- (FizbotBifrostOkioBuffer *)writeSource:(FizbotBifrostKotlinByteArray *)source offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(source:offset:byteCount:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)writeSource:(FizbotBifrostOkioBuffer *)source byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("write(source:byteCount_:)")));
- (FizbotBifrostOkioBuffer *)writeByteString:(FizbotBifrostOkioByteString *)byteString __attribute__((swift_name("write(byteString:)")));
- (FizbotBifrostOkioBuffer *)writeByteString:(FizbotBifrostOkioByteString *)byteString offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(byteString:offset:byteCount:)")));
- (FizbotBifrostOkioBuffer *)writeSource:(id<FizbotBifrostOkioSource>)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (int64_t)writeAllSource:(id<FizbotBifrostOkioSource>)source __attribute__((swift_name("writeAll(source:)")));
- (FizbotBifrostOkioBuffer *)writeByteB:(int32_t)b __attribute__((swift_name("writeByte(b:)")));
- (FizbotBifrostOkioBuffer *)writeDecimalLongV:(int64_t)v __attribute__((swift_name("writeDecimalLong(v:)")));
- (FizbotBifrostOkioBuffer *)writeHexadecimalUnsignedLongV:(int64_t)v __attribute__((swift_name("writeHexadecimalUnsignedLong(v:)")));
- (FizbotBifrostOkioBuffer *)writeIntI:(int32_t)i __attribute__((swift_name("writeInt(i:)")));
- (FizbotBifrostOkioBuffer *)writeIntLeI:(int32_t)i __attribute__((swift_name("writeIntLe(i:)")));
- (FizbotBifrostOkioBuffer *)writeLongV:(int64_t)v __attribute__((swift_name("writeLong(v:)")));
- (FizbotBifrostOkioBuffer *)writeLongLeV:(int64_t)v __attribute__((swift_name("writeLongLe(v:)")));
- (FizbotBifrostOkioBuffer *)writeShortS:(int32_t)s __attribute__((swift_name("writeShort(s:)")));
- (FizbotBifrostOkioBuffer *)writeShortLeS:(int32_t)s __attribute__((swift_name("writeShortLe(s:)")));
- (FizbotBifrostOkioBuffer *)writeUtf8String:(NSString *)string __attribute__((swift_name("writeUtf8(string:)")));
- (FizbotBifrostOkioBuffer *)writeUtf8String:(NSString *)string beginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("writeUtf8(string:beginIndex:endIndex:)")));
- (FizbotBifrostOkioBuffer *)writeUtf8CodePointCodePoint:(int32_t)codePoint __attribute__((swift_name("writeUtf8CodePoint(codePoint:)")));
@property (readonly) FizbotBifrostOkioBuffer *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("OkioTimeout")))
@interface FizbotBifrostOkioTimeout : FizbotBifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) FizbotBifrostOkioTimeoutCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((swift_name("Apollo_apiCustomTypeValue")))
@interface FizbotBifrostApollo_apiCustomTypeValue<T> : FizbotBifrostBase
- (instancetype)initWithValue:(T _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Used for backward compatibility with 2.x, use Adapter instead")));
@property (class, readonly, getter=companion) FizbotBifrostApollo_apiCustomTypeValueCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioByteString.Companion")))
@interface FizbotBifrostOkioByteStringCompanion : FizbotBifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FizbotBifrostOkioByteStringCompanion *shared __attribute__((swift_name("shared")));
- (FizbotBifrostOkioByteString *)ofData:(FizbotBifrostKotlinByteArray *)data __attribute__((swift_name("of(data:)")));
- (FizbotBifrostOkioByteString * _Nullable)decodeBase64:(NSString *)receiver __attribute__((swift_name("decodeBase64(_:)")));
- (FizbotBifrostOkioByteString *)decodeHex:(NSString *)receiver __attribute__((swift_name("decodeHex(_:)")));
- (FizbotBifrostOkioByteString *)encodeUtf8:(NSString *)receiver __attribute__((swift_name("encodeUtf8(_:)")));
- (FizbotBifrostOkioByteString *)toByteString:(FizbotBifrostKotlinByteArray *)receiver offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("toByteString(_:offset:byteCount:)")));
@property (readonly) FizbotBifrostOkioByteString *EMPTY __attribute__((swift_name("EMPTY")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioBuffer.UnsafeCursor")))
@interface FizbotBifrostOkioBufferUnsafeCursor : FizbotBifrostBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (int64_t)expandBufferMinByteCount:(int32_t)minByteCount __attribute__((swift_name("expandBuffer(minByteCount:)")));
- (int32_t)next __attribute__((swift_name("next()")));
- (int64_t)resizeBufferNewSize:(int64_t)newSize __attribute__((swift_name("resizeBuffer(newSize:)")));
- (int32_t)seekOffset:(int64_t)offset __attribute__((swift_name("seek(offset:)")));
@property FizbotBifrostOkioBuffer * _Nullable buffer __attribute__((swift_name("buffer")));
@property FizbotBifrostKotlinByteArray * _Nullable data __attribute__((swift_name("data")));
@property int32_t end __attribute__((swift_name("end")));
@property int64_t offset __attribute__((swift_name("offset")));
@property BOOL readWrite __attribute__((swift_name("readWrite")));
@property int32_t start __attribute__((swift_name("start")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioTimeout.Companion")))
@interface FizbotBifrostOkioTimeoutCompanion : FizbotBifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FizbotBifrostOkioTimeoutCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) FizbotBifrostOkioTimeout *NONE __attribute__((swift_name("NONE")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomTypeValueCompanion")))
@interface FizbotBifrostApollo_apiCustomTypeValueCompanion : FizbotBifrostBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FizbotBifrostApollo_apiCustomTypeValueCompanion *shared __attribute__((swift_name("shared")));
- (FizbotBifrostApollo_apiCustomTypeValue<id> *)fromRawValueValue:(id _Nullable)value __attribute__((swift_name("fromRawValue(value:)")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
