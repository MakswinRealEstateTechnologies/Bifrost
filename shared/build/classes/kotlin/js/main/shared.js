(function (root, factory) {
  if (typeof define === 'function' && define.amd)
    define(['exports', 'kotlin', 'apollo-android-apollo-api-js-legacy', 'apollo-android-apollo-runtime-js-legacy', 'kotlinx-coroutines-core'], factory);
  else if (typeof exports === 'object')
    factory(module.exports, require('kotlin'), require('apollo-android-apollo-api-js-legacy'), require('apollo-android-apollo-runtime-js-legacy'), require('kotlinx-coroutines-core'));
  else {
    if (typeof kotlin === 'undefined') {
      throw new Error("Error loading module 'shared'. Its dependency 'kotlin' was not found. Please, check whether 'kotlin' is loaded prior to 'shared'.");
    }if (typeof this['apollo-android-apollo-api-js-legacy'] === 'undefined') {
      throw new Error("Error loading module 'shared'. Its dependency 'apollo-android-apollo-api-js-legacy' was not found. Please, check whether 'apollo-android-apollo-api-js-legacy' is loaded prior to 'shared'.");
    }if (typeof this['apollo-android-apollo-runtime-js-legacy'] === 'undefined') {
      throw new Error("Error loading module 'shared'. Its dependency 'apollo-android-apollo-runtime-js-legacy' was not found. Please, check whether 'apollo-android-apollo-runtime-js-legacy' is loaded prior to 'shared'.");
    }if (typeof this['kotlinx-coroutines-core'] === 'undefined') {
      throw new Error("Error loading module 'shared'. Its dependency 'kotlinx-coroutines-core' was not found. Please, check whether 'kotlinx-coroutines-core' is loaded prior to 'shared'.");
    }root.shared = factory(typeof shared === 'undefined' ? {} : shared, kotlin, this['apollo-android-apollo-api-js-legacy'], this['apollo-android-apollo-runtime-js-legacy'], this['kotlinx-coroutines-core']);
  }
}(this, function (_, Kotlin, $module$apollo_android_apollo_api_js_legacy, $module$apollo_android_apollo_runtime_js_legacy, $module$kotlinx_coroutines_core) {
  'use strict';
  var obj = $module$apollo_android_apollo_api_js_legacy.com.apollographql.apollo3.api.obj_2tjqpc$;
  var CompiledField$Builder = $module$apollo_android_apollo_api_js_legacy.com.apollographql.apollo3.api.CompiledField.Builder;
  var Kind_CLASS = Kotlin.Kind.CLASS;
  var Query$Data = $module$apollo_android_apollo_api_js_legacy.com.apollographql.apollo3.api.Query.Data;
  var Kind_OBJECT = Kotlin.Kind.OBJECT;
  var Query = $module$apollo_android_apollo_api_js_legacy.com.apollographql.apollo3.api.Query;
  var nullable = $module$apollo_android_apollo_api_js_legacy.com.apollographql.apollo3.api.nullable_szr5v6$;
  var listOf = Kotlin.kotlin.collections.listOf_mh5how$;
  var Adapter = $module$apollo_android_apollo_api_js_legacy.com.apollographql.apollo3.api.Adapter;
  var list = $module$apollo_android_apollo_api_js_legacy.com.apollographql.apollo3.api.list_nbixzp$;
  var ensureNotNull = Kotlin.ensureNotNull;
  var api = $module$apollo_android_apollo_api_js_legacy.com.apollographql.apollo3.api;
  var IllegalStateException_init = Kotlin.kotlin.IllegalStateException_init_pdl1vj$;
  var Fragment$Data = $module$apollo_android_apollo_api_js_legacy.com.apollographql.apollo3.api.Fragment.Data;
  var listOf_0 = Kotlin.kotlin.collections.listOf_i5x0yv$;
  var notNull = $module$apollo_android_apollo_api_js_legacy.com.apollographql.apollo3.api.notNull_78dx5n$;
  var CompiledFragment$Builder = $module$apollo_android_apollo_api_js_legacy.com.apollographql.apollo3.api.CompiledFragment.Builder;
  var list_0 = $module$apollo_android_apollo_api_js_legacy.com.apollographql.apollo3.api.list_78dx5n$;
  var CompiledArgument = $module$apollo_android_apollo_api_js_legacy.com.apollographql.apollo3.api.CompiledArgument;
  var ObjectType = $module$apollo_android_apollo_api_js_legacy.com.apollographql.apollo3.api.ObjectType;
  var HttpInterceptor = $module$apollo_android_apollo_runtime_js_legacy.com.apollographql.apollo3.network.http.HttpInterceptor;
  var CoroutineScope = $module$kotlinx_coroutines_core.kotlinx.coroutines.CoroutineScope_1fupul$;
  var ApolloClient$Builder = $module$apollo_android_apollo_runtime_js_legacy.com.apollographql.apollo3.ApolloClient.Builder;
  var CoroutineDispatcher = $module$kotlinx_coroutines_core.kotlinx.coroutines.CoroutineDispatcher;
  var Enum = Kotlin.kotlin.Enum;
  var throwISE = Kotlin.throwISE;
  var toInt = Kotlin.kotlin.text.toInt_pdl1vz$;
  var COROUTINE_SUSPENDED = Kotlin.kotlin.coroutines.intrinsics.COROUTINE_SUSPENDED;
  var CoroutineImpl = Kotlin.kotlin.coroutines.CoroutineImpl;
  var launch = $module$kotlinx_coroutines_core.kotlinx.coroutines.launch_s496o7$;
  var emptyList = Kotlin.kotlin.collections.emptyList_287e2$;
  var ArrayList_init = Kotlin.kotlin.collections.ArrayList_init_287e2$;
  MainLoopDispatcher.prototype = Object.create(CoroutineDispatcher.prototype);
  MainLoopDispatcher.prototype.constructor = MainLoopDispatcher;
  ResponseType.prototype = Object.create(Enum.prototype);
  ResponseType.prototype.constructor = ResponseType;
  MiscService.prototype = Object.create(BaseService.prototype);
  MiscService.prototype.constructor = MiscService;
  function CallingCodesQuery() {
    CallingCodesQuery$Companion_getInstance();
  }
  CallingCodesQuery.prototype.operationId = function () {
    return CallingCodesQuery$Companion_getInstance().OPERATION_ID;
  };
  CallingCodesQuery.prototype.document = function () {
    return CallingCodesQuery$Companion_getInstance().OPERATION_DOCUMENT;
  };
  CallingCodesQuery.prototype.name = function () {
    return CallingCodesQuery$Companion_getInstance().OPERATION_NAME;
  };
  CallingCodesQuery.prototype.serializeVariables_53zvmy$ = function (writer, customScalarAdapters) {
  };
  CallingCodesQuery.prototype.adapter = function () {
    return obj(CallingCodesQuery_ResponseAdapter$Data_getInstance());
  };
  CallingCodesQuery.prototype.rootField = function () {
    return (new CompiledField$Builder('data', Query$Companion_getInstance().type)).selections_xxmmyd$(CallingCodesQuerySelections_getInstance().root).build();
  };
  function CallingCodesQuery$Data(calling_codes) {
    this.calling_codes = calling_codes;
  }
  CallingCodesQuery$Data.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'Data',
    interfaces: [Query$Data]
  };
  CallingCodesQuery$Data.prototype.component1 = function () {
    return this.calling_codes;
  };
  CallingCodesQuery$Data.prototype.copy_8ki9pb$ = function (calling_codes) {
    return new CallingCodesQuery$Data(calling_codes === void 0 ? this.calling_codes : calling_codes);
  };
  CallingCodesQuery$Data.prototype.toString = function () {
    return 'Data(calling_codes=' + Kotlin.toString(this.calling_codes) + ')';
  };
  CallingCodesQuery$Data.prototype.hashCode = function () {
    var result = 0;
    result = result * 31 + Kotlin.hashCode(this.calling_codes) | 0;
    return result;
  };
  CallingCodesQuery$Data.prototype.equals = function (other) {
    return this === other || (other !== null && (typeof other === 'object' && (Object.getPrototypeOf(this) === Object.getPrototypeOf(other) && Kotlin.equals(this.calling_codes, other.calling_codes))));
  };
  function CallingCodesQuery$Calling_codes(data) {
    this.data = data;
  }
  CallingCodesQuery$Calling_codes.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'Calling_codes',
    interfaces: []
  };
  CallingCodesQuery$Calling_codes.prototype.component1 = function () {
    return this.data;
  };
  CallingCodesQuery$Calling_codes.prototype.copy_dzmrlb$ = function (data) {
    return new CallingCodesQuery$Calling_codes(data === void 0 ? this.data : data);
  };
  CallingCodesQuery$Calling_codes.prototype.toString = function () {
    return 'Calling_codes(data=' + Kotlin.toString(this.data) + ')';
  };
  CallingCodesQuery$Calling_codes.prototype.hashCode = function () {
    var result = 0;
    result = result * 31 + Kotlin.hashCode(this.data) | 0;
    return result;
  };
  CallingCodesQuery$Calling_codes.prototype.equals = function (other) {
    return this === other || (other !== null && (typeof other === 'object' && (Object.getPrototypeOf(this) === Object.getPrototypeOf(other) && Kotlin.equals(this.data, other.data))));
  };
  function CallingCodesQuery$Data1(__typename, fragmentCallingCode) {
    this.__typename = __typename;
    this.fragmentCallingCode = fragmentCallingCode;
  }
  CallingCodesQuery$Data1.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'Data1',
    interfaces: []
  };
  CallingCodesQuery$Data1.prototype.component1 = function () {
    return this.__typename;
  };
  CallingCodesQuery$Data1.prototype.component2 = function () {
    return this.fragmentCallingCode;
  };
  CallingCodesQuery$Data1.prototype.copy_quvlk8$ = function (__typename, fragmentCallingCode) {
    return new CallingCodesQuery$Data1(__typename === void 0 ? this.__typename : __typename, fragmentCallingCode === void 0 ? this.fragmentCallingCode : fragmentCallingCode);
  };
  CallingCodesQuery$Data1.prototype.toString = function () {
    return 'Data1(__typename=' + Kotlin.toString(this.__typename) + (', fragmentCallingCode=' + Kotlin.toString(this.fragmentCallingCode)) + ')';
  };
  CallingCodesQuery$Data1.prototype.hashCode = function () {
    var result = 0;
    result = result * 31 + Kotlin.hashCode(this.__typename) | 0;
    result = result * 31 + Kotlin.hashCode(this.fragmentCallingCode) | 0;
    return result;
  };
  CallingCodesQuery$Data1.prototype.equals = function (other) {
    return this === other || (other !== null && (typeof other === 'object' && (Object.getPrototypeOf(this) === Object.getPrototypeOf(other) && (Kotlin.equals(this.__typename, other.__typename) && Kotlin.equals(this.fragmentCallingCode, other.fragmentCallingCode)))));
  };
  function CallingCodesQuery$Companion() {
    CallingCodesQuery$Companion_instance = this;
    this.OPERATION_ID = 'ef4d9ea49721b76a842ae4aff1ee9546220411645d4aef36028243336d3327a4';
    this.OPERATION_DOCUMENT = 'query callingCodes { calling_codes(first: 50, page: 1, loginCodes: true, listingShareCodes: false) { data { __typename ...fragmentCallingCode } } }  fragment fragmentCallingCode on CallingCode { id value description key flag }';
    this.OPERATION_NAME = 'callingCodes';
  }
  CallingCodesQuery$Companion.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'Companion',
    interfaces: []
  };
  var CallingCodesQuery$Companion_instance = null;
  function CallingCodesQuery$Companion_getInstance() {
    if (CallingCodesQuery$Companion_instance === null) {
      new CallingCodesQuery$Companion();
    }return CallingCodesQuery$Companion_instance;
  }
  CallingCodesQuery.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'CallingCodesQuery',
    interfaces: [Query]
  };
  function LanguagesQuery() {
    LanguagesQuery$Companion_getInstance();
  }
  LanguagesQuery.prototype.operationId = function () {
    return LanguagesQuery$Companion_getInstance().OPERATION_ID;
  };
  LanguagesQuery.prototype.document = function () {
    return LanguagesQuery$Companion_getInstance().OPERATION_DOCUMENT;
  };
  LanguagesQuery.prototype.name = function () {
    return LanguagesQuery$Companion_getInstance().OPERATION_NAME;
  };
  LanguagesQuery.prototype.serializeVariables_53zvmy$ = function (writer, customScalarAdapters) {
  };
  LanguagesQuery.prototype.adapter = function () {
    return obj(LanguagesQuery_ResponseAdapter$Data_getInstance());
  };
  LanguagesQuery.prototype.rootField = function () {
    return (new CompiledField$Builder('data', Query$Companion_getInstance().type)).selections_xxmmyd$(LanguagesQuerySelections_getInstance().root).build();
  };
  function LanguagesQuery$Data(languages) {
    this.languages = languages;
  }
  LanguagesQuery$Data.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'Data',
    interfaces: [Query$Data]
  };
  LanguagesQuery$Data.prototype.component1 = function () {
    return this.languages;
  };
  LanguagesQuery$Data.prototype.copy_92wx7m$ = function (languages) {
    return new LanguagesQuery$Data(languages === void 0 ? this.languages : languages);
  };
  LanguagesQuery$Data.prototype.toString = function () {
    return 'Data(languages=' + Kotlin.toString(this.languages) + ')';
  };
  LanguagesQuery$Data.prototype.hashCode = function () {
    var result = 0;
    result = result * 31 + Kotlin.hashCode(this.languages) | 0;
    return result;
  };
  LanguagesQuery$Data.prototype.equals = function (other) {
    return this === other || (other !== null && (typeof other === 'object' && (Object.getPrototypeOf(this) === Object.getPrototypeOf(other) && Kotlin.equals(this.languages, other.languages))));
  };
  function LanguagesQuery$Languages(data) {
    this.data = data;
  }
  LanguagesQuery$Languages.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'Languages',
    interfaces: []
  };
  LanguagesQuery$Languages.prototype.component1 = function () {
    return this.data;
  };
  LanguagesQuery$Languages.prototype.copy_2fjt20$ = function (data) {
    return new LanguagesQuery$Languages(data === void 0 ? this.data : data);
  };
  LanguagesQuery$Languages.prototype.toString = function () {
    return 'Languages(data=' + Kotlin.toString(this.data) + ')';
  };
  LanguagesQuery$Languages.prototype.hashCode = function () {
    var result = 0;
    result = result * 31 + Kotlin.hashCode(this.data) | 0;
    return result;
  };
  LanguagesQuery$Languages.prototype.equals = function (other) {
    return this === other || (other !== null && (typeof other === 'object' && (Object.getPrototypeOf(this) === Object.getPrototypeOf(other) && Kotlin.equals(this.data, other.data))));
  };
  function LanguagesQuery$Data1(__typename, fragmentLanguage) {
    this.__typename = __typename;
    this.fragmentLanguage = fragmentLanguage;
  }
  LanguagesQuery$Data1.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'Data1',
    interfaces: []
  };
  LanguagesQuery$Data1.prototype.component1 = function () {
    return this.__typename;
  };
  LanguagesQuery$Data1.prototype.component2 = function () {
    return this.fragmentLanguage;
  };
  LanguagesQuery$Data1.prototype.copy_grqep$ = function (__typename, fragmentLanguage) {
    return new LanguagesQuery$Data1(__typename === void 0 ? this.__typename : __typename, fragmentLanguage === void 0 ? this.fragmentLanguage : fragmentLanguage);
  };
  LanguagesQuery$Data1.prototype.toString = function () {
    return 'Data1(__typename=' + Kotlin.toString(this.__typename) + (', fragmentLanguage=' + Kotlin.toString(this.fragmentLanguage)) + ')';
  };
  LanguagesQuery$Data1.prototype.hashCode = function () {
    var result = 0;
    result = result * 31 + Kotlin.hashCode(this.__typename) | 0;
    result = result * 31 + Kotlin.hashCode(this.fragmentLanguage) | 0;
    return result;
  };
  LanguagesQuery$Data1.prototype.equals = function (other) {
    return this === other || (other !== null && (typeof other === 'object' && (Object.getPrototypeOf(this) === Object.getPrototypeOf(other) && (Kotlin.equals(this.__typename, other.__typename) && Kotlin.equals(this.fragmentLanguage, other.fragmentLanguage)))));
  };
  function LanguagesQuery$Companion() {
    LanguagesQuery$Companion_instance = this;
    this.OPERATION_ID = '466629a936d567588038d64fd00d78c624fc22b4ddfa49366f6c361378f0858e';
    this.OPERATION_DOCUMENT = 'query languages { languages(first: 50, page: 1) { data { __typename ...fragmentLanguage } } }  fragment fragmentLanguage on Language { id value description key }';
    this.OPERATION_NAME = 'languages';
  }
  LanguagesQuery$Companion.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'Companion',
    interfaces: []
  };
  var LanguagesQuery$Companion_instance = null;
  function LanguagesQuery$Companion_getInstance() {
    if (LanguagesQuery$Companion_instance === null) {
      new LanguagesQuery$Companion();
    }return LanguagesQuery$Companion_instance;
  }
  LanguagesQuery.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'LanguagesQuery',
    interfaces: [Query]
  };
  function CallingCodesQuery_ResponseAdapter() {
    CallingCodesQuery_ResponseAdapter_instance = this;
  }
  function CallingCodesQuery_ResponseAdapter$Data() {
    CallingCodesQuery_ResponseAdapter$Data_instance = this;
    this.RESPONSE_NAMES = listOf('calling_codes');
  }
  CallingCodesQuery_ResponseAdapter$Data.prototype.fromJson_p35aje$ = function (reader, customScalarAdapters) {
    var calling_codes = null;
    while (true) {
      if (reader.selectName_mhpeer$(this.RESPONSE_NAMES) === 0)
        calling_codes = nullable(obj(CallingCodesQuery_ResponseAdapter$Calling_codes_getInstance())).fromJson_p35aje$(reader, customScalarAdapters);
      else
        break;
    }
    return new CallingCodesQuery$Data(calling_codes);
  };
  CallingCodesQuery_ResponseAdapter$Data.prototype.toJson_dotswr$ = function (writer, customScalarAdapters, value) {
    writer.name_61zpoe$('calling_codes');
    nullable(obj(CallingCodesQuery_ResponseAdapter$Calling_codes_getInstance())).toJson_dotswr$(writer, customScalarAdapters, value.calling_codes);
  };
  CallingCodesQuery_ResponseAdapter$Data.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'Data',
    interfaces: [Adapter]
  };
  var CallingCodesQuery_ResponseAdapter$Data_instance = null;
  function CallingCodesQuery_ResponseAdapter$Data_getInstance() {
    if (CallingCodesQuery_ResponseAdapter$Data_instance === null) {
      new CallingCodesQuery_ResponseAdapter$Data();
    }return CallingCodesQuery_ResponseAdapter$Data_instance;
  }
  function CallingCodesQuery_ResponseAdapter$Calling_codes() {
    CallingCodesQuery_ResponseAdapter$Calling_codes_instance = this;
    this.RESPONSE_NAMES = listOf('data');
  }
  CallingCodesQuery_ResponseAdapter$Calling_codes.prototype.fromJson_p35aje$ = function (reader, customScalarAdapters) {
    var data = null;
    while (true) {
      if (reader.selectName_mhpeer$(this.RESPONSE_NAMES) === 0)
        data = list(obj(CallingCodesQuery_ResponseAdapter$Data1_getInstance(), true)).fromJson_p35aje$(reader, customScalarAdapters);
      else
        break;
    }
    return new CallingCodesQuery$Calling_codes(ensureNotNull(data));
  };
  CallingCodesQuery_ResponseAdapter$Calling_codes.prototype.toJson_dotswr$ = function (writer, customScalarAdapters, value) {
    writer.name_61zpoe$('data');
    list(obj(CallingCodesQuery_ResponseAdapter$Data1_getInstance(), true)).toJson_dotswr$(writer, customScalarAdapters, value.data);
  };
  CallingCodesQuery_ResponseAdapter$Calling_codes.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'Calling_codes',
    interfaces: [Adapter]
  };
  var CallingCodesQuery_ResponseAdapter$Calling_codes_instance = null;
  function CallingCodesQuery_ResponseAdapter$Calling_codes_getInstance() {
    if (CallingCodesQuery_ResponseAdapter$Calling_codes_instance === null) {
      new CallingCodesQuery_ResponseAdapter$Calling_codes();
    }return CallingCodesQuery_ResponseAdapter$Calling_codes_instance;
  }
  function CallingCodesQuery_ResponseAdapter$Data1() {
    CallingCodesQuery_ResponseAdapter$Data1_instance = this;
    this.RESPONSE_NAMES = listOf('__typename');
  }
  CallingCodesQuery_ResponseAdapter$Data1.prototype.fromJson_p35aje$ = function (reader, customScalarAdapters) {
    var __typename = null;
    while (true) {
      if (reader.selectName_mhpeer$(this.RESPONSE_NAMES) === 0)
        __typename = api.StringAdapter.fromJson_p35aje$(reader, customScalarAdapters);
      else
        break;
    }
    if (!(__typename != null)) {
      var message = '__typename was not found';
      throw IllegalStateException_init(message.toString());
    }reader.rewind();
    var fragmentCallingCode = FragmentCallingCodeImpl_ResponseAdapter$FragmentCallingCode_getInstance().fromJson_p35aje$(reader, customScalarAdapters);
    return new CallingCodesQuery$Data1(__typename, fragmentCallingCode);
  };
  CallingCodesQuery_ResponseAdapter$Data1.prototype.toJson_dotswr$ = function (writer, customScalarAdapters, value) {
    writer.name_61zpoe$('__typename');
    api.StringAdapter.toJson_dotswr$(writer, customScalarAdapters, value.__typename);
    FragmentCallingCodeImpl_ResponseAdapter$FragmentCallingCode_getInstance().toJson_dotswr$(writer, customScalarAdapters, value.fragmentCallingCode);
  };
  CallingCodesQuery_ResponseAdapter$Data1.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'Data1',
    interfaces: [Adapter]
  };
  var CallingCodesQuery_ResponseAdapter$Data1_instance = null;
  function CallingCodesQuery_ResponseAdapter$Data1_getInstance() {
    if (CallingCodesQuery_ResponseAdapter$Data1_instance === null) {
      new CallingCodesQuery_ResponseAdapter$Data1();
    }return CallingCodesQuery_ResponseAdapter$Data1_instance;
  }
  CallingCodesQuery_ResponseAdapter.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'CallingCodesQuery_ResponseAdapter',
    interfaces: []
  };
  var CallingCodesQuery_ResponseAdapter_instance = null;
  function CallingCodesQuery_ResponseAdapter_getInstance() {
    if (CallingCodesQuery_ResponseAdapter_instance === null) {
      new CallingCodesQuery_ResponseAdapter();
    }return CallingCodesQuery_ResponseAdapter_instance;
  }
  function LanguagesQuery_ResponseAdapter() {
    LanguagesQuery_ResponseAdapter_instance = this;
  }
  function LanguagesQuery_ResponseAdapter$Data() {
    LanguagesQuery_ResponseAdapter$Data_instance = this;
    this.RESPONSE_NAMES = listOf('languages');
  }
  LanguagesQuery_ResponseAdapter$Data.prototype.fromJson_p35aje$ = function (reader, customScalarAdapters) {
    var languages = null;
    while (true) {
      if (reader.selectName_mhpeer$(this.RESPONSE_NAMES) === 0)
        languages = nullable(obj(LanguagesQuery_ResponseAdapter$Languages_getInstance())).fromJson_p35aje$(reader, customScalarAdapters);
      else
        break;
    }
    return new LanguagesQuery$Data(languages);
  };
  LanguagesQuery_ResponseAdapter$Data.prototype.toJson_dotswr$ = function (writer, customScalarAdapters, value) {
    writer.name_61zpoe$('languages');
    nullable(obj(LanguagesQuery_ResponseAdapter$Languages_getInstance())).toJson_dotswr$(writer, customScalarAdapters, value.languages);
  };
  LanguagesQuery_ResponseAdapter$Data.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'Data',
    interfaces: [Adapter]
  };
  var LanguagesQuery_ResponseAdapter$Data_instance = null;
  function LanguagesQuery_ResponseAdapter$Data_getInstance() {
    if (LanguagesQuery_ResponseAdapter$Data_instance === null) {
      new LanguagesQuery_ResponseAdapter$Data();
    }return LanguagesQuery_ResponseAdapter$Data_instance;
  }
  function LanguagesQuery_ResponseAdapter$Languages() {
    LanguagesQuery_ResponseAdapter$Languages_instance = this;
    this.RESPONSE_NAMES = listOf('data');
  }
  LanguagesQuery_ResponseAdapter$Languages.prototype.fromJson_p35aje$ = function (reader, customScalarAdapters) {
    var data = null;
    while (true) {
      if (reader.selectName_mhpeer$(this.RESPONSE_NAMES) === 0)
        data = list(obj(LanguagesQuery_ResponseAdapter$Data1_getInstance(), true)).fromJson_p35aje$(reader, customScalarAdapters);
      else
        break;
    }
    return new LanguagesQuery$Languages(ensureNotNull(data));
  };
  LanguagesQuery_ResponseAdapter$Languages.prototype.toJson_dotswr$ = function (writer, customScalarAdapters, value) {
    writer.name_61zpoe$('data');
    list(obj(LanguagesQuery_ResponseAdapter$Data1_getInstance(), true)).toJson_dotswr$(writer, customScalarAdapters, value.data);
  };
  LanguagesQuery_ResponseAdapter$Languages.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'Languages',
    interfaces: [Adapter]
  };
  var LanguagesQuery_ResponseAdapter$Languages_instance = null;
  function LanguagesQuery_ResponseAdapter$Languages_getInstance() {
    if (LanguagesQuery_ResponseAdapter$Languages_instance === null) {
      new LanguagesQuery_ResponseAdapter$Languages();
    }return LanguagesQuery_ResponseAdapter$Languages_instance;
  }
  function LanguagesQuery_ResponseAdapter$Data1() {
    LanguagesQuery_ResponseAdapter$Data1_instance = this;
    this.RESPONSE_NAMES = listOf('__typename');
  }
  LanguagesQuery_ResponseAdapter$Data1.prototype.fromJson_p35aje$ = function (reader, customScalarAdapters) {
    var __typename = null;
    while (true) {
      if (reader.selectName_mhpeer$(this.RESPONSE_NAMES) === 0)
        __typename = api.StringAdapter.fromJson_p35aje$(reader, customScalarAdapters);
      else
        break;
    }
    if (!(__typename != null)) {
      var message = '__typename was not found';
      throw IllegalStateException_init(message.toString());
    }reader.rewind();
    var fragmentLanguage = FragmentLanguageImpl_ResponseAdapter$FragmentLanguage_getInstance().fromJson_p35aje$(reader, customScalarAdapters);
    return new LanguagesQuery$Data1(__typename, fragmentLanguage);
  };
  LanguagesQuery_ResponseAdapter$Data1.prototype.toJson_dotswr$ = function (writer, customScalarAdapters, value) {
    writer.name_61zpoe$('__typename');
    api.StringAdapter.toJson_dotswr$(writer, customScalarAdapters, value.__typename);
    FragmentLanguageImpl_ResponseAdapter$FragmentLanguage_getInstance().toJson_dotswr$(writer, customScalarAdapters, value.fragmentLanguage);
  };
  LanguagesQuery_ResponseAdapter$Data1.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'Data1',
    interfaces: [Adapter]
  };
  var LanguagesQuery_ResponseAdapter$Data1_instance = null;
  function LanguagesQuery_ResponseAdapter$Data1_getInstance() {
    if (LanguagesQuery_ResponseAdapter$Data1_instance === null) {
      new LanguagesQuery_ResponseAdapter$Data1();
    }return LanguagesQuery_ResponseAdapter$Data1_instance;
  }
  LanguagesQuery_ResponseAdapter.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'LanguagesQuery_ResponseAdapter',
    interfaces: []
  };
  var LanguagesQuery_ResponseAdapter_instance = null;
  function LanguagesQuery_ResponseAdapter_getInstance() {
    if (LanguagesQuery_ResponseAdapter_instance === null) {
      new LanguagesQuery_ResponseAdapter();
    }return LanguagesQuery_ResponseAdapter_instance;
  }
  function FragmentCallingCode(id, value, description, key, flag) {
    this.id = id;
    this.value = value;
    this.description = description;
    this.key = key;
    this.flag = flag;
  }
  FragmentCallingCode.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'FragmentCallingCode',
    interfaces: [Fragment$Data]
  };
  FragmentCallingCode.prototype.component1 = function () {
    return this.id;
  };
  FragmentCallingCode.prototype.component2 = function () {
    return this.value;
  };
  FragmentCallingCode.prototype.component3 = function () {
    return this.description;
  };
  FragmentCallingCode.prototype.component4 = function () {
    return this.key;
  };
  FragmentCallingCode.prototype.component5 = function () {
    return this.flag;
  };
  FragmentCallingCode.prototype.copy_5agl8e$ = function (id, value, description, key, flag) {
    return new FragmentCallingCode(id === void 0 ? this.id : id, value === void 0 ? this.value : value, description === void 0 ? this.description : description, key === void 0 ? this.key : key, flag === void 0 ? this.flag : flag);
  };
  FragmentCallingCode.prototype.toString = function () {
    return 'FragmentCallingCode(id=' + Kotlin.toString(this.id) + (', value=' + Kotlin.toString(this.value)) + (', description=' + Kotlin.toString(this.description)) + (', key=' + Kotlin.toString(this.key)) + (', flag=' + Kotlin.toString(this.flag)) + ')';
  };
  FragmentCallingCode.prototype.hashCode = function () {
    var result = 0;
    result = result * 31 + Kotlin.hashCode(this.id) | 0;
    result = result * 31 + Kotlin.hashCode(this.value) | 0;
    result = result * 31 + Kotlin.hashCode(this.description) | 0;
    result = result * 31 + Kotlin.hashCode(this.key) | 0;
    result = result * 31 + Kotlin.hashCode(this.flag) | 0;
    return result;
  };
  FragmentCallingCode.prototype.equals = function (other) {
    return this === other || (other !== null && (typeof other === 'object' && (Object.getPrototypeOf(this) === Object.getPrototypeOf(other) && (Kotlin.equals(this.id, other.id) && Kotlin.equals(this.value, other.value) && Kotlin.equals(this.description, other.description) && Kotlin.equals(this.key, other.key) && Kotlin.equals(this.flag, other.flag)))));
  };
  function FragmentCallingCodeImpl_ResponseAdapter() {
    FragmentCallingCodeImpl_ResponseAdapter_instance = this;
  }
  function FragmentCallingCodeImpl_ResponseAdapter$FragmentCallingCode() {
    FragmentCallingCodeImpl_ResponseAdapter$FragmentCallingCode_instance = this;
    this.RESPONSE_NAMES = listOf_0(['id', 'value', 'description', 'key', 'flag']);
  }
  FragmentCallingCodeImpl_ResponseAdapter$FragmentCallingCode.prototype.fromJson_p35aje$ = function (reader, customScalarAdapters) {
    var id = null;
    var value = null;
    var description = null;
    var key = null;
    var flag = null;
    while (true) {
      switch (reader.selectName_mhpeer$(this.RESPONSE_NAMES)) {
        case 0:
          id = api.StringAdapter.fromJson_p35aje$(reader, customScalarAdapters);
          break;
        case 1:
          value = api.NullableStringAdapter.fromJson_p35aje$(reader, customScalarAdapters);
          break;
        case 2:
          description = api.NullableStringAdapter.fromJson_p35aje$(reader, customScalarAdapters);
          break;
        case 3:
          key = api.NullableStringAdapter.fromJson_p35aje$(reader, customScalarAdapters);
          break;
        case 4:
          flag = api.NullableStringAdapter.fromJson_p35aje$(reader, customScalarAdapters);
          break;
        default:break;
      }
    }
    return new FragmentCallingCode(ensureNotNull(id), value, description, key, flag);
  };
  FragmentCallingCodeImpl_ResponseAdapter$FragmentCallingCode.prototype.toJson_dotswr$ = function (writer, customScalarAdapters, value) {
    writer.name_61zpoe$('id');
    api.StringAdapter.toJson_dotswr$(writer, customScalarAdapters, value.id);
    writer.name_61zpoe$('value');
    api.NullableStringAdapter.toJson_dotswr$(writer, customScalarAdapters, value.value);
    writer.name_61zpoe$('description');
    api.NullableStringAdapter.toJson_dotswr$(writer, customScalarAdapters, value.description);
    writer.name_61zpoe$('key');
    api.NullableStringAdapter.toJson_dotswr$(writer, customScalarAdapters, value.key);
    writer.name_61zpoe$('flag');
    api.NullableStringAdapter.toJson_dotswr$(writer, customScalarAdapters, value.flag);
  };
  FragmentCallingCodeImpl_ResponseAdapter$FragmentCallingCode.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'FragmentCallingCode',
    interfaces: [Adapter]
  };
  var FragmentCallingCodeImpl_ResponseAdapter$FragmentCallingCode_instance = null;
  function FragmentCallingCodeImpl_ResponseAdapter$FragmentCallingCode_getInstance() {
    if (FragmentCallingCodeImpl_ResponseAdapter$FragmentCallingCode_instance === null) {
      new FragmentCallingCodeImpl_ResponseAdapter$FragmentCallingCode();
    }return FragmentCallingCodeImpl_ResponseAdapter$FragmentCallingCode_instance;
  }
  FragmentCallingCodeImpl_ResponseAdapter.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'FragmentCallingCodeImpl_ResponseAdapter',
    interfaces: []
  };
  var FragmentCallingCodeImpl_ResponseAdapter_instance = null;
  function FragmentCallingCodeImpl_ResponseAdapter_getInstance() {
    if (FragmentCallingCodeImpl_ResponseAdapter_instance === null) {
      new FragmentCallingCodeImpl_ResponseAdapter();
    }return FragmentCallingCodeImpl_ResponseAdapter_instance;
  }
  function FragmentLanguage(id, value, description, key) {
    this.id = id;
    this.value = value;
    this.description = description;
    this.key = key;
  }
  FragmentLanguage.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'FragmentLanguage',
    interfaces: [Fragment$Data]
  };
  FragmentLanguage.prototype.component1 = function () {
    return this.id;
  };
  FragmentLanguage.prototype.component2 = function () {
    return this.value;
  };
  FragmentLanguage.prototype.component3 = function () {
    return this.description;
  };
  FragmentLanguage.prototype.component4 = function () {
    return this.key;
  };
  FragmentLanguage.prototype.copy_dawjdb$ = function (id, value, description, key) {
    return new FragmentLanguage(id === void 0 ? this.id : id, value === void 0 ? this.value : value, description === void 0 ? this.description : description, key === void 0 ? this.key : key);
  };
  FragmentLanguage.prototype.toString = function () {
    return 'FragmentLanguage(id=' + Kotlin.toString(this.id) + (', value=' + Kotlin.toString(this.value)) + (', description=' + Kotlin.toString(this.description)) + (', key=' + Kotlin.toString(this.key)) + ')';
  };
  FragmentLanguage.prototype.hashCode = function () {
    var result = 0;
    result = result * 31 + Kotlin.hashCode(this.id) | 0;
    result = result * 31 + Kotlin.hashCode(this.value) | 0;
    result = result * 31 + Kotlin.hashCode(this.description) | 0;
    result = result * 31 + Kotlin.hashCode(this.key) | 0;
    return result;
  };
  FragmentLanguage.prototype.equals = function (other) {
    return this === other || (other !== null && (typeof other === 'object' && (Object.getPrototypeOf(this) === Object.getPrototypeOf(other) && (Kotlin.equals(this.id, other.id) && Kotlin.equals(this.value, other.value) && Kotlin.equals(this.description, other.description) && Kotlin.equals(this.key, other.key)))));
  };
  function FragmentLanguageImpl_ResponseAdapter() {
    FragmentLanguageImpl_ResponseAdapter_instance = this;
  }
  function FragmentLanguageImpl_ResponseAdapter$FragmentLanguage() {
    FragmentLanguageImpl_ResponseAdapter$FragmentLanguage_instance = this;
    this.RESPONSE_NAMES = listOf_0(['id', 'value', 'description', 'key']);
  }
  FragmentLanguageImpl_ResponseAdapter$FragmentLanguage.prototype.fromJson_p35aje$ = function (reader, customScalarAdapters) {
    var id = null;
    var value = null;
    var description = null;
    var key = null;
    while (true) {
      switch (reader.selectName_mhpeer$(this.RESPONSE_NAMES)) {
        case 0:
          id = api.StringAdapter.fromJson_p35aje$(reader, customScalarAdapters);
          break;
        case 1:
          value = api.NullableStringAdapter.fromJson_p35aje$(reader, customScalarAdapters);
          break;
        case 2:
          description = api.NullableStringAdapter.fromJson_p35aje$(reader, customScalarAdapters);
          break;
        case 3:
          key = api.NullableStringAdapter.fromJson_p35aje$(reader, customScalarAdapters);
          break;
        default:break;
      }
    }
    return new FragmentLanguage(ensureNotNull(id), value, description, key);
  };
  FragmentLanguageImpl_ResponseAdapter$FragmentLanguage.prototype.toJson_dotswr$ = function (writer, customScalarAdapters, value) {
    writer.name_61zpoe$('id');
    api.StringAdapter.toJson_dotswr$(writer, customScalarAdapters, value.id);
    writer.name_61zpoe$('value');
    api.NullableStringAdapter.toJson_dotswr$(writer, customScalarAdapters, value.value);
    writer.name_61zpoe$('description');
    api.NullableStringAdapter.toJson_dotswr$(writer, customScalarAdapters, value.description);
    writer.name_61zpoe$('key');
    api.NullableStringAdapter.toJson_dotswr$(writer, customScalarAdapters, value.key);
  };
  FragmentLanguageImpl_ResponseAdapter$FragmentLanguage.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'FragmentLanguage',
    interfaces: [Adapter]
  };
  var FragmentLanguageImpl_ResponseAdapter$FragmentLanguage_instance = null;
  function FragmentLanguageImpl_ResponseAdapter$FragmentLanguage_getInstance() {
    if (FragmentLanguageImpl_ResponseAdapter$FragmentLanguage_instance === null) {
      new FragmentLanguageImpl_ResponseAdapter$FragmentLanguage();
    }return FragmentLanguageImpl_ResponseAdapter$FragmentLanguage_instance;
  }
  FragmentLanguageImpl_ResponseAdapter.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'FragmentLanguageImpl_ResponseAdapter',
    interfaces: []
  };
  var FragmentLanguageImpl_ResponseAdapter_instance = null;
  function FragmentLanguageImpl_ResponseAdapter_getInstance() {
    if (FragmentLanguageImpl_ResponseAdapter_instance === null) {
      new FragmentLanguageImpl_ResponseAdapter();
    }return FragmentLanguageImpl_ResponseAdapter_instance;
  }
  function fragmentCallingCodeSelections() {
    fragmentCallingCodeSelections_instance = this;
    this.root = listOf_0([(new CompiledField$Builder('id', notNull(api.CompiledIDType))).build(), (new CompiledField$Builder('value', api.CompiledStringType)).build(), (new CompiledField$Builder('description', api.CompiledStringType)).build(), (new CompiledField$Builder('key', api.CompiledStringType)).build(), (new CompiledField$Builder('flag', api.CompiledStringType)).build()]);
  }
  fragmentCallingCodeSelections.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'fragmentCallingCodeSelections',
    interfaces: []
  };
  var fragmentCallingCodeSelections_instance = null;
  function fragmentCallingCodeSelections_getInstance() {
    if (fragmentCallingCodeSelections_instance === null) {
      new fragmentCallingCodeSelections();
    }return fragmentCallingCodeSelections_instance;
  }
  function fragmentLanguageSelections() {
    fragmentLanguageSelections_instance = this;
    this.root = listOf_0([(new CompiledField$Builder('id', notNull(api.CompiledIDType))).build(), (new CompiledField$Builder('value', api.CompiledStringType)).build(), (new CompiledField$Builder('description', api.CompiledStringType)).build(), (new CompiledField$Builder('key', api.CompiledStringType)).build()]);
  }
  fragmentLanguageSelections.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'fragmentLanguageSelections',
    interfaces: []
  };
  var fragmentLanguageSelections_instance = null;
  function fragmentLanguageSelections_getInstance() {
    if (fragmentLanguageSelections_instance === null) {
      new fragmentLanguageSelections();
    }return fragmentLanguageSelections_instance;
  }
  function CallingCodesQuerySelections() {
    CallingCodesQuerySelections_instance = this;
    this.data_0 = listOf_0([(new CompiledField$Builder('__typename', notNull(api.CompiledStringType))).build(), (new CompiledFragment$Builder('CallingCode', listOf('CallingCode'))).selections_xxmmyd$(fragmentCallingCodeSelections_getInstance().root).build()]);
    this.calling_codes_0 = listOf((new CompiledField$Builder('data', notNull(list_0(notNull(CallingCode$Companion_getInstance().type))))).selections_xxmmyd$(this.data_0).build());
    this.root = listOf((new CompiledField$Builder('calling_codes', CallingCodePaginator$Companion_getInstance().type)).arguments_r3pxoi$(listOf_0([new CompiledArgument('first', 50), new CompiledArgument('listingShareCodes', false), new CompiledArgument('loginCodes', true), new CompiledArgument('page', 1)])).selections_xxmmyd$(this.calling_codes_0).build());
  }
  CallingCodesQuerySelections.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'CallingCodesQuerySelections',
    interfaces: []
  };
  var CallingCodesQuerySelections_instance = null;
  function CallingCodesQuerySelections_getInstance() {
    if (CallingCodesQuerySelections_instance === null) {
      new CallingCodesQuerySelections();
    }return CallingCodesQuerySelections_instance;
  }
  function LanguagesQuerySelections() {
    LanguagesQuerySelections_instance = this;
    this.data_0 = listOf_0([(new CompiledField$Builder('__typename', notNull(api.CompiledStringType))).build(), (new CompiledFragment$Builder('Language', listOf('Language'))).selections_xxmmyd$(fragmentLanguageSelections_getInstance().root).build()]);
    this.languages_0 = listOf((new CompiledField$Builder('data', notNull(list_0(notNull(Language$Companion_getInstance().type))))).selections_xxmmyd$(this.data_0).build());
    this.root = listOf((new CompiledField$Builder('languages', LanguagePaginator$Companion_getInstance().type)).arguments_r3pxoi$(listOf_0([new CompiledArgument('first', 50), new CompiledArgument('page', 1)])).selections_xxmmyd$(this.languages_0).build());
  }
  LanguagesQuerySelections.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'LanguagesQuerySelections',
    interfaces: []
  };
  var LanguagesQuerySelections_instance = null;
  function LanguagesQuerySelections_getInstance() {
    if (LanguagesQuerySelections_instance === null) {
      new LanguagesQuerySelections();
    }return LanguagesQuerySelections_instance;
  }
  function CallingCode() {
    CallingCode$Companion_getInstance();
  }
  function CallingCode$Companion() {
    CallingCode$Companion_instance = this;
    this.type = new ObjectType('CallingCode');
  }
  CallingCode$Companion.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'Companion',
    interfaces: []
  };
  var CallingCode$Companion_instance = null;
  function CallingCode$Companion_getInstance() {
    if (CallingCode$Companion_instance === null) {
      new CallingCode$Companion();
    }return CallingCode$Companion_instance;
  }
  CallingCode.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'CallingCode',
    interfaces: []
  };
  function CallingCodePaginator() {
    CallingCodePaginator$Companion_getInstance();
  }
  function CallingCodePaginator$Companion() {
    CallingCodePaginator$Companion_instance = this;
    this.type = new ObjectType('CallingCodePaginator');
  }
  CallingCodePaginator$Companion.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'Companion',
    interfaces: []
  };
  var CallingCodePaginator$Companion_instance = null;
  function CallingCodePaginator$Companion_getInstance() {
    if (CallingCodePaginator$Companion_instance === null) {
      new CallingCodePaginator$Companion();
    }return CallingCodePaginator$Companion_instance;
  }
  CallingCodePaginator.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'CallingCodePaginator',
    interfaces: []
  };
  function Language() {
    Language$Companion_getInstance();
  }
  function Language$Companion() {
    Language$Companion_instance = this;
    this.type = new ObjectType('Language');
  }
  Language$Companion.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'Companion',
    interfaces: []
  };
  var Language$Companion_instance = null;
  function Language$Companion_getInstance() {
    if (Language$Companion_instance === null) {
      new Language$Companion();
    }return Language$Companion_instance;
  }
  Language.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'Language',
    interfaces: []
  };
  function LanguagePaginator() {
    LanguagePaginator$Companion_getInstance();
  }
  function LanguagePaginator$Companion() {
    LanguagePaginator$Companion_instance = this;
    this.type = new ObjectType('LanguagePaginator');
  }
  LanguagePaginator$Companion.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'Companion',
    interfaces: []
  };
  var LanguagePaginator$Companion_instance = null;
  function LanguagePaginator$Companion_getInstance() {
    if (LanguagePaginator$Companion_instance === null) {
      new LanguagePaginator$Companion();
    }return LanguagePaginator$Companion_instance;
  }
  LanguagePaginator.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'LanguagePaginator',
    interfaces: []
  };
  function Query_0() {
    Query$Companion_getInstance();
  }
  function Query$Companion() {
    Query$Companion_instance = this;
    this.type = new ObjectType('Query');
  }
  Query$Companion.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'Companion',
    interfaces: []
  };
  var Query$Companion_instance = null;
  function Query$Companion_getInstance() {
    if (Query$Companion_instance === null) {
      new Query$Companion();
    }return Query$Companion_instance;
  }
  Query_0.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'Query',
    interfaces: []
  };
  function AuthorizationInterceptor() {
  }
  AuthorizationInterceptor.prototype.intercept_34umnn$ = function (request, chain, continuation) {
    var token = 'eyJ0eXAiOiJKV1QiLCJhbGciOiJSUzI1NiJ9.eyJhdWQiOiI0IiwianRpIjoiMTQwOGQ5N2U2ZjMwMzlhODFiM2FkOGIwNmU4NThkYWExYjg3NzYwNTE3ZGJiOGRiNjUxYTVkMDQ3OTBkNmNiY2E0MTRmNWFkMDZmYjZhNDIiLCJpYXQiOjE2NDI5NzIzNDEuNDM1OTkzLCJuYmYiOjE2NDI5NzIzNDEuNDM1OTk3LCJleHAiOjE2NDU2NTA3NDEuMzM4MjkxLCJzdWIiOiIxMTM1NjMiLCJzY29wZXMiOltdfQ.gJdHX60LjPTTIQ2hTgfmh5P9HBeNtioV_h5PFaTPZC9icNoYfHjEw6L__yLKA5TE3vWYT-K2C1JVjJv_UO09kDH5v01uMiHquZxXyuDPldpzjC98M8VSHW-IejAZdwp9YOAmVNk6tB3i3Ns6BKJspO7qJrYGD4S48gTND0-4zK5oSvJjTalaFApA_aB2fNuyS_k2E05mo3SMLB-rf3Qrmi9vf9HXX1Xas4znOR6q7BIcBD7PSZKF1Cx5rH5F_mtIJuIsQWCLMn_7YnS6zZlrpWb5DtKGZRVF8EB5smE2wCBfoVS_C9DL_X44EaIsJPw9FbqG9mHIBpGCrDS9R6xyNG8o3DCijp7O1cZFm03a_eNZFi0UMtMorTKfR-iEbIO6gPR-8F_CqBbpTSMToQKTwmt60WbZ9vIt9qcQK5SwwmD08IAoX-htBXKAMmix_P9xe8L80wlys_ExC1sqIE5AAT_c741VESjwf5LOIYFvPPxgPd3PfIWB35F4Vi4b4_fzdeC4acsUD8uvzJHBG3LaogjrTe0RMI5pgpKSgqCn-KXqgtfQ-Oe9sGFWTZT1JdYgOl-zSidt631uUOafOpSxRhEdoV_rdM03HEc6AnGn5DMuOM6uLY3WIaPvXXeMIWYAlF6W0DFyTuv8ts9MRhO8HylW5UrXvIi5v1VXMHiRg4w';
    return chain.proceed_4llsdc$(request.newBuilder().addHeader_puj7f4$('Authorization', 'Bearer eyJ0eXAiOiJKV1QiLCJhbGciOiJSUzI1NiJ9.eyJhdWQiOiI0IiwianRpIjoiMTQwOGQ5N2U2ZjMwMzlhODFiM2FkOGIwNmU4NThkYWExYjg3NzYwNTE3ZGJiOGRiNjUxYTVkMDQ3OTBkNmNiY2E0MTRmNWFkMDZmYjZhNDIiLCJpYXQiOjE2NDI5NzIzNDEuNDM1OTkzLCJuYmYiOjE2NDI5NzIzNDEuNDM1OTk3LCJleHAiOjE2NDU2NTA3NDEuMzM4MjkxLCJzdWIiOiIxMTM1NjMiLCJzY29wZXMiOltdfQ.gJdHX60LjPTTIQ2hTgfmh5P9HBeNtioV_h5PFaTPZC9icNoYfHjEw6L__yLKA5TE3vWYT-K2C1JVjJv_UO09kDH5v01uMiHquZxXyuDPldpzjC98M8VSHW-IejAZdwp9YOAmVNk6tB3i3Ns6BKJspO7qJrYGD4S48gTND0-4zK5oSvJjTalaFApA_aB2fNuyS_k2E05mo3SMLB-rf3Qrmi9vf9HXX1Xas4znOR6q7BIcBD7PSZKF1Cx5rH5F_mtIJuIsQWCLMn_7YnS6zZlrpWb5DtKGZRVF8EB5smE2wCBfoVS_C9DL_X44EaIsJPw9FbqG9mHIBpGCrDS9R6xyNG8o3DCijp7O1cZFm03a_eNZFi0UMtMorTKfR-iEbIO6gPR-8F_CqBbpTSMToQKTwmt60WbZ9vIt9qcQK5SwwmD08IAoX-htBXKAMmix_P9xe8L80wlys_ExC1sqIE5AAT_c741VESjwf5LOIYFvPPxgPd3PfIWB35F4Vi4b4_fzdeC4acsUD8uvzJHBG3LaogjrTe0RMI5pgpKSgqCn-KXqgtfQ-Oe9sGFWTZT1JdYgOl-zSidt631uUOafOpSxRhEdoV_rdM03HEc6AnGn5DMuOM6uLY3WIaPvXXeMIWYAlF6W0DFyTuv8ts9MRhO8HylW5UrXvIi5v1VXMHiRg4w').build(), continuation);
  };
  AuthorizationInterceptor.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'AuthorizationInterceptor',
    interfaces: [HttpInterceptor]
  };
  function BaseService() {
    this.graphQLNetwork_2ddb6g$_0 = new GraphQLNetwork();
    this.scope = CoroutineScope(MainLoopDispatcher_getInstance());
  }
  BaseService.prototype.getApolloClient_bsryy1$_0 = function () {
    return this.graphQLNetwork_2ddb6g$_0.getApolloClient_8be2vx$();
  };
  BaseService.prototype.executeQuery_gcwhr2$ = function (query, continuation) {
    return this.getApolloClient_bsryy1$_0().query_gcwhr2$(query).execute(continuation);
  };
  BaseService.prototype.checkResponse_oejs10$ = function (response) {
    if (response.errors != null && response.data == null) {
      return false;
    }if (response.data == null) {
      return false;
    }return true;
  };
  BaseService.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'BaseService',
    interfaces: []
  };
  function GraphQLNetwork() {
    this.instance_puuckf$_0 = null;
  }
  GraphQLNetwork.prototype.getApolloClient_8be2vx$ = function () {
    if (this.instance_puuckf$_0 != null) {
      return ensureNotNull(this.instance_puuckf$_0);
    }this.instance_puuckf$_0 = (new ApolloClient$Builder()).serverUrl_61zpoe$('https://zeus.fizbot.net/graphql').addHttpInterceptor_g5b40u$(new AuthorizationInterceptor()).build();
    return ensureNotNull(this.instance_puuckf$_0);
  };
  GraphQLNetwork.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'GraphQLNetwork',
    interfaces: []
  };
  function MainLoopDispatcher() {
    MainLoopDispatcher_instance = this;
    CoroutineDispatcher.call(this);
  }
  MainLoopDispatcher.prototype.dispatch_5bn72i$ = function (context, block) {
    block.run();
  };
  MainLoopDispatcher.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'MainLoopDispatcher',
    interfaces: [CoroutineDispatcher]
  };
  var MainLoopDispatcher_instance = null;
  function MainLoopDispatcher_getInstance() {
    if (MainLoopDispatcher_instance === null) {
      new MainLoopDispatcher();
    }return MainLoopDispatcher_instance;
  }
  function ResponseType(name, ordinal) {
    Enum.call(this);
    this.name$ = name;
    this.ordinal$ = ordinal;
  }
  function ResponseType_initFields() {
    ResponseType_initFields = function () {
    };
    ResponseType$Success_instance = new ResponseType('Success', 0);
    ResponseType$Error_instance = new ResponseType('Error', 1);
  }
  var ResponseType$Success_instance;
  function ResponseType$Success_getInstance() {
    ResponseType_initFields();
    return ResponseType$Success_instance;
  }
  var ResponseType$Error_instance;
  function ResponseType$Error_getInstance() {
    ResponseType_initFields();
    return ResponseType$Error_instance;
  }
  ResponseType.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'ResponseType',
    interfaces: [Enum]
  };
  function ResponseType$values() {
    return [ResponseType$Success_getInstance(), ResponseType$Error_getInstance()];
  }
  ResponseType.values = ResponseType$values;
  function ResponseType$valueOf(name) {
    switch (name) {
      case 'Success':
        return ResponseType$Success_getInstance();
      case 'Error':
        return ResponseType$Error_getInstance();
      default:throwISE('No enum constant com.makswin.bifrost.enums.ResponseType.' + name);
    }
  }
  ResponseType.valueOf_61zpoe$ = ResponseType$valueOf;
  function CallingCode_0(id, countryCode, countryName, flag, value) {
    if (id === void 0)
      id = -1;
    if (countryCode === void 0)
      countryCode = '';
    if (countryName === void 0)
      countryName = '';
    if (flag === void 0)
      flag = '';
    if (value === void 0)
      value = '';
    this.id = id;
    this.countryCode = countryCode;
    this.countryName = countryName;
    this.flag = flag;
    this.value = value;
  }
  CallingCode_0.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'CallingCode',
    interfaces: []
  };
  function CallingCode_init(data, $this) {
    $this = $this || Object.create(CallingCode_0.prototype);
    CallingCode_0.call($this);
    var tmp$, tmp$_0, tmp$_1, tmp$_2, tmp$_3, tmp$_4;
    $this.id = (tmp$_0 = (tmp$ = data != null ? data.id : null) != null ? toInt(tmp$) : null) != null ? tmp$_0 : -1;
    $this.countryCode = (tmp$_1 = data != null ? data.value : null) != null ? tmp$_1 : '';
    $this.countryName = (tmp$_2 = data != null ? data.description : null) != null ? tmp$_2 : '';
    $this.value = (tmp$_3 = data != null ? data.key : null) != null ? tmp$_3 : '';
    $this.flag = (tmp$_4 = data != null ? data.flag : null) != null ? tmp$_4 : '';
    return $this;
  }
  CallingCode_0.prototype.component1 = function () {
    return this.id;
  };
  CallingCode_0.prototype.component2 = function () {
    return this.countryCode;
  };
  CallingCode_0.prototype.component3 = function () {
    return this.countryName;
  };
  CallingCode_0.prototype.component4 = function () {
    return this.flag;
  };
  CallingCode_0.prototype.component5 = function () {
    return this.value;
  };
  CallingCode_0.prototype.copy_fcibhm$ = function (id, countryCode, countryName, flag, value) {
    return new CallingCode_0(id === void 0 ? this.id : id, countryCode === void 0 ? this.countryCode : countryCode, countryName === void 0 ? this.countryName : countryName, flag === void 0 ? this.flag : flag, value === void 0 ? this.value : value);
  };
  CallingCode_0.prototype.toString = function () {
    return 'CallingCode(id=' + Kotlin.toString(this.id) + (', countryCode=' + Kotlin.toString(this.countryCode)) + (', countryName=' + Kotlin.toString(this.countryName)) + (', flag=' + Kotlin.toString(this.flag)) + (', value=' + Kotlin.toString(this.value)) + ')';
  };
  CallingCode_0.prototype.hashCode = function () {
    var result = 0;
    result = result * 31 + Kotlin.hashCode(this.id) | 0;
    result = result * 31 + Kotlin.hashCode(this.countryCode) | 0;
    result = result * 31 + Kotlin.hashCode(this.countryName) | 0;
    result = result * 31 + Kotlin.hashCode(this.flag) | 0;
    result = result * 31 + Kotlin.hashCode(this.value) | 0;
    return result;
  };
  CallingCode_0.prototype.equals = function (other) {
    return this === other || (other !== null && (typeof other === 'object' && (Object.getPrototypeOf(this) === Object.getPrototypeOf(other) && (Kotlin.equals(this.id, other.id) && Kotlin.equals(this.countryCode, other.countryCode) && Kotlin.equals(this.countryName, other.countryName) && Kotlin.equals(this.flag, other.flag) && Kotlin.equals(this.value, other.value)))));
  };
  function Language_0(id, value, description, key) {
    if (id === void 0)
      id = -1;
    if (value === void 0)
      value = '';
    if (description === void 0)
      description = '';
    if (key === void 0)
      key = '';
    this.id = id;
    this.value = value;
    this.description = description;
    this.key = key;
  }
  Language_0.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'Language',
    interfaces: []
  };
  function Language_init(data, $this) {
    $this = $this || Object.create(Language_0.prototype);
    Language_0.call($this);
    var tmp$, tmp$_0, tmp$_1, tmp$_2, tmp$_3;
    $this.id = (tmp$_0 = (tmp$ = data != null ? data.id : null) != null ? toInt(tmp$) : null) != null ? tmp$_0 : -1;
    $this.value = (tmp$_1 = data != null ? data.value : null) != null ? tmp$_1 : '';
    $this.description = (tmp$_2 = data != null ? data.description : null) != null ? tmp$_2 : '';
    $this.key = (tmp$_3 = data != null ? data.key : null) != null ? tmp$_3 : '';
    return $this;
  }
  Language_0.prototype.component1 = function () {
    return this.id;
  };
  Language_0.prototype.component2 = function () {
    return this.value;
  };
  Language_0.prototype.component3 = function () {
    return this.description;
  };
  Language_0.prototype.component4 = function () {
    return this.key;
  };
  Language_0.prototype.copy_cgs6fs$ = function (id, value, description, key) {
    return new Language_0(id === void 0 ? this.id : id, value === void 0 ? this.value : value, description === void 0 ? this.description : description, key === void 0 ? this.key : key);
  };
  Language_0.prototype.toString = function () {
    return 'Language(id=' + Kotlin.toString(this.id) + (', value=' + Kotlin.toString(this.value)) + (', description=' + Kotlin.toString(this.description)) + (', key=' + Kotlin.toString(this.key)) + ')';
  };
  Language_0.prototype.hashCode = function () {
    var result = 0;
    result = result * 31 + Kotlin.hashCode(this.id) | 0;
    result = result * 31 + Kotlin.hashCode(this.value) | 0;
    result = result * 31 + Kotlin.hashCode(this.description) | 0;
    result = result * 31 + Kotlin.hashCode(this.key) | 0;
    return result;
  };
  Language_0.prototype.equals = function (other) {
    return this === other || (other !== null && (typeof other === 'object' && (Object.getPrototypeOf(this) === Object.getPrototypeOf(other) && (Kotlin.equals(this.id, other.id) && Kotlin.equals(this.value, other.value) && Kotlin.equals(this.description, other.description) && Kotlin.equals(this.key, other.key)))));
  };
  function MiscService() {
    BaseService.call(this);
  }
  function Coroutine$MiscService$getCallingCodes$lambda(this$MiscService_0, closure$completion_0, $receiver_0, controller, continuation_0) {
    CoroutineImpl.call(this, continuation_0);
    this.$controller = controller;
    this.exceptionState_0 = 1;
    this.local$this$MiscService = this$MiscService_0;
    this.local$closure$completion = closure$completion_0;
    this.local$response = void 0;
  }
  Coroutine$MiscService$getCallingCodes$lambda.$metadata$ = {
    kind: Kotlin.Kind.CLASS,
    simpleName: null,
    interfaces: [CoroutineImpl]
  };
  Coroutine$MiscService$getCallingCodes$lambda.prototype = Object.create(CoroutineImpl.prototype);
  Coroutine$MiscService$getCallingCodes$lambda.prototype.constructor = Coroutine$MiscService$getCallingCodes$lambda;
  Coroutine$MiscService$getCallingCodes$lambda.prototype.doResume = function () {
    do
      try {
        switch (this.state_0) {
          case 0:
            var tmp$, tmp$_0, tmp$_1;
            this.state_0 = 2;
            this.result_0 = this.local$this$MiscService.executeQuery_gcwhr2$(new CallingCodesQuery(), this);
            if (this.result_0 === COROUTINE_SUSPENDED)
              return COROUTINE_SUSPENDED;
            continue;
          case 1:
            throw this.exception_0;
          case 2:
            this.local$response = this.result_0;
            if (!this.local$this$MiscService.checkResponse_oejs10$(this.local$response)) {
              this.local$closure$completion(ResponseType$Error_getInstance(), emptyList());
              return;
            } else {
              this.state_0 = 3;
              continue;
            }

          case 3:
            var data = ArrayList_init();
            if ((tmp$_1 = (tmp$_0 = (tmp$ = this.local$response.data) != null ? tmp$.calling_codes : null) != null ? tmp$_0.data : null) != null) {
              var tmp$_2;
              tmp$_2 = tmp$_1.iterator();
              while (tmp$_2.hasNext()) {
                var element = tmp$_2.next();
                data.add_11rb$(CallingCode_init(element.fragmentCallingCode));
              }
            }
            return this.local$closure$completion(ResponseType$Success_getInstance(), data);
          default:this.state_0 = 1;
            throw new Error('State Machine Unreachable execution');
        }
      } catch (e) {
        if (this.state_0 === 1) {
          this.exceptionState_0 = this.state_0;
          throw e;
        } else {
          this.state_0 = this.exceptionState_0;
          this.exception_0 = e;
        }
      }
     while (true);
  };
  function MiscService$getCallingCodes$lambda(this$MiscService_0, closure$completion_0) {
    return function ($receiver_0, continuation_0, suspended) {
      var instance = new Coroutine$MiscService$getCallingCodes$lambda(this$MiscService_0, closure$completion_0, $receiver_0, this, continuation_0);
      if (suspended)
        return instance;
      else
        return instance.doResume(null);
    };
  }
  MiscService.prototype.getCallingCodes_jhchy8$ = function (completion) {
    launch(this.scope, void 0, void 0, MiscService$getCallingCodes$lambda(this, completion));
  };
  function Coroutine$MiscService$getLanguages$lambda(this$MiscService_0, closure$completion_0, $receiver_0, controller, continuation_0) {
    CoroutineImpl.call(this, continuation_0);
    this.$controller = controller;
    this.exceptionState_0 = 1;
    this.local$this$MiscService = this$MiscService_0;
    this.local$closure$completion = closure$completion_0;
    this.local$response = void 0;
  }
  Coroutine$MiscService$getLanguages$lambda.$metadata$ = {
    kind: Kotlin.Kind.CLASS,
    simpleName: null,
    interfaces: [CoroutineImpl]
  };
  Coroutine$MiscService$getLanguages$lambda.prototype = Object.create(CoroutineImpl.prototype);
  Coroutine$MiscService$getLanguages$lambda.prototype.constructor = Coroutine$MiscService$getLanguages$lambda;
  Coroutine$MiscService$getLanguages$lambda.prototype.doResume = function () {
    do
      try {
        switch (this.state_0) {
          case 0:
            var tmp$, tmp$_0, tmp$_1;
            this.state_0 = 2;
            this.result_0 = this.local$this$MiscService.executeQuery_gcwhr2$(new LanguagesQuery(), this);
            if (this.result_0 === COROUTINE_SUSPENDED)
              return COROUTINE_SUSPENDED;
            continue;
          case 1:
            throw this.exception_0;
          case 2:
            this.local$response = this.result_0;
            if (!this.local$this$MiscService.checkResponse_oejs10$(this.local$response)) {
              this.local$closure$completion(ResponseType$Error_getInstance(), emptyList());
              return;
            } else {
              this.state_0 = 3;
              continue;
            }

          case 3:
            var data = ArrayList_init();
            if ((tmp$_1 = (tmp$_0 = (tmp$ = this.local$response.data) != null ? tmp$.languages : null) != null ? tmp$_0.data : null) != null) {
              var tmp$_2;
              tmp$_2 = tmp$_1.iterator();
              while (tmp$_2.hasNext()) {
                var element = tmp$_2.next();
                data.add_11rb$(Language_init(element.fragmentLanguage));
              }
            }
            return this.local$closure$completion(ResponseType$Success_getInstance(), data);
          default:this.state_0 = 1;
            throw new Error('State Machine Unreachable execution');
        }
      } catch (e) {
        if (this.state_0 === 1) {
          this.exceptionState_0 = this.state_0;
          throw e;
        } else {
          this.state_0 = this.exceptionState_0;
          this.exception_0 = e;
        }
      }
     while (true);
  };
  function MiscService$getLanguages$lambda(this$MiscService_0, closure$completion_0) {
    return function ($receiver_0, continuation_0, suspended) {
      var instance = new Coroutine$MiscService$getLanguages$lambda(this$MiscService_0, closure$completion_0, $receiver_0, this, continuation_0);
      if (suspended)
        return instance;
      else
        return instance.doResume(null);
    };
  }
  MiscService.prototype.getLanguages_xems39$ = function (completion) {
    launch(this.scope, void 0, void 0, MiscService$getLanguages$lambda(this, completion));
  };
  MiscService.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'MiscService',
    interfaces: [BaseService]
  };
  CallingCodesQuery.Data = CallingCodesQuery$Data;
  CallingCodesQuery.Calling_codes = CallingCodesQuery$Calling_codes;
  CallingCodesQuery.Data1 = CallingCodesQuery$Data1;
  Object.defineProperty(CallingCodesQuery, 'Companion', {
    get: CallingCodesQuery$Companion_getInstance
  });
  var package$com = _.com || (_.com = {});
  var package$makswin = package$com.makswin || (package$com.makswin = {});
  var package$fizbot = package$makswin.fizbot || (package$makswin.fizbot = {});
  package$fizbot.CallingCodesQuery = CallingCodesQuery;
  LanguagesQuery.Data = LanguagesQuery$Data;
  LanguagesQuery.Languages = LanguagesQuery$Languages;
  LanguagesQuery.Data1 = LanguagesQuery$Data1;
  Object.defineProperty(LanguagesQuery, 'Companion', {
    get: LanguagesQuery$Companion_getInstance
  });
  package$fizbot.LanguagesQuery = LanguagesQuery;
  Object.defineProperty(CallingCodesQuery_ResponseAdapter.prototype, 'Data', {
    get: CallingCodesQuery_ResponseAdapter$Data_getInstance
  });
  Object.defineProperty(CallingCodesQuery_ResponseAdapter.prototype, 'Calling_codes', {
    get: CallingCodesQuery_ResponseAdapter$Calling_codes_getInstance
  });
  Object.defineProperty(CallingCodesQuery_ResponseAdapter.prototype, 'Data1', {
    get: CallingCodesQuery_ResponseAdapter$Data1_getInstance
  });
  var package$adapter = package$fizbot.adapter || (package$fizbot.adapter = {});
  Object.defineProperty(package$adapter, 'CallingCodesQuery_ResponseAdapter', {
    get: CallingCodesQuery_ResponseAdapter_getInstance
  });
  Object.defineProperty(LanguagesQuery_ResponseAdapter.prototype, 'Data', {
    get: LanguagesQuery_ResponseAdapter$Data_getInstance
  });
  Object.defineProperty(LanguagesQuery_ResponseAdapter.prototype, 'Languages', {
    get: LanguagesQuery_ResponseAdapter$Languages_getInstance
  });
  Object.defineProperty(LanguagesQuery_ResponseAdapter.prototype, 'Data1', {
    get: LanguagesQuery_ResponseAdapter$Data1_getInstance
  });
  Object.defineProperty(package$adapter, 'LanguagesQuery_ResponseAdapter', {
    get: LanguagesQuery_ResponseAdapter_getInstance
  });
  var package$fragment = package$fizbot.fragment || (package$fizbot.fragment = {});
  package$fragment.FragmentCallingCode = FragmentCallingCode;
  Object.defineProperty(FragmentCallingCodeImpl_ResponseAdapter.prototype, 'FragmentCallingCode', {
    get: FragmentCallingCodeImpl_ResponseAdapter$FragmentCallingCode_getInstance
  });
  Object.defineProperty(package$fragment, 'FragmentCallingCodeImpl_ResponseAdapter', {
    get: FragmentCallingCodeImpl_ResponseAdapter_getInstance
  });
  package$fragment.FragmentLanguage = FragmentLanguage;
  Object.defineProperty(FragmentLanguageImpl_ResponseAdapter.prototype, 'FragmentLanguage', {
    get: FragmentLanguageImpl_ResponseAdapter$FragmentLanguage_getInstance
  });
  Object.defineProperty(package$fragment, 'FragmentLanguageImpl_ResponseAdapter', {
    get: FragmentLanguageImpl_ResponseAdapter_getInstance
  });
  var package$selections = package$fragment.selections || (package$fragment.selections = {});
  Object.defineProperty(package$selections, 'fragmentCallingCodeSelections', {
    get: fragmentCallingCodeSelections_getInstance
  });
  Object.defineProperty(package$selections, 'fragmentLanguageSelections', {
    get: fragmentLanguageSelections_getInstance
  });
  var package$selections_0 = package$fizbot.selections || (package$fizbot.selections = {});
  Object.defineProperty(package$selections_0, 'CallingCodesQuerySelections', {
    get: CallingCodesQuerySelections_getInstance
  });
  Object.defineProperty(package$selections_0, 'LanguagesQuerySelections', {
    get: LanguagesQuerySelections_getInstance
  });
  Object.defineProperty(CallingCode, 'Companion', {
    get: CallingCode$Companion_getInstance
  });
  var package$type = package$fizbot.type || (package$fizbot.type = {});
  package$type.CallingCode = CallingCode;
  Object.defineProperty(CallingCodePaginator, 'Companion', {
    get: CallingCodePaginator$Companion_getInstance
  });
  package$type.CallingCodePaginator = CallingCodePaginator;
  Object.defineProperty(Language, 'Companion', {
    get: Language$Companion_getInstance
  });
  package$type.Language = Language;
  Object.defineProperty(LanguagePaginator, 'Companion', {
    get: LanguagePaginator$Companion_getInstance
  });
  package$type.LanguagePaginator = LanguagePaginator;
  Object.defineProperty(Query_0, 'Companion', {
    get: Query$Companion_getInstance
  });
  package$type.Query = Query_0;
  var package$bifrost = package$makswin.bifrost || (package$makswin.bifrost = {});
  var package$core = package$bifrost.core || (package$bifrost.core = {});
  package$core.AuthorizationInterceptor = AuthorizationInterceptor;
  package$core.BaseService = BaseService;
  package$core.GraphQLNetwork = GraphQLNetwork;
  Object.defineProperty(package$core, 'MainLoopDispatcher', {
    get: MainLoopDispatcher_getInstance
  });
  Object.defineProperty(ResponseType, 'Success', {
    get: ResponseType$Success_getInstance
  });
  Object.defineProperty(ResponseType, 'Error', {
    get: ResponseType$Error_getInstance
  });
  var package$enums = package$bifrost.enums || (package$bifrost.enums = {});
  package$enums.ResponseType = ResponseType;
  var package$models = package$bifrost.models || (package$bifrost.models = {});
  package$models.CallingCode_init_ufsgl5$ = CallingCode_init;
  package$models.CallingCode = CallingCode_0;
  package$models.Language_init_b6k38c$ = Language_init;
  package$models.Language = Language_0;
  var package$services = package$bifrost.services || (package$bifrost.services = {});
  package$services.MiscService = MiscService;
  AuthorizationInterceptor.prototype.dispose = HttpInterceptor.prototype.dispose;
  Kotlin.defineModule('shared', _);
  return _;
}));

//# sourceMappingURL=shared.js.map
