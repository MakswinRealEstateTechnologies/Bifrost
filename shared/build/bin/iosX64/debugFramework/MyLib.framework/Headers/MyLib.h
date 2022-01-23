#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MyLibFragmentCallingCode, MyLibCallingCode, MyLibApollo_apiApolloResponse<D>, MyLibBaseService, MyLibResponseType, MyLibKotlinEnumCompanion, MyLibKotlinEnum<E>, MyLibKotlinArray<T>, MyLibApollo_apiCompiledField, MyLibApollo_apiCustomScalarAdapters, MyLibCallingCodesQueryCompanion, MyLibCallingCodesQueryData1, MyLibCallingCodesQueryCalling_codes, MyLibCallingCodesQueryData, MyLibCallingCodesQuery_ResponseAdapter, MyLibCallingCodesQuery_ResponseAdapterCalling_codes, MyLibCallingCodesQuery_ResponseAdapterData, MyLibCallingCodesQuery_ResponseAdapterData1, MyLibCallingCode_Companion, MyLibApollo_apiObjectType, MyLibCallingCodePaginatorCompanion, MyLibQueryCompanion, MyLibCallingCodesQuerySelections, MyLibApollo_apiCompiledSelection, MyLibFragmentCallingCodeImpl_ResponseAdapter, MyLibFragmentCallingCodeImpl_ResponseAdapterFragmentCallingCode, MyLibfragmentCallingCodeSelections, MyLibApollo_apiApolloResponseBuilder<D>, MyLibApollo_apiError, MyLibUuidUuid, MyLibKotlinThrowable, MyLibKotlinException, MyLibApollo_apiExecutableVariables, MyLibApollo_apiCompiledFieldBuilder, MyLibApollo_apiCompiledArgument, MyLibApollo_apiCompiledCondition, MyLibApollo_apiCompiledType, MyLibApollo_apiJsonNumber, MyLibApollo_apiCustomScalarAdaptersKey, MyLibApollo_apiCustomScalarAdaptersBuilder, MyLibApollo_apiCustomScalarType, MyLibKotlinNothing, MyLibApollo_apiJsonReaderToken, MyLibApollo_apiCompiledNamedType, MyLibApollo_apiInterfaceType, MyLibApollo_apiErrorLocation, MyLibKotlinByteArray, MyLibKotlinByteIterator, MyLibOkioByteString, MyLibOkioBuffer, MyLibOkioTimeout, MyLibApollo_apiCustomTypeValue<T>, MyLibOkioByteStringCompanion, MyLibOkioBufferUnsafeCursor, MyLibOkioTimeoutCompanion, MyLibApollo_apiCustomTypeValueCompanion;

@protocol MyLibApollo_apiQueryData, MyLibKotlinComparable, MyLibApollo_apiAdapter, MyLibApollo_apiJsonWriter, MyLibApollo_apiExecutable, MyLibApollo_apiOperation, MyLibApollo_apiQuery, MyLibApollo_apiExecutableData, MyLibApollo_apiOperationData, MyLibApollo_apiJsonReader, MyLibApollo_apiFragmentData, MyLibApollo_apiExecutionContext, MyLibKotlinIterator, MyLibApollo_apiUpload, MyLibOkioCloseable, MyLibApollo_apiExecutionContextKey, MyLibApollo_apiExecutionContextElement, MyLibOkioBufferedSink, MyLibApollo_apiCustomTypeAdapter, MyLibOkioSource, MyLibOkioSink, MyLibOkioBufferedSource;

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
@interface MyLibBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface MyLibBase (MyLibBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface MyLibMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MyLibMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorMyLibKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface MyLibNumber : NSNumber
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
@interface MyLibByte : MyLibNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface MyLibUByte : MyLibNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface MyLibShort : MyLibNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface MyLibUShort : MyLibNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface MyLibInt : MyLibNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface MyLibUInt : MyLibNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface MyLibLong : MyLibNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface MyLibULong : MyLibNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface MyLibFloat : MyLibNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface MyLibDouble : MyLibNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface MyLibBoolean : MyLibNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCode")))
@interface MyLibCallingCode : MyLibBase
- (instancetype)initWithData:(MyLibFragmentCallingCode * _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(int32_t)id countryCode:(NSString *)countryCode countryName:(NSString *)countryName flag:(NSString *)flag value:(NSString *)value __attribute__((swift_name("init(id:countryCode:countryName:flag:value:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (MyLibCallingCode *)doCopyId:(int32_t)id countryCode:(NSString *)countryCode countryName:(NSString *)countryName flag:(NSString *)flag value:(NSString *)value __attribute__((swift_name("doCopy(id:countryCode:countryName:flag:value:)")));
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
@interface MyLibBaseService : MyLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)checkResponseResponse:(MyLibApollo_apiApolloResponse<id<MyLibApollo_apiQueryData>> *)response __attribute__((swift_name("checkResponse(response:)")));
@end;

__attribute__((swift_name("GraphQLNetwork")))
@interface MyLibGraphQLNetwork : MyLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiscService")))
@interface MyLibMiscService : MyLibBaseService
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)getCallingCodesCompletion:(void (^)(MyLibResponseType *, NSArray<MyLibCallingCode *> *))completion __attribute__((swift_name("getCallingCodes(completion:)")));
- (void)test __attribute__((swift_name("test()")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol MyLibKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface MyLibKotlinEnum<E> : MyLibBase <MyLibKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MyLibKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResponseType")))
@interface MyLibResponseType : MyLibKotlinEnum<MyLibResponseType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MyLibResponseType *success __attribute__((swift_name("success")));
@property (class, readonly) MyLibResponseType *error __attribute__((swift_name("error")));
+ (MyLibKotlinArray<MyLibResponseType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Apollo_apiExecutable")))
@protocol MyLibApollo_apiExecutable
@required
- (id<MyLibApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (MyLibApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<MyLibApollo_apiJsonWriter>)writer customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:)")));
@end;

__attribute__((swift_name("Apollo_apiOperation")))
@protocol MyLibApollo_apiOperation <MyLibApollo_apiExecutable>
@required
- (NSString *)document __attribute__((swift_name("document()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name_ __attribute__((swift_name("name()")));
@end;

__attribute__((swift_name("Apollo_apiQuery")))
@protocol MyLibApollo_apiQuery <MyLibApollo_apiOperation>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery")))
@interface MyLibCallingCodesQuery : MyLibBase <MyLibApollo_apiQuery>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MyLibCallingCodesQueryCompanion *companion __attribute__((swift_name("companion")));
- (id<MyLibApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (NSString *)document __attribute__((swift_name("document()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name_ __attribute__((swift_name("name()")));
- (MyLibApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<MyLibApollo_apiJsonWriter>)writer customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery.Calling_codes")))
@interface MyLibCallingCodesQueryCalling_codes : MyLibBase
- (instancetype)initWithData:(NSArray<MyLibCallingCodesQueryData1 *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (NSArray<MyLibCallingCodesQueryData1 *> *)component1 __attribute__((swift_name("component1()")));
- (MyLibCallingCodesQueryCalling_codes *)doCopyData:(NSArray<MyLibCallingCodesQueryData1 *> *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MyLibCallingCodesQueryData1 *> *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery.Companion")))
@interface MyLibCallingCodesQueryCompanion : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibCallingCodesQueryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *OPERATION_DOCUMENT __attribute__((swift_name("OPERATION_DOCUMENT")));
@property (readonly) NSString *OPERATION_ID __attribute__((swift_name("OPERATION_ID")));
@property (readonly) NSString *OPERATION_NAME __attribute__((swift_name("OPERATION_NAME")));
@end;

__attribute__((swift_name("Apollo_apiExecutableData")))
@protocol MyLibApollo_apiExecutableData
@required
@end;

__attribute__((swift_name("Apollo_apiOperationData")))
@protocol MyLibApollo_apiOperationData <MyLibApollo_apiExecutableData>
@required
@end;

__attribute__((swift_name("Apollo_apiQueryData")))
@protocol MyLibApollo_apiQueryData <MyLibApollo_apiOperationData>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery.Data")))
@interface MyLibCallingCodesQueryData : MyLibBase <MyLibApollo_apiQueryData>
- (instancetype)initWithCalling_codes:(MyLibCallingCodesQueryCalling_codes * _Nullable)calling_codes __attribute__((swift_name("init(calling_codes:)"))) __attribute__((objc_designated_initializer));
- (MyLibCallingCodesQueryCalling_codes * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MyLibCallingCodesQueryData *)doCopyCalling_codes:(MyLibCallingCodesQueryCalling_codes * _Nullable)calling_codes __attribute__((swift_name("doCopy(calling_codes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MyLibCallingCodesQueryCalling_codes * _Nullable calling_codes __attribute__((swift_name("calling_codes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery.Data1")))
@interface MyLibCallingCodesQueryData1 : MyLibBase
- (instancetype)initWith__typename:(NSString *)__typename fragmentCallingCode:(MyLibFragmentCallingCode *)fragmentCallingCode __attribute__((swift_name("init(__typename:fragmentCallingCode:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (MyLibFragmentCallingCode *)component2 __attribute__((swift_name("component2()")));
- (MyLibCallingCodesQueryData1 *)doCopy__typename:(NSString *)__typename fragmentCallingCode:(MyLibFragmentCallingCode *)fragmentCallingCode __attribute__((swift_name("doCopy(__typename:fragmentCallingCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) MyLibFragmentCallingCode *fragmentCallingCode __attribute__((swift_name("fragmentCallingCode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery_ResponseAdapter")))
@interface MyLibCallingCodesQuery_ResponseAdapter : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)callingCodesQuery_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibCallingCodesQuery_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Apollo_apiAdapter")))
@protocol MyLibApollo_apiAdapter
@required

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id _Nullable)fromJsonReader:(id<MyLibApollo_apiJsonReader>)reader customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<MyLibApollo_apiJsonWriter>)writer customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters value:(id _Nullable)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery_ResponseAdapter.Calling_codes")))
@interface MyLibCallingCodesQuery_ResponseAdapterCalling_codes : MyLibBase <MyLibApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)calling_codes __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibCallingCodesQuery_ResponseAdapterCalling_codes *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (MyLibCallingCodesQueryCalling_codes * _Nullable)fromJsonReader:(id<MyLibApollo_apiJsonReader>)reader customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<MyLibApollo_apiJsonWriter>)writer customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters value:(MyLibCallingCodesQueryCalling_codes *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery_ResponseAdapter.Data")))
@interface MyLibCallingCodesQuery_ResponseAdapterData : MyLibBase <MyLibApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibCallingCodesQuery_ResponseAdapterData *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (MyLibCallingCodesQueryData * _Nullable)fromJsonReader:(id<MyLibApollo_apiJsonReader>)reader customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<MyLibApollo_apiJsonWriter>)writer customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters value:(MyLibCallingCodesQueryData *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuery_ResponseAdapter.Data1")))
@interface MyLibCallingCodesQuery_ResponseAdapterData1 : MyLibBase <MyLibApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data1 __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibCallingCodesQuery_ResponseAdapterData1 *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (MyLibCallingCodesQueryData1 * _Nullable)fromJsonReader:(id<MyLibApollo_apiJsonReader>)reader customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<MyLibApollo_apiJsonWriter>)writer customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters value:(MyLibCallingCodesQueryData1 *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCode_")))
@interface MyLibCallingCode_ : MyLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MyLibCallingCode_Companion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCode_.Companion")))
@interface MyLibCallingCode_Companion : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibCallingCode_Companion *shared __attribute__((swift_name("shared")));
@property (readonly) MyLibApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodePaginator")))
@interface MyLibCallingCodePaginator : MyLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MyLibCallingCodePaginatorCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodePaginator.Companion")))
@interface MyLibCallingCodePaginatorCompanion : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibCallingCodePaginatorCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MyLibApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Query")))
@interface MyLibQuery : MyLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MyLibQueryCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Query.Companion")))
@interface MyLibQueryCompanion : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibQueryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MyLibApollo_apiObjectType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallingCodesQuerySelections")))
@interface MyLibCallingCodesQuerySelections : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)callingCodesQuerySelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibCallingCodesQuerySelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<MyLibApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((swift_name("Apollo_apiFragmentData")))
@protocol MyLibApollo_apiFragmentData <MyLibApollo_apiExecutableData>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentCallingCode")))
@interface MyLibFragmentCallingCode : MyLibBase <MyLibApollo_apiFragmentData>
- (instancetype)initWithId:(NSString *)id value:(NSString * _Nullable)value description:(NSString * _Nullable)description key:(NSString * _Nullable)key flag:(NSString * _Nullable)flag __attribute__((swift_name("init(id:value:description:key:flag:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (MyLibFragmentCallingCode *)doCopyId:(NSString *)id value:(NSString * _Nullable)value description:(NSString * _Nullable)description key:(NSString * _Nullable)key flag:(NSString * _Nullable)flag __attribute__((swift_name("doCopy(id:value:description:key:flag:)")));
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
@interface MyLibFragmentCallingCodeImpl_ResponseAdapter : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentCallingCodeImpl_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibFragmentCallingCodeImpl_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragmentCallingCodeImpl_ResponseAdapter.FragmentCallingCode")))
@interface MyLibFragmentCallingCodeImpl_ResponseAdapterFragmentCallingCode : MyLibBase <MyLibApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentCallingCode __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibFragmentCallingCodeImpl_ResponseAdapterFragmentCallingCode *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (MyLibFragmentCallingCode * _Nullable)fromJsonReader:(id<MyLibApollo_apiJsonReader>)reader customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<MyLibApollo_apiJsonWriter>)writer customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters value:(MyLibFragmentCallingCode *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("fragmentCallingCodeSelections")))
@interface MyLibfragmentCallingCodeSelections : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fragmentCallingCodeSelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibfragmentCallingCodeSelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<MyLibApollo_apiCompiledSelection *> *root __attribute__((swift_name("root")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiApolloResponse")))
@interface MyLibApollo_apiApolloResponse<D> : MyLibBase
- (BOOL)hasErrors __attribute__((swift_name("hasErrors()")));
- (MyLibApollo_apiApolloResponseBuilder<D> *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
@property (readonly) D _Nullable data __attribute__((swift_name("data")));
@property (readonly) D dataAssertNoErrors __attribute__((swift_name("dataAssertNoErrors")));
@property (readonly) NSArray<MyLibApollo_apiError *> * _Nullable errors __attribute__((swift_name("errors")));
@property (readonly) id<MyLibApollo_apiExecutionContext> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) NSDictionary<NSString *, id> *extensions __attribute__((swift_name("extensions")));
@property (readonly) id<MyLibApollo_apiOperation> operation __attribute__((swift_name("operation")));
@property (readonly) MyLibUuidUuid *requestUuid __attribute__((swift_name("requestUuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MyLibKotlinEnumCompanion : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MyLibKotlinArray<T> : MyLibBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MyLibInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MyLibKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface MyLibKotlinThrowable : MyLibBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MyLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MyLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (MyLibKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MyLibKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface MyLibKotlinException : MyLibKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MyLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MyLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("OkioIOException")))
@interface MyLibOkioIOException : MyLibKotlinException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MyLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithCause:(MyLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("Apollo_apiCompiledSelection")))
@interface MyLibApollo_apiCompiledSelection : MyLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCompiledField")))
@interface MyLibApollo_apiCompiledField : MyLibApollo_apiCompiledSelection
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)nameWithArgumentsVariables:(MyLibApollo_apiExecutableVariables *)variables __attribute__((swift_name("nameWithArguments(variables:)")));
- (MyLibApollo_apiCompiledFieldBuilder *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
- (id _Nullable)resolveArgumentName:(NSString *)name variables:(MyLibApollo_apiExecutableVariables *)variables __attribute__((swift_name("resolveArgument(name:variables:)")));
@property (readonly) NSString * _Nullable alias __attribute__((swift_name("alias")));
@property (readonly) NSArray<MyLibApollo_apiCompiledArgument *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) NSArray<MyLibApollo_apiCompiledCondition *> *condition __attribute__((swift_name("condition")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *responseName __attribute__((swift_name("responseName")));
@property (readonly) NSArray<MyLibApollo_apiCompiledSelection *> *selections __attribute__((swift_name("selections")));
@property (readonly) MyLibApollo_apiCompiledType *type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("OkioCloseable")))
@protocol MyLibOkioCloseable
@required

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)closeAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Apollo_apiJsonWriter")))
@protocol MyLibApollo_apiJsonWriter <MyLibOkioCloseable>
@required

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonWriter> _Nullable)beginArrayAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("beginArray()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonWriter> _Nullable)beginObjectAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("beginObject()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonWriter> _Nullable)endArrayAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("endArray()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonWriter> _Nullable)endObjectAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("endObject()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)flushAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("flush()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonWriter> _Nullable)nameName:(NSString *)name error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("name(name:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonWriter> _Nullable)nullValueAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nullValue()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonWriter> _Nullable)valueValue:(id<MyLibApollo_apiUpload>)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonWriter> _Nullable)valueValue:(MyLibApollo_apiJsonNumber *)value error_:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value_:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonWriter> _Nullable)valueValue:(BOOL)value error__:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value__:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonWriter> _Nullable)valueValue:(double)value error___:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value___:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonWriter> _Nullable)valueValue:(int32_t)value error____:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value____:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonWriter> _Nullable)valueValue:(int64_t)value error_____:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value_____:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonWriter> _Nullable)valueValue:(NSString *)value error______:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value______:)")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@end;

__attribute__((swift_name("Apollo_apiExecutionContext")))
@protocol MyLibApollo_apiExecutionContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<MyLibApollo_apiExecutionContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<MyLibApollo_apiExecutionContextElement> _Nullable)getKey:(id<MyLibApollo_apiExecutionContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<MyLibApollo_apiExecutionContext>)minusKeyKey:(id<MyLibApollo_apiExecutionContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<MyLibApollo_apiExecutionContext>)plusContext:(id<MyLibApollo_apiExecutionContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("Apollo_apiExecutionContextElement")))
@protocol MyLibApollo_apiExecutionContextElement <MyLibApollo_apiExecutionContext>
@required
@property (readonly) id<MyLibApollo_apiExecutionContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomScalarAdapters")))
@interface MyLibApollo_apiCustomScalarAdapters : MyLibBase <MyLibApollo_apiExecutionContextElement>
@property (class, readonly, getter=companion) MyLibApollo_apiCustomScalarAdaptersKey *companion __attribute__((swift_name("companion")));
- (MyLibApollo_apiCustomScalarAdaptersBuilder *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
- (id<MyLibApollo_apiAdapter>)responseAdapterForCustomScalar:(MyLibApollo_apiCustomScalarType *)customScalar __attribute__((swift_name("responseAdapterFor(customScalar:)")));
@property (readonly) id<MyLibApollo_apiExecutionContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Apollo_apiJsonReader")))
@protocol MyLibApollo_apiJsonReader <MyLibOkioCloseable>
@required

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonReader> _Nullable)beginArrayAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("beginArray()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonReader> _Nullable)beginObjectAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("beginObject()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonReader> _Nullable)endArrayAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("endArray()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonReader> _Nullable)endObjectAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("endObject()")));

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
- (MyLibKotlinNothing * _Nullable)nextNullAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextNull()"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (MyLibApollo_apiJsonNumber * _Nullable)nextNumberAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextNumber()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (NSString * _Nullable)nextStringAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextString()"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (MyLibApollo_apiJsonReaderToken * _Nullable)peekAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("peek()")));
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
@interface MyLibApollo_apiCompiledType : MyLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MyLibApollo_apiCompiledNamedType *)leafType __attribute__((swift_name("leafType()")));
@end;

__attribute__((swift_name("Apollo_apiCompiledNamedType")))
@interface MyLibApollo_apiCompiledNamedType : MyLibApollo_apiCompiledType
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MyLibApollo_apiCompiledNamedType *)leafType __attribute__((swift_name("leafType()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiObjectType")))
@interface MyLibApollo_apiObjectType : MyLibApollo_apiCompiledNamedType
- (instancetype)initWithName:(NSString *)name keyFields:(NSArray<NSString *> *)keyFields implements:(NSArray<MyLibApollo_apiInterfaceType *> *)implements __attribute__((swift_name("init(name:keyFields:implements:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSArray<MyLibApollo_apiInterfaceType *> *implements __attribute__((swift_name("implements")));
@property (readonly) NSArray<NSString *> *keyFields __attribute__((swift_name("keyFields")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiApolloResponseBuilder")))
@interface MyLibApollo_apiApolloResponseBuilder<D> : MyLibBase
- (instancetype)initWithOperation:(id<MyLibApollo_apiOperation>)operation requestUuid:(MyLibUuidUuid *)requestUuid data:(D _Nullable)data __attribute__((swift_name("init(operation:requestUuid:data:)"))) __attribute__((objc_designated_initializer));
- (MyLibApollo_apiApolloResponseBuilder<D> *)addExecutionContextExecutionContext:(id<MyLibApollo_apiExecutionContext>)executionContext __attribute__((swift_name("addExecutionContext(executionContext:)")));
- (MyLibApollo_apiApolloResponse<D> *)build __attribute__((swift_name("build()")));
- (MyLibApollo_apiApolloResponseBuilder<D> *)errorsErrors:(NSArray<MyLibApollo_apiError *> * _Nullable)errors __attribute__((swift_name("errors(errors:)")));
- (MyLibApollo_apiApolloResponseBuilder<D> *)extensionsExtensions:(NSDictionary<NSString *, id> * _Nullable)extensions __attribute__((swift_name("extensions(extensions:)")));
- (MyLibApollo_apiApolloResponseBuilder<D> *)requestUuidRequestUuid:(MyLibUuidUuid *)requestUuid __attribute__((swift_name("requestUuid(requestUuid:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiError")))
@interface MyLibApollo_apiError : MyLibBase
- (instancetype)initWithMessage:(NSString *)message locations:(NSArray<MyLibApollo_apiErrorLocation *> * _Nullable)locations path:(NSArray<id> * _Nullable)path extensions:(NSDictionary<NSString *, id> * _Nullable)extensions nonStandardFields:(NSDictionary<NSString *, id> * _Nullable)nonStandardFields __attribute__((swift_name("init(message:locations:path:extensions:nonStandardFields:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, id> *customAttributes __attribute__((swift_name("customAttributes"))) __attribute__((unavailable("Used for backward compatibility with 2.x")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable extensions __attribute__((swift_name("extensions")));
@property (readonly) NSArray<MyLibApollo_apiErrorLocation *> * _Nullable locations __attribute__((swift_name("locations")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable nonStandardFields __attribute__((swift_name("nonStandardFields")));
@property (readonly) NSArray<id> * _Nullable path __attribute__((swift_name("path")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UuidUuid")))
@interface MyLibUuidUuid : MyLibBase <MyLibKotlinComparable>
- (instancetype)initWithMsb:(int64_t)msb lsb:(int64_t)lsb __attribute__((swift_name("init(msb:lsb:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithUuidBytes:(MyLibKotlinByteArray *)uuidBytes __attribute__((swift_name("init(uuidBytes:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use `uuidOf` instead.")));
- (int32_t)compareToOther:(MyLibUuidUuid *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t leastSignificantBits __attribute__((swift_name("leastSignificantBits")));
@property (readonly) int64_t mostSignificantBits __attribute__((swift_name("mostSignificantBits")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol MyLibKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext_()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiExecutableVariables")))
@interface MyLibApollo_apiExecutableVariables : MyLibBase
- (instancetype)initWithValueMap:(NSDictionary<NSString *, id> *)valueMap __attribute__((swift_name("init(valueMap:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSDictionary<NSString *, id> *valueMap __attribute__((swift_name("valueMap")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCompiledField.Builder")))
@interface MyLibApollo_apiCompiledFieldBuilder : MyLibBase
- (instancetype)initWithCompiledField:(MyLibApollo_apiCompiledField *)compiledField __attribute__((swift_name("init(compiledField:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name type:(MyLibApollo_apiCompiledType *)type __attribute__((swift_name("init(name:type:)"))) __attribute__((objc_designated_initializer));
- (MyLibApollo_apiCompiledFieldBuilder *)aliasAlias:(NSString * _Nullable)alias __attribute__((swift_name("alias(alias:)")));
- (MyLibApollo_apiCompiledFieldBuilder *)argumentsArguments:(NSArray<MyLibApollo_apiCompiledArgument *> *)arguments __attribute__((swift_name("arguments(arguments:)")));
- (MyLibApollo_apiCompiledField *)build __attribute__((swift_name("build()")));
- (MyLibApollo_apiCompiledFieldBuilder *)conditionCondition:(NSArray<MyLibApollo_apiCompiledCondition *> *)condition __attribute__((swift_name("condition(condition:)")));
- (MyLibApollo_apiCompiledFieldBuilder *)selectionsSelections:(NSArray<MyLibApollo_apiCompiledSelection *> *)selections __attribute__((swift_name("selections(selections:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MyLibApollo_apiCompiledType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCompiledArgument")))
@interface MyLibApollo_apiCompiledArgument : MyLibBase
- (instancetype)initWithName:(NSString *)name value:(id _Nullable)value isKey:(BOOL)isKey __attribute__((swift_name("init(name:value:isKey:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BOOL isKey __attribute__((swift_name("isKey")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCompiledCondition")))
@interface MyLibApollo_apiCompiledCondition : MyLibBase
- (instancetype)initWithName:(NSString *)name inverted:(BOOL)inverted __attribute__((swift_name("init(name:inverted:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (MyLibApollo_apiCompiledCondition *)doCopyName:(NSString *)name inverted:(BOOL)inverted __attribute__((swift_name("doCopy(name:inverted:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL inverted __attribute__((swift_name("inverted")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Apollo_apiUpload")))
@protocol MyLibApollo_apiUpload
@required
- (void)writeToSink:(id<MyLibOkioBufferedSink>)sink __attribute__((swift_name("writeTo(sink:)")));
@property (readonly) int64_t contentLength __attribute__((swift_name("contentLength")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@property (readonly) NSString * _Nullable fileName __attribute__((swift_name("fileName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiJsonNumber")))
@interface MyLibApollo_apiJsonNumber : MyLibBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Apollo_apiExecutionContextKey")))
@protocol MyLibApollo_apiExecutionContextKey
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomScalarAdapters.Key")))
@interface MyLibApollo_apiCustomScalarAdaptersKey : MyLibBase <MyLibApollo_apiExecutionContextKey>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibApollo_apiCustomScalarAdaptersKey *shared __attribute__((swift_name("shared")));
@property (readonly) MyLibApollo_apiCustomScalarAdapters *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomScalarAdapters.Builder")))
@interface MyLibApollo_apiCustomScalarAdaptersBuilder : MyLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MyLibApollo_apiCustomScalarAdaptersBuilder *)addCustomScalarType:(MyLibApollo_apiCustomScalarType *)customScalarType customScalarAdapter:(id<MyLibApollo_apiAdapter>)customScalarAdapter __attribute__((swift_name("add(customScalarType:customScalarAdapter:)")));
- (MyLibApollo_apiCustomScalarAdaptersBuilder *)addCustomScalarType:(MyLibApollo_apiCustomScalarType *)customScalarType customTypeAdapter:(id<MyLibApollo_apiCustomTypeAdapter>)customTypeAdapter __attribute__((swift_name("add(customScalarType:customTypeAdapter:)"))) __attribute__((deprecated("Used for backward compatibility with 2.x")));
- (MyLibApollo_apiCustomScalarAdaptersBuilder *)addAllCustomScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters __attribute__((swift_name("addAll(customScalarAdapters:)")));
- (MyLibApollo_apiCustomScalarAdapters *)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomScalarType")))
@interface MyLibApollo_apiCustomScalarType : MyLibApollo_apiCompiledNamedType
- (instancetype)initWithName:(NSString *)name className:(NSString *)className __attribute__((swift_name("init(name:className:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *className __attribute__((swift_name("className")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MyLibKotlinNothing : MyLibBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiJsonReaderToken")))
@interface MyLibApollo_apiJsonReaderToken : MyLibKotlinEnum<MyLibApollo_apiJsonReaderToken *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MyLibApollo_apiJsonReaderToken *beginArray __attribute__((swift_name("beginArray")));
@property (class, readonly) MyLibApollo_apiJsonReaderToken *endArray __attribute__((swift_name("endArray")));
@property (class, readonly) MyLibApollo_apiJsonReaderToken *beginObject __attribute__((swift_name("beginObject")));
@property (class, readonly) MyLibApollo_apiJsonReaderToken *endObject __attribute__((swift_name("endObject")));
@property (class, readonly) MyLibApollo_apiJsonReaderToken *name __attribute__((swift_name("name")));
@property (class, readonly) MyLibApollo_apiJsonReaderToken *string __attribute__((swift_name("string")));
@property (class, readonly) MyLibApollo_apiJsonReaderToken *number __attribute__((swift_name("number")));
@property (class, readonly) MyLibApollo_apiJsonReaderToken *long_ __attribute__((swift_name("long_")));
@property (class, readonly) MyLibApollo_apiJsonReaderToken *boolean __attribute__((swift_name("boolean")));
@property (class, readonly) MyLibApollo_apiJsonReaderToken *null __attribute__((swift_name("null")));
@property (class, readonly) MyLibApollo_apiJsonReaderToken *endDocument __attribute__((swift_name("endDocument")));
+ (MyLibKotlinArray<MyLibApollo_apiJsonReaderToken *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiInterfaceType")))
@interface MyLibApollo_apiInterfaceType : MyLibApollo_apiCompiledNamedType
- (instancetype)initWithName:(NSString *)name keyFields:(NSArray<NSString *> *)keyFields implements:(NSArray<MyLibApollo_apiInterfaceType *> *)implements __attribute__((swift_name("init(name:keyFields:implements:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSArray<MyLibApollo_apiInterfaceType *> *implements __attribute__((swift_name("implements")));
@property (readonly) NSArray<NSString *> *keyFields __attribute__((swift_name("keyFields")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiError.Location")))
@interface MyLibApollo_apiErrorLocation : MyLibBase
- (instancetype)initWithLine:(int32_t)line column:(int32_t)column __attribute__((swift_name("init(line:column:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t column __attribute__((swift_name("column")));
@property (readonly) int32_t line __attribute__((swift_name("line")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface MyLibKotlinByteArray : MyLibBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(MyLibByte *(^)(MyLibInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MyLibKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("OkioSink")))
@protocol MyLibOkioSink <MyLibOkioCloseable>
@required

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)flushAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("flush()")));
- (MyLibOkioTimeout *)timeout __attribute__((swift_name("timeout()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)writeSource:(MyLibOkioBuffer *)source byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("write(source:byteCount_:)")));
@end;

__attribute__((swift_name("OkioBufferedSink")))
@protocol MyLibOkioBufferedSink <MyLibOkioSink>
@required
- (id<MyLibOkioBufferedSink>)emit __attribute__((swift_name("emit()")));
- (id<MyLibOkioBufferedSink>)emitCompleteSegments __attribute__((swift_name("emitCompleteSegments()")));
- (id<MyLibOkioBufferedSink>)writeSource:(MyLibKotlinByteArray *)source __attribute__((swift_name("write(source:)")));
- (id<MyLibOkioBufferedSink>)writeSource:(MyLibKotlinByteArray *)source offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(source:offset:byteCount:)")));
- (id<MyLibOkioBufferedSink>)writeByteString:(MyLibOkioByteString *)byteString __attribute__((swift_name("write(byteString:)")));
- (id<MyLibOkioBufferedSink>)writeByteString:(MyLibOkioByteString *)byteString offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(byteString:offset:byteCount:)")));
- (id<MyLibOkioBufferedSink>)writeSource:(id<MyLibOkioSource>)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (int64_t)writeAllSource:(id<MyLibOkioSource>)source __attribute__((swift_name("writeAll(source:)")));
- (id<MyLibOkioBufferedSink>)writeByteB:(int32_t)b __attribute__((swift_name("writeByte(b:)")));
- (id<MyLibOkioBufferedSink>)writeDecimalLongV:(int64_t)v __attribute__((swift_name("writeDecimalLong(v:)")));
- (id<MyLibOkioBufferedSink>)writeHexadecimalUnsignedLongV:(int64_t)v __attribute__((swift_name("writeHexadecimalUnsignedLong(v:)")));
- (id<MyLibOkioBufferedSink>)writeIntI:(int32_t)i __attribute__((swift_name("writeInt(i:)")));
- (id<MyLibOkioBufferedSink>)writeIntLeI:(int32_t)i __attribute__((swift_name("writeIntLe(i:)")));
- (id<MyLibOkioBufferedSink>)writeLongV:(int64_t)v __attribute__((swift_name("writeLong(v:)")));
- (id<MyLibOkioBufferedSink>)writeLongLeV:(int64_t)v __attribute__((swift_name("writeLongLe(v:)")));
- (id<MyLibOkioBufferedSink>)writeShortS:(int32_t)s __attribute__((swift_name("writeShort(s:)")));
- (id<MyLibOkioBufferedSink>)writeShortLeS:(int32_t)s __attribute__((swift_name("writeShortLe(s:)")));
- (id<MyLibOkioBufferedSink>)writeUtf8String:(NSString *)string __attribute__((swift_name("writeUtf8(string:)")));
- (id<MyLibOkioBufferedSink>)writeUtf8String:(NSString *)string beginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("writeUtf8(string:beginIndex:endIndex:)")));
- (id<MyLibOkioBufferedSink>)writeUtf8CodePointCodePoint:(int32_t)codePoint __attribute__((swift_name("writeUtf8CodePoint(codePoint:)")));
@property (readonly) MyLibOkioBuffer *buffer __attribute__((swift_name("buffer")));
@end;

__attribute__((swift_name("Apollo_apiCustomTypeAdapter")))
@protocol MyLibApollo_apiCustomTypeAdapter
@required
- (id _Nullable)decodeValue:(MyLibApollo_apiCustomTypeValue<id> *)value __attribute__((swift_name("decode(value:)")));
- (MyLibApollo_apiCustomTypeValue<id> *)encodeValue:(id _Nullable)value __attribute__((swift_name("encode(value:)")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface MyLibKotlinByteIterator : MyLibBase <MyLibKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MyLibByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("OkioByteString")))
@interface MyLibOkioByteString : MyLibBase <MyLibKotlinComparable>
@property (class, readonly, getter=companion) MyLibOkioByteStringCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)base64 __attribute__((swift_name("base64()")));
- (NSString *)base64Url __attribute__((swift_name("base64Url()")));
- (int32_t)compareToOther:(MyLibOkioByteString *)other __attribute__((swift_name("compareTo(other:)")));
- (void)doCopyIntoOffset:(int32_t)offset target:(MyLibKotlinByteArray *)target targetOffset:(int32_t)targetOffset byteCount:(int32_t)byteCount __attribute__((swift_name("doCopyInto(offset:target:targetOffset:byteCount:)")));
- (BOOL)endsWithSuffix:(MyLibKotlinByteArray *)suffix __attribute__((swift_name("endsWith(suffix:)")));
- (BOOL)endsWithSuffix_:(MyLibOkioByteString *)suffix __attribute__((swift_name("endsWith(suffix_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)hex __attribute__((swift_name("hex()")));
- (MyLibOkioByteString *)hmacSha1Key:(MyLibOkioByteString *)key __attribute__((swift_name("hmacSha1(key:)")));
- (MyLibOkioByteString *)hmacSha256Key:(MyLibOkioByteString *)key __attribute__((swift_name("hmacSha256(key:)")));
- (MyLibOkioByteString *)hmacSha512Key:(MyLibOkioByteString *)key __attribute__((swift_name("hmacSha512(key:)")));
- (int32_t)indexOfOther:(MyLibKotlinByteArray *)other fromIndex:(int32_t)fromIndex __attribute__((swift_name("indexOf(other:fromIndex:)")));
- (int32_t)indexOfOther:(MyLibOkioByteString *)other fromIndex_:(int32_t)fromIndex __attribute__((swift_name("indexOf(other:fromIndex_:)")));
- (int32_t)lastIndexOfOther:(MyLibKotlinByteArray *)other fromIndex:(int32_t)fromIndex __attribute__((swift_name("lastIndexOf(other:fromIndex:)")));
- (int32_t)lastIndexOfOther:(MyLibOkioByteString *)other fromIndex_:(int32_t)fromIndex __attribute__((swift_name("lastIndexOf(other:fromIndex_:)")));
- (MyLibOkioByteString *)md5 __attribute__((swift_name("md5()")));
- (BOOL)rangeEqualsOffset:(int32_t)offset other:(MyLibKotlinByteArray *)other otherOffset:(int32_t)otherOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:other:otherOffset:byteCount:)")));
- (BOOL)rangeEqualsOffset:(int32_t)offset other:(MyLibOkioByteString *)other otherOffset:(int32_t)otherOffset byteCount_:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:other:otherOffset:byteCount_:)")));
- (MyLibOkioByteString *)sha1 __attribute__((swift_name("sha1()")));
- (MyLibOkioByteString *)sha256 __attribute__((swift_name("sha256()")));
- (MyLibOkioByteString *)sha512 __attribute__((swift_name("sha512()")));
- (BOOL)startsWithPrefix:(MyLibKotlinByteArray *)prefix __attribute__((swift_name("startsWith(prefix:)")));
- (BOOL)startsWithPrefix_:(MyLibOkioByteString *)prefix __attribute__((swift_name("startsWith(prefix_:)")));
- (MyLibOkioByteString *)substringBeginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("substring(beginIndex:endIndex:)")));
- (MyLibOkioByteString *)toAsciiLowercase __attribute__((swift_name("toAsciiLowercase()")));
- (MyLibOkioByteString *)toAsciiUppercase __attribute__((swift_name("toAsciiUppercase()")));
- (MyLibKotlinByteArray *)toByteArray __attribute__((swift_name("toByteArray()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)utf8 __attribute__((swift_name("utf8()")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("OkioSource")))
@protocol MyLibOkioSource <MyLibOkioCloseable>
@required

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (int64_t)readSink:(MyLibOkioBuffer *)sink byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("read(sink:byteCount:)"))) __attribute__((swift_error(nonnull_error)));
- (MyLibOkioTimeout *)timeout __attribute__((swift_name("timeout()")));
@end;

__attribute__((swift_name("OkioBufferedSource")))
@protocol MyLibOkioBufferedSource <MyLibOkioSource>
@required
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (int64_t)indexOfB:(int8_t)b __attribute__((swift_name("indexOf(b:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(b:fromIndex:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex toIndex:(int64_t)toIndex __attribute__((swift_name("indexOf(b:fromIndex:toIndex:)")));
- (int64_t)indexOfBytes:(MyLibOkioByteString *)bytes __attribute__((swift_name("indexOf(bytes:)")));
- (int64_t)indexOfBytes:(MyLibOkioByteString *)bytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(bytes:fromIndex:)")));
- (int64_t)indexOfElementTargetBytes:(MyLibOkioByteString *)targetBytes __attribute__((swift_name("indexOfElement(targetBytes:)")));
- (int64_t)indexOfElementTargetBytes:(MyLibOkioByteString *)targetBytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOfElement(targetBytes:fromIndex:)")));
- (id<MyLibOkioBufferedSource>)peek __attribute__((swift_name("peek_()")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(MyLibOkioByteString *)bytes __attribute__((swift_name("rangeEquals(offset:bytes:)")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(MyLibOkioByteString *)bytes bytesOffset:(int32_t)bytesOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:bytes:bytesOffset:byteCount:)")));
- (int32_t)readSink:(MyLibKotlinByteArray *)sink __attribute__((swift_name("read(sink:)")));
- (int32_t)readSink:(MyLibKotlinByteArray *)sink offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("read(sink:offset:byteCount:)")));
- (int64_t)readAllSink:(id<MyLibOkioSink>)sink __attribute__((swift_name("readAll(sink:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (MyLibKotlinByteArray *)readByteArray __attribute__((swift_name("readByteArray()")));
- (MyLibKotlinByteArray *)readByteArrayByteCount:(int64_t)byteCount __attribute__((swift_name("readByteArray(byteCount:)")));
- (MyLibOkioByteString *)readByteString __attribute__((swift_name("readByteString()")));
- (MyLibOkioByteString *)readByteStringByteCount:(int64_t)byteCount __attribute__((swift_name("readByteString(byteCount:)")));
- (int64_t)readDecimalLong __attribute__((swift_name("readDecimalLong()")));
- (void)readFullySink:(MyLibKotlinByteArray *)sink __attribute__((swift_name("readFully(sink:)")));
- (void)readFullySink:(MyLibOkioBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readFully(sink:byteCount:)")));
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
- (int32_t)selectOptions:(NSArray<MyLibOkioByteString *> *)options __attribute__((swift_name("select(options:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
@property (readonly) MyLibOkioBuffer *buffer __attribute__((swift_name("buffer")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioBuffer")))
@interface MyLibOkioBuffer : MyLibBase <MyLibOkioBufferedSource, MyLibOkioBufferedSink>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)closeAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("close()")));
- (int64_t)completeSegmentByteCount __attribute__((swift_name("completeSegmentByteCount()")));
- (MyLibOkioBuffer *)doCopy __attribute__((swift_name("doCopy()")));
- (MyLibOkioBuffer *)doCopyToOut:(MyLibOkioBuffer *)out offset:(int64_t)offset __attribute__((swift_name("doCopyTo(out:offset:)")));
- (MyLibOkioBuffer *)doCopyToOut:(MyLibOkioBuffer *)out offset:(int64_t)offset byteCount:(int64_t)byteCount __attribute__((swift_name("doCopyTo(out:offset:byteCount:)")));
- (MyLibOkioBuffer *)emit __attribute__((swift_name("emit()")));
- (MyLibOkioBuffer *)emitCompleteSegments __attribute__((swift_name("emitCompleteSegments()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)flushAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("flush()")));
- (int8_t)getPos:(int64_t)pos __attribute__((swift_name("get(pos:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (MyLibOkioByteString *)hmacSha1Key:(MyLibOkioByteString *)key __attribute__((swift_name("hmacSha1(key:)")));
- (MyLibOkioByteString *)hmacSha256Key:(MyLibOkioByteString *)key __attribute__((swift_name("hmacSha256(key:)")));
- (MyLibOkioByteString *)hmacSha512Key:(MyLibOkioByteString *)key __attribute__((swift_name("hmacSha512(key:)")));
- (int64_t)indexOfB:(int8_t)b __attribute__((swift_name("indexOf(b:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(b:fromIndex:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex toIndex:(int64_t)toIndex __attribute__((swift_name("indexOf(b:fromIndex:toIndex:)")));
- (int64_t)indexOfBytes:(MyLibOkioByteString *)bytes __attribute__((swift_name("indexOf(bytes:)")));
- (int64_t)indexOfBytes:(MyLibOkioByteString *)bytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(bytes:fromIndex:)")));
- (int64_t)indexOfElementTargetBytes:(MyLibOkioByteString *)targetBytes __attribute__((swift_name("indexOfElement(targetBytes:)")));
- (int64_t)indexOfElementTargetBytes:(MyLibOkioByteString *)targetBytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOfElement(targetBytes:fromIndex:)")));
- (MyLibOkioByteString *)md5 __attribute__((swift_name("md5()")));
- (id<MyLibOkioBufferedSource>)peek __attribute__((swift_name("peek_()")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(MyLibOkioByteString *)bytes __attribute__((swift_name("rangeEquals(offset:bytes:)")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(MyLibOkioByteString *)bytes bytesOffset:(int32_t)bytesOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:bytes:bytesOffset:byteCount:)")));
- (int32_t)readSink:(MyLibKotlinByteArray *)sink __attribute__((swift_name("read(sink:)")));
- (int32_t)readSink:(MyLibKotlinByteArray *)sink offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("read(sink:offset:byteCount:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (int64_t)readSink:(MyLibOkioBuffer *)sink byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("read(sink:byteCount:)"))) __attribute__((swift_error(nonnull_error)));
- (int64_t)readAllSink:(id<MyLibOkioSink>)sink __attribute__((swift_name("readAll(sink:)")));
- (MyLibOkioBufferUnsafeCursor *)readAndWriteUnsafeUnsafeCursor:(MyLibOkioBufferUnsafeCursor *)unsafeCursor __attribute__((swift_name("readAndWriteUnsafe(unsafeCursor:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (MyLibKotlinByteArray *)readByteArray __attribute__((swift_name("readByteArray()")));
- (MyLibKotlinByteArray *)readByteArrayByteCount:(int64_t)byteCount __attribute__((swift_name("readByteArray(byteCount:)")));
- (MyLibOkioByteString *)readByteString __attribute__((swift_name("readByteString()")));
- (MyLibOkioByteString *)readByteStringByteCount:(int64_t)byteCount __attribute__((swift_name("readByteString(byteCount:)")));
- (int64_t)readDecimalLong __attribute__((swift_name("readDecimalLong()")));
- (void)readFullySink:(MyLibKotlinByteArray *)sink __attribute__((swift_name("readFully(sink:)")));
- (void)readFullySink:(MyLibOkioBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readFully(sink:byteCount:)")));
- (int64_t)readHexadecimalUnsignedLong __attribute__((swift_name("readHexadecimalUnsignedLong()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int32_t)readIntLe __attribute__((swift_name("readIntLe()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int64_t)readLongLe __attribute__((swift_name("readLongLe()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (int16_t)readShortLe __attribute__((swift_name("readShortLe()")));
- (MyLibOkioBufferUnsafeCursor *)readUnsafeUnsafeCursor:(MyLibOkioBufferUnsafeCursor *)unsafeCursor __attribute__((swift_name("readUnsafe(unsafeCursor:)")));
- (NSString *)readUtf8 __attribute__((swift_name("readUtf8()")));
- (NSString *)readUtf8ByteCount:(int64_t)byteCount __attribute__((swift_name("readUtf8(byteCount:)")));
- (int32_t)readUtf8CodePoint __attribute__((swift_name("readUtf8CodePoint()")));
- (NSString * _Nullable)readUtf8Line __attribute__((swift_name("readUtf8Line()")));
- (NSString *)readUtf8LineStrict __attribute__((swift_name("readUtf8LineStrict()")));
- (NSString *)readUtf8LineStrictLimit:(int64_t)limit __attribute__((swift_name("readUtf8LineStrict(limit:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (int32_t)selectOptions:(NSArray<MyLibOkioByteString *> *)options __attribute__((swift_name("select(options:)")));
- (MyLibOkioByteString *)sha1 __attribute__((swift_name("sha1()")));
- (MyLibOkioByteString *)sha256 __attribute__((swift_name("sha256()")));
- (MyLibOkioByteString *)sha512 __attribute__((swift_name("sha512()")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (MyLibOkioByteString *)snapshot __attribute__((swift_name("snapshot()")));
- (MyLibOkioByteString *)snapshotByteCount:(int32_t)byteCount __attribute__((swift_name("snapshot(byteCount:)")));
- (MyLibOkioTimeout *)timeout __attribute__((swift_name("timeout()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MyLibOkioBuffer *)writeSource:(MyLibKotlinByteArray *)source __attribute__((swift_name("write(source:)")));
- (MyLibOkioBuffer *)writeSource:(MyLibKotlinByteArray *)source offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(source:offset:byteCount:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)writeSource:(MyLibOkioBuffer *)source byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("write(source:byteCount_:)")));
- (MyLibOkioBuffer *)writeByteString:(MyLibOkioByteString *)byteString __attribute__((swift_name("write(byteString:)")));
- (MyLibOkioBuffer *)writeByteString:(MyLibOkioByteString *)byteString offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(byteString:offset:byteCount:)")));
- (MyLibOkioBuffer *)writeSource:(id<MyLibOkioSource>)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (int64_t)writeAllSource:(id<MyLibOkioSource>)source __attribute__((swift_name("writeAll(source:)")));
- (MyLibOkioBuffer *)writeByteB:(int32_t)b __attribute__((swift_name("writeByte(b:)")));
- (MyLibOkioBuffer *)writeDecimalLongV:(int64_t)v __attribute__((swift_name("writeDecimalLong(v:)")));
- (MyLibOkioBuffer *)writeHexadecimalUnsignedLongV:(int64_t)v __attribute__((swift_name("writeHexadecimalUnsignedLong(v:)")));
- (MyLibOkioBuffer *)writeIntI:(int32_t)i __attribute__((swift_name("writeInt(i:)")));
- (MyLibOkioBuffer *)writeIntLeI:(int32_t)i __attribute__((swift_name("writeIntLe(i:)")));
- (MyLibOkioBuffer *)writeLongV:(int64_t)v __attribute__((swift_name("writeLong(v:)")));
- (MyLibOkioBuffer *)writeLongLeV:(int64_t)v __attribute__((swift_name("writeLongLe(v:)")));
- (MyLibOkioBuffer *)writeShortS:(int32_t)s __attribute__((swift_name("writeShort(s:)")));
- (MyLibOkioBuffer *)writeShortLeS:(int32_t)s __attribute__((swift_name("writeShortLe(s:)")));
- (MyLibOkioBuffer *)writeUtf8String:(NSString *)string __attribute__((swift_name("writeUtf8(string:)")));
- (MyLibOkioBuffer *)writeUtf8String:(NSString *)string beginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("writeUtf8(string:beginIndex:endIndex:)")));
- (MyLibOkioBuffer *)writeUtf8CodePointCodePoint:(int32_t)codePoint __attribute__((swift_name("writeUtf8CodePoint(codePoint:)")));
@property (readonly) MyLibOkioBuffer *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("OkioTimeout")))
@interface MyLibOkioTimeout : MyLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MyLibOkioTimeoutCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((swift_name("Apollo_apiCustomTypeValue")))
@interface MyLibApollo_apiCustomTypeValue<T> : MyLibBase
- (instancetype)initWithValue:(T _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Used for backward compatibility with 2.x, use Adapter instead")));
@property (class, readonly, getter=companion) MyLibApollo_apiCustomTypeValueCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioByteString.Companion")))
@interface MyLibOkioByteStringCompanion : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibOkioByteStringCompanion *shared __attribute__((swift_name("shared")));
- (MyLibOkioByteString *)ofData:(MyLibKotlinByteArray *)data __attribute__((swift_name("of(data:)")));
- (MyLibOkioByteString * _Nullable)decodeBase64:(NSString *)receiver __attribute__((swift_name("decodeBase64(_:)")));
- (MyLibOkioByteString *)decodeHex:(NSString *)receiver __attribute__((swift_name("decodeHex(_:)")));
- (MyLibOkioByteString *)encodeUtf8:(NSString *)receiver __attribute__((swift_name("encodeUtf8(_:)")));
- (MyLibOkioByteString *)toByteString:(MyLibKotlinByteArray *)receiver offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("toByteString(_:offset:byteCount:)")));
@property (readonly) MyLibOkioByteString *EMPTY __attribute__((swift_name("EMPTY")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioBuffer.UnsafeCursor")))
@interface MyLibOkioBufferUnsafeCursor : MyLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (int64_t)expandBufferMinByteCount:(int32_t)minByteCount __attribute__((swift_name("expandBuffer(minByteCount:)")));
- (int32_t)next __attribute__((swift_name("next()")));
- (int64_t)resizeBufferNewSize:(int64_t)newSize __attribute__((swift_name("resizeBuffer(newSize:)")));
- (int32_t)seekOffset:(int64_t)offset __attribute__((swift_name("seek(offset:)")));
@property MyLibOkioBuffer * _Nullable buffer __attribute__((swift_name("buffer")));
@property MyLibKotlinByteArray * _Nullable data __attribute__((swift_name("data")));
@property int32_t end __attribute__((swift_name("end")));
@property int64_t offset __attribute__((swift_name("offset")));
@property BOOL readWrite __attribute__((swift_name("readWrite")));
@property int32_t start __attribute__((swift_name("start")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioTimeout.Companion")))
@interface MyLibOkioTimeoutCompanion : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibOkioTimeoutCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MyLibOkioTimeout *NONE __attribute__((swift_name("NONE")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomTypeValueCompanion")))
@interface MyLibApollo_apiCustomTypeValueCompanion : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibApollo_apiCustomTypeValueCompanion *shared __attribute__((swift_name("shared")));
- (MyLibApollo_apiCustomTypeValue<id> *)fromRawValueValue:(id _Nullable)value __attribute__((swift_name("fromRawValue(value:)")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
