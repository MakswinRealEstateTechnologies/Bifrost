#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedFragmentCallingCode, SharedCallingCode, SharedApollo_apiApolloResponse<D>, SharedBaseService, SharedResponseType, SharedKotlinEnumCompanion, SharedKotlinEnum<E>, SharedKotlinArray<T>, SharedApollo_apiCompiledField, SharedApollo_apiCustomScalarAdapters, SharedCallingCodesQueryCompanion, SharedCallingCodesQueryData1, SharedCallingCodesQueryCalling_codes, SharedCallingCodesQueryData, SharedCallingCodesQuery_ResponseAdapter, SharedCallingCodesQuery_ResponseAdapterCalling_codes, SharedCallingCodesQuery_ResponseAdapterData, SharedCallingCodesQuery_ResponseAdapterData1, SharedCallingCode_Companion, SharedApollo_apiObjectType, SharedCallingCodePaginatorCompanion, SharedQueryCompanion, SharedCallingCodesQuerySelections, SharedApollo_apiCompiledSelection, SharedFragmentCallingCodeImpl_ResponseAdapter, SharedFragmentCallingCodeImpl_ResponseAdapterFragmentCallingCode, SharedfragmentCallingCodeSelections, SharedApollo_apiApolloResponseBuilder<D>, SharedApollo_apiError, SharedUuidUuid, SharedKotlinThrowable, SharedKotlinException, SharedApollo_apiExecutableVariables, SharedApollo_apiCompiledFieldBuilder, SharedApollo_apiCompiledArgument, SharedApollo_apiCompiledCondition, SharedApollo_apiCompiledType, SharedApollo_apiJsonNumber, SharedApollo_apiCustomScalarAdaptersKey, SharedApollo_apiCustomScalarAdaptersBuilder, SharedApollo_apiCustomScalarType, SharedKotlinNothing, SharedApollo_apiJsonReaderToken, SharedApollo_apiCompiledNamedType, SharedApollo_apiInterfaceType, SharedApollo_apiErrorLocation, SharedKotlinByteArray, SharedKotlinByteIterator, SharedOkioByteString, SharedOkioBuffer, SharedOkioTimeout, SharedApollo_apiCustomTypeValue<T>, SharedOkioByteStringCompanion, SharedOkioBufferUnsafeCursor, SharedOkioTimeoutCompanion, SharedApollo_apiCustomTypeValueCompanion;

@protocol SharedApollo_apiQueryData, SharedKotlinComparable, SharedApollo_apiAdapter, SharedApollo_apiJsonWriter, SharedApollo_apiExecutable, SharedApollo_apiOperation, SharedApollo_apiQuery, SharedApollo_apiExecutableData, SharedApollo_apiOperationData, SharedApollo_apiJsonReader, SharedApollo_apiFragmentData, SharedApollo_apiExecutionContext, SharedKotlinIterator, SharedApollo_apiUpload, SharedOkioCloseable, SharedApollo_apiExecutionContextKey, SharedApollo_apiExecutionContextElement, SharedOkioBufferedSink, SharedApollo_apiCustomTypeAdapter, SharedOkioSource, SharedOkioSink, SharedOkioBufferedSource;

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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCode")))
@interface SharedCallingCode : SharedBase
- (instancetype)initWithData:(SharedFragmentCallingCode * _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(int32_t)id countryCode:(NSString *)countryCode countryName:(NSString *)countryName flag:(NSString *)flag value:(NSString *)value __attribute__((swift_name("init(id:countryCode:countryName:flag:value:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (SharedCallingCode *)doCopyId:(int32_t)id countryCode:(NSString *)countryCode countryName:(NSString *)countryName flag:(NSString *)flag value:(NSString *)value __attribute__((swift_name("doCopy(id:countryCode:countryName:flag:value:)")));
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
@interface SharedBaseService : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)checkResponseResponse:(SharedApollo_apiApolloResponse<id<SharedApollo_apiQueryData>> *)response __attribute__((swift_name("checkResponse(response:)")));
@end;

__attribute__((swift_name("GraphQLNetwork")))
@interface SharedGraphQLNetwork : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiscService")))
@interface SharedMiscService : SharedBaseService
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)getCallingCodesCompletion:(void (^)(SharedResponseType *, NSArray<SharedCallingCode *> *))completion __attribute__((swift_name("getCallingCodes(completion:)")));
- (void)test __attribute__((swift_name("test()")));
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
__attribute__((swift_name("ResponseType")))
@interface SharedResponseType : SharedKotlinEnum<SharedResponseType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedResponseType *success __attribute__((swift_name("success")));
@property (class, readonly) SharedResponseType *error __attribute__((swift_name("error")));
+ (SharedKotlinArray<SharedResponseType *> *)values __attribute__((swift_name("values()")));
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

__attribute__((swift_name("Apollo_apiExecutableData")))
@protocol SharedApollo_apiExecutableData
@required
@end;

__attribute__((swift_name("Apollo_apiOperationData")))
@protocol SharedApollo_apiOperationData <SharedApollo_apiExecutableData>
@required
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
__attribute__((swift_name("CallingCodesQuery_ResponseAdapter")))
@interface SharedCallingCodesQuery_ResponseAdapter : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)callingCodesQuery_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCallingCodesQuery_ResponseAdapter *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CallingCode_")))
@interface SharedCallingCode_ : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedCallingCode_Companion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCode_.Companion")))
@interface SharedCallingCode_Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCallingCode_Companion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CallingCodesQuerySelections")))
@interface SharedCallingCodesQuerySelections : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)callingCodesQuerySelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCallingCodesQuerySelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<SharedApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((swift_name("Apollo_apiFragmentData")))
@protocol SharedApollo_apiFragmentData <SharedApollo_apiExecutableData>
@required
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
__attribute__((swift_name("fragmentCallingCodeSelections")))
@interface SharedfragmentCallingCodeSelections : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentCallingCodeSelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedfragmentCallingCodeSelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<SharedApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
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
@property (readonly) id<SharedApollo_apiOperation> operation __attribute__((swift_name("operation")));
@property (readonly) SharedUuidUuid *requestUuid __attribute__((swift_name("requestUuid")));
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
__attribute__((swift_name("Apollo_apiApolloResponseBuilder")))
@interface SharedApollo_apiApolloResponseBuilder<D> : SharedBase
- (instancetype)initWithOperation:(id<SharedApollo_apiOperation>)operation requestUuid:(SharedUuidUuid *)requestUuid data:(D _Nullable)data __attribute__((swift_name("init(operation:requestUuid:data:)"))) __attribute__((objc_designated_initializer));
- (SharedApollo_apiApolloResponseBuilder<D> *)addExecutionContextExecutionContext:(id<SharedApollo_apiExecutionContext>)executionContext __attribute__((swift_name("addExecutionContext(executionContext:)")));
- (SharedApollo_apiApolloResponse<D> *)build __attribute__((swift_name("build()")));
- (SharedApollo_apiApolloResponseBuilder<D> *)errorsErrors:(NSArray<SharedApollo_apiError *> * _Nullable)errors __attribute__((swift_name("errors(errors:)")));
- (SharedApollo_apiApolloResponseBuilder<D> *)extensionsExtensions:(NSDictionary<NSString *, id> * _Nullable)extensions __attribute__((swift_name("extensions(extensions:)")));
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
- (SharedApollo_apiCustomScalarAdaptersBuilder *)addCustomScalarType:(SharedApollo_apiCustomScalarType *)customScalarType customScalarAdapter:(id<SharedApollo_apiAdapter>)customScalarAdapter __attribute__((swift_name("add(customScalarType:customScalarAdapter:)")));
- (SharedApollo_apiCustomScalarAdaptersBuilder *)addCustomScalarType:(SharedApollo_apiCustomScalarType *)customScalarType customTypeAdapter:(id<SharedApollo_apiCustomTypeAdapter>)customTypeAdapter __attribute__((swift_name("add(customScalarType:customTypeAdapter:)"))) __attribute__((deprecated("Used for backward compatibility with 2.x")));
- (SharedApollo_apiCustomScalarAdaptersBuilder *)addAllCustomScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters __attribute__((swift_name("addAll(customScalarAdapters:)")));
- (SharedApollo_apiCustomScalarAdapters *)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomScalarType")))
@interface SharedApollo_apiCustomScalarType : SharedApollo_apiCompiledNamedType
- (instancetype)initWithName:(NSString *)name className:(NSString *)className __attribute__((swift_name("init(name:className:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *className __attribute__((swift_name("className")));
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

__attribute__((swift_name("Apollo_apiCustomTypeAdapter")))
@protocol SharedApollo_apiCustomTypeAdapter
@required
- (id _Nullable)decodeValue:(SharedApollo_apiCustomTypeValue<id> *)value __attribute__((swift_name("decode(value:)")));
- (SharedApollo_apiCustomTypeValue<id> *)encodeValue:(id _Nullable)value __attribute__((swift_name("encode(value:)")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface SharedKotlinByteIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
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

__attribute__((swift_name("Apollo_apiCustomTypeValue")))
@interface SharedApollo_apiCustomTypeValue<T> : SharedBase
- (instancetype)initWithValue:(T _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Used for backward compatibility with 2.x, use Adapter instead")));
@property (class, readonly, getter=companion) SharedApollo_apiCustomTypeValueCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
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
