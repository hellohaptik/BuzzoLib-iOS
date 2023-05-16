#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.2 (swiftlang-5.7.2.135.5 clang-1400.0.29.51)
#ifndef HAPTIKCOMMERCE_SWIFT_H
#define HAPTIKCOMMERCE_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="HaptikCommerce",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
/// Describes Speech To Text ARS mode
typedef SWIFT_ENUM(NSInteger, ASRMode, open) {
  ASRModeAppleNative = 0,
  ASRModeReverieASR = 1,
};

@class NSString;
enum HPLanguage : NSInteger;
enum HPSpeechMode : NSInteger;
enum TTSMode : NSInteger;
enum TTSVoice : NSInteger;
enum TTSVoiceType : NSInteger;

/// Helps to build and configure IVA
/// <h2>Swift Code</h2>
/// \code
/// // Create an object of HPAttributesBuilder, and set properties
/// let attributes  =    HPAttributesBuilder.build { (builder) in
///     builder.category        = "grocery"
///     builder.customerID      = "12345"
///     builder.sessionID       = "SPI234567V2"
///     builder.pincode         = "411037"
///     builder.sourceController = "SPI234567V2"
///    }
///
/// \endcode<h2>Objective-C Code</h2>
/// \code
/// // Create an object of HPAttributesBuilder, and set properties
/// HPAttributesBuilder* builder = [HPAttributesBuilder buildWithData:^(HPAttributesBuilder *builder _Nonnull) {
/// builder.category        = @"grocery";
/// builder.customerID      = @"12345";
/// builder.sessionID       = @"SPI234567V2";
/// builder.pincode         = @"411037";
/// builder.sourceController = @"SPI234567V2";
/// }];
///
/// \endcode
SWIFT_CLASS("_TtC14HaptikCommerce27HPCommerceAttributesBuilder")
@interface HPCommerceAttributesBuilder : NSObject
/// This is the session id which corresponds to the Authtoken to be sent to the Master API when making cart related calls.
@property (nonatomic, copy) NSString * _Nonnull sessionID;
/// The activity from which SDK is to be called. This is in regards with android activity. iOS SDK may/may not require this parameter. This is not passed to the url.
@property (nonatomic, copy) NSString * _Nonnull sourceController;
/// The value for this parameter will depend upon the page the user invokes the haptik commerce IVA from.
/// important:
/// Its required property
@property (nonatomic, copy) NSString * _Nonnull category;
@property (nonatomic) BOOL abExperiment;
@property (nonatomic) enum ASRMode ASREngine;
@property (nonatomic, copy) NSString * _Nullable controllerUUID;
@property (nonatomic, copy) NSString * _Nullable posterDescription;
@property (nonatomic, copy) NSString * _Nullable posterID;
@property (nonatomic, copy) NSString * _Nullable posterTitle;
@property (nonatomic, copy) NSString * _Nullable cart;
@property (nonatomic, copy) NSString * _Nonnull customerID;
@property (nonatomic) BOOL debug;
@property (nonatomic, copy) NSString * _Nonnull geo;
@property (nonatomic) enum HPLanguage language;
@property (nonatomic, copy) NSString * _Nullable mode;
@property (nonatomic, copy) NSString * _Nullable pageTitle;
@property (nonatomic, copy) NSString * _Nullable pageType;
@property (nonatomic, copy) NSString * _Nonnull pincode;
@property (nonatomic, copy) NSString * _Nullable productID;
@property (nonatomic, copy) NSString * _Nullable productName;
@property (nonatomic, copy) NSString * _Nullable query;
@property (nonatomic) BOOL realTime;
@property (nonatomic) BOOL removeOptionBackground;
@property (nonatomic, copy) NSString * _Nullable searchCriteria;
@property (nonatomic) enum HPSpeechMode speak;
@property (nonatomic) BOOL storeApp;
@property (nonatomic, copy) NSString * _Nullable tags;
@property (nonatomic) enum TTSMode TTSEngine;
@property (nonatomic) enum TTSVoice TTSVoice;
@property (nonatomic) enum TTSVoiceType TTSVoiceType;
@property (nonatomic) BOOL voiceFirst;
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nonnull headers;
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nullable customQueryData;
/// Helper function to build IVA configuration
/// \param builderData provide instance to <code>HPAttributesBuilder</code> object
///
///
/// returns:
/// returns validated object to pass IVA launch function
+ (nonnull instancetype)buildWithData:(void (^ _Nonnull)(HPCommerceAttributesBuilder * _Nonnull))builderData SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSError;

/// External events are passed to the client application with some data so they can process this data. This data is passed forward as is.
SWIFT_PROTOCOL("_TtP14HaptikCommerce15HPExternalEvent_")
@protocol HPExternalEvent
/// Called when SDK want to forward  the event to client app to process
/// precondition:
/// Client app must confirm to <code>HPExternalEvent</code> protocol and set delegate object
/// \param eventData Event specific data
///
- (void)didReceiveHaptikEvent:(NSString * _Nonnull)eventData;
/// Called when exception occurs
/// \param error <code>Error</code> object explaining reason and recovery suggestion
///
- (void)didReceiveHaptikError:(NSError * _Nonnull)error;
@end

/// Haptik IVA  supported language
typedef SWIFT_ENUM(NSInteger, HPLanguage, open) {
  HPLanguageEnglishUK = 0,
  HPLanguageEnglishUS = 1,
  HPLanguageEnglishIN = 2,
  HPLanguageHindi = 3,
};

typedef SWIFT_ENUM(NSInteger, HPSpeechMode, open) {
  HPSpeechModeAlwaysOn = 0,
  HPSpeechModeAlwaysOff = 1,
  HPSpeechModeWhenSpokenTo = 2,
};


/// A shared instance of this object is automatically created and used to perform operation
/// <h2>Swift Code</h2>
/// \code
/// // Import HaptikCommerce SDK
/// import HaptikCommerce
///
/// // Create an object of HPAttributesBuilder, and set properties
/// let attributes  =    HPAttributesBuilder.build { (builder) in
///     builder.category        = "grocery"
///     builder.customerID      = "12345"
///     builder.sessionID       = "SPI234567V2"
///     builder.pincode         = "411037"
///     builder.sourceController = "SPI234567V2"
/// }
///
/// // Present Haptik Conversation screen
/// HaptikCommerceLib.sharedSDK.loadConversation(launchController: self, attributes: attributes)
/// HaptikCommerceLib.sharedSDK.delegate = self
///
/// \endcode<h2>Objective-C Code</h2>
/// \code
/// // Import HaptikCommerce SDK
/// #import <HaptikCommerce/HaptikCommerce.h>
/// #import <HaptikCommerce/HaptikCommerce-Swift.h>
///
/// // Create an object of HPAttributesBuilder, and set properties
/// HPAttributesBuilder* builder = [HPAttributesBuilder buildWithData:^(HPAttributesBuilder *builder _Nonnull) {
/// builder.category        = @"grocery";
/// builder.customerID      = @"12345";
/// builder.sessionID       = @"SPI234567V2";
/// builder.pincode         = @"411037";
/// builder.sourceController = @"SPI234567V2";
/// }];
///
/// // Present Haptik Conversation screen
/// [HaptikCommerceLib.sharedSDK loadConversationWithLaunchController:self attributes:builder];
///
/// \endcode
SWIFT_CLASS("_TtC14HaptikCommerce17HaptikCommerceLib")
@interface HaptikCommerceLib : NSObject
/// Returns the HaptikCommerce singleton object
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) HaptikCommerceLib * _Nonnull sharedSDK;)
+ (HaptikCommerceLib * _Nonnull)sharedSDK SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// An object of <code>HPExternalEvent</code> protocol.
/// attention:
/// client app must implement <code>HPExternalEvent</code> protocol and implement <code>func didReceieHaptikEvent(_ eventData : String)</code>
@property (nonatomic, strong) id <HPExternalEvent> _Nullable delegate;
@end


@class UIViewController;

@interface HaptikCommerceLib (SWIFT_EXTENSION(HaptikCommerce))
/// Take the user to your conversation using the unique viaName provided to you by Haptik.
/// It takes an instance of the current view controller and the attributes via <code>HPAttributesBuilder</code> object
/// <hr/>
/// <h2>Swift Code</h2>
/// \code
/// // Import HaptikCommerce SDK
/// import HaptikCommerce
///
/// // Create an object of HPAttributesBuilder, and set properties
/// let attributes  =    HPAttributesBuilder.build { (builder) in
///     builder.category        = "grocery"
///     builder.customerID      = "12345"
///     builder.sessionID       = "SPI234567V2"
///     builder.pincode         = "411037"
///     builder.sourceController = "SPI234567V2"
/// }
///
/// // Present Haptik Conversation screen
/// HaptikCommerceLib.sharedSDK.loadConversation(launchController: self, attributes: attributes)
/// HaptikCommerceLib.sharedSDK.delegate = self
///
/// \endcode<h2>Objective-C Code</h2>
/// \code
/// // Import HaptikCommerce SDK
/// #import <HaptikCommerce/HaptikCommerce.h>
/// #import <HaptikCommerce/HaptikCommerce-Swift.h>
///
/// // Create an object of HPAttributesBuilder, and set properties
/// HPAttributesBuilder* builder = [HPAttributesBuilder buildWithData:^(HPAttributesBuilder *builder _Nonnull) {
/// builder.category        = @"grocery";
/// builder.customerID      = @"12345";
/// builder.sessionID       = @"SPI234567V2";
/// builder.pincode         = @"411037";
/// builder.sourceController = @"SPI234567V2";
/// }];
///
/// // Present Haptik Conversation screen
/// [HaptikCommerce.sharedSDK loadConversationWithLaunchController:self attributes:builder];
///
/// \endcoderequires:
/// A basic understanding of Markdown.
/// seealso:
/// <code>Error</code>, for a description of the errors that can be thrown.
/// \param launchController The current view controller over which the chat is expected to be presented
///
/// \param attributes <code>HPAttributesBuilder</code> object containing configuration params for chat screen
///
- (void)loadConversationWithLaunchController:(UIViewController * _Nonnull)launchController attributes:(HPCommerceAttributesBuilder * _Nonnull)attributes;
/// Signouts the current user from Haptik.
/// Called after application user logged out.
- (void)unregister;
/// Send application event data to SDK.
/// Clients can pass some events to our SDK, the data must be in JSON format.
/// <h2>Swift Code</h2>
/// \code
/// // Form event data in `NSDictionary`
/// let eventData = [
///     "key1": "value1",
///     "key2": "value1"
/// ]
///     // Send Event to SDK
/// HaptikCommerceLib.sharedSDK.updateEventData(withEventName: "mySdkEvent", eventData: eventData)
///
/// \endcode<h2>Objective-C Code</h2>
/// \code
/// // Form event data in `NSDictionary`
/// NSDictionary *eventData = @{
///                             @"key1":@"value1",
///                             @"key2": @"value1"
///                             };
/// // Send Event to SDK
/// [HaptikCommerceLib.sharedSDK updateEventDataWithEventName:@"mySdkEvent" eventData:eventData];
///
/// \endcode\param eventName Event identifier name
///
/// \param eventData Event specific data to be passed in key value format
///
- (void)updateEventDataWithEventName:(NSString * _Nonnull)eventName eventData:(NSDictionary<NSString *, id> * _Nonnull)eventData;
@end

/// Describes Text To Speech modes
typedef SWIFT_ENUM(NSInteger, TTSMode, open) {
  TTSModeAppleNative = 0,
  TTSModeGoogleTTS = 1,
  TTSModeReverieTTS = 2,
};

/// Describes Text To Speech modes
typedef SWIFT_ENUM(NSInteger, TTSVoice, open) {
  TTSVoiceMale = 0,
  TTSVoiceFemale = 1,
};

/// TTS Voice options (Google)
typedef SWIFT_ENUM(NSInteger, TTSVoiceType, open) {
  TTSVoiceTypeStandard = 0,
  TTSVoiceTypeWavenet = 1,
};

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.7.2 (swiftlang-5.7.2.135.5 clang-1400.0.29.51)
#ifndef HAPTIKCOMMERCE_SWIFT_H
#define HAPTIKCOMMERCE_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="HaptikCommerce",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
/// Describes Speech To Text ARS mode
typedef SWIFT_ENUM(NSInteger, ASRMode, open) {
  ASRModeAppleNative = 0,
  ASRModeReverieASR = 1,
};

@class NSString;
enum HPLanguage : NSInteger;
enum HPSpeechMode : NSInteger;
enum TTSMode : NSInteger;
enum TTSVoice : NSInteger;
enum TTSVoiceType : NSInteger;

/// Helps to build and configure IVA
/// <h2>Swift Code</h2>
/// \code
/// // Create an object of HPAttributesBuilder, and set properties
/// let attributes  =    HPAttributesBuilder.build { (builder) in
///     builder.category        = "grocery"
///     builder.customerID      = "12345"
///     builder.sessionID       = "SPI234567V2"
///     builder.pincode         = "411037"
///     builder.sourceController = "SPI234567V2"
///    }
///
/// \endcode<h2>Objective-C Code</h2>
/// \code
/// // Create an object of HPAttributesBuilder, and set properties
/// HPAttributesBuilder* builder = [HPAttributesBuilder buildWithData:^(HPAttributesBuilder *builder _Nonnull) {
/// builder.category        = @"grocery";
/// builder.customerID      = @"12345";
/// builder.sessionID       = @"SPI234567V2";
/// builder.pincode         = @"411037";
/// builder.sourceController = @"SPI234567V2";
/// }];
///
/// \endcode
SWIFT_CLASS("_TtC14HaptikCommerce27HPCommerceAttributesBuilder")
@interface HPCommerceAttributesBuilder : NSObject
/// This is the session id which corresponds to the Authtoken to be sent to the Master API when making cart related calls.
@property (nonatomic, copy) NSString * _Nonnull sessionID;
/// The activity from which SDK is to be called. This is in regards with android activity. iOS SDK may/may not require this parameter. This is not passed to the url.
@property (nonatomic, copy) NSString * _Nonnull sourceController;
/// The value for this parameter will depend upon the page the user invokes the haptik commerce IVA from.
/// important:
/// Its required property
@property (nonatomic, copy) NSString * _Nonnull category;
@property (nonatomic) BOOL abExperiment;
@property (nonatomic) enum ASRMode ASREngine;
@property (nonatomic, copy) NSString * _Nullable controllerUUID;
@property (nonatomic, copy) NSString * _Nullable posterDescription;
@property (nonatomic, copy) NSString * _Nullable posterID;
@property (nonatomic, copy) NSString * _Nullable posterTitle;
@property (nonatomic, copy) NSString * _Nullable cart;
@property (nonatomic, copy) NSString * _Nonnull customerID;
@property (nonatomic) BOOL debug;
@property (nonatomic, copy) NSString * _Nonnull geo;
@property (nonatomic) enum HPLanguage language;
@property (nonatomic, copy) NSString * _Nullable mode;
@property (nonatomic, copy) NSString * _Nullable pageTitle;
@property (nonatomic, copy) NSString * _Nullable pageType;
@property (nonatomic, copy) NSString * _Nonnull pincode;
@property (nonatomic, copy) NSString * _Nullable productID;
@property (nonatomic, copy) NSString * _Nullable productName;
@property (nonatomic, copy) NSString * _Nullable query;
@property (nonatomic) BOOL realTime;
@property (nonatomic) BOOL removeOptionBackground;
@property (nonatomic, copy) NSString * _Nullable searchCriteria;
@property (nonatomic) enum HPSpeechMode speak;
@property (nonatomic) BOOL storeApp;
@property (nonatomic, copy) NSString * _Nullable tags;
@property (nonatomic) enum TTSMode TTSEngine;
@property (nonatomic) enum TTSVoice TTSVoice;
@property (nonatomic) enum TTSVoiceType TTSVoiceType;
@property (nonatomic) BOOL voiceFirst;
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nonnull headers;
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nullable customQueryData;
/// Helper function to build IVA configuration
/// \param builderData provide instance to <code>HPAttributesBuilder</code> object
///
///
/// returns:
/// returns validated object to pass IVA launch function
+ (nonnull instancetype)buildWithData:(void (^ _Nonnull)(HPCommerceAttributesBuilder * _Nonnull))builderData SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSError;

/// External events are passed to the client application with some data so they can process this data. This data is passed forward as is.
SWIFT_PROTOCOL("_TtP14HaptikCommerce15HPExternalEvent_")
@protocol HPExternalEvent
/// Called when SDK want to forward  the event to client app to process
/// precondition:
/// Client app must confirm to <code>HPExternalEvent</code> protocol and set delegate object
/// \param eventData Event specific data
///
- (void)didReceiveHaptikEvent:(NSString * _Nonnull)eventData;
/// Called when exception occurs
/// \param error <code>Error</code> object explaining reason and recovery suggestion
///
- (void)didReceiveHaptikError:(NSError * _Nonnull)error;
@end

/// Haptik IVA  supported language
typedef SWIFT_ENUM(NSInteger, HPLanguage, open) {
  HPLanguageEnglishUK = 0,
  HPLanguageEnglishUS = 1,
  HPLanguageEnglishIN = 2,
  HPLanguageHindi = 3,
};

typedef SWIFT_ENUM(NSInteger, HPSpeechMode, open) {
  HPSpeechModeAlwaysOn = 0,
  HPSpeechModeAlwaysOff = 1,
  HPSpeechModeWhenSpokenTo = 2,
};


/// A shared instance of this object is automatically created and used to perform operation
/// <h2>Swift Code</h2>
/// \code
/// // Import HaptikCommerce SDK
/// import HaptikCommerce
///
/// // Create an object of HPAttributesBuilder, and set properties
/// let attributes  =    HPAttributesBuilder.build { (builder) in
///     builder.category        = "grocery"
///     builder.customerID      = "12345"
///     builder.sessionID       = "SPI234567V2"
///     builder.pincode         = "411037"
///     builder.sourceController = "SPI234567V2"
/// }
///
/// // Present Haptik Conversation screen
/// HaptikCommerceLib.sharedSDK.loadConversation(launchController: self, attributes: attributes)
/// HaptikCommerceLib.sharedSDK.delegate = self
///
/// \endcode<h2>Objective-C Code</h2>
/// \code
/// // Import HaptikCommerce SDK
/// #import <HaptikCommerce/HaptikCommerce.h>
/// #import <HaptikCommerce/HaptikCommerce-Swift.h>
///
/// // Create an object of HPAttributesBuilder, and set properties
/// HPAttributesBuilder* builder = [HPAttributesBuilder buildWithData:^(HPAttributesBuilder *builder _Nonnull) {
/// builder.category        = @"grocery";
/// builder.customerID      = @"12345";
/// builder.sessionID       = @"SPI234567V2";
/// builder.pincode         = @"411037";
/// builder.sourceController = @"SPI234567V2";
/// }];
///
/// // Present Haptik Conversation screen
/// [HaptikCommerceLib.sharedSDK loadConversationWithLaunchController:self attributes:builder];
///
/// \endcode
SWIFT_CLASS("_TtC14HaptikCommerce17HaptikCommerceLib")
@interface HaptikCommerceLib : NSObject
/// Returns the HaptikCommerce singleton object
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) HaptikCommerceLib * _Nonnull sharedSDK;)
+ (HaptikCommerceLib * _Nonnull)sharedSDK SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// An object of <code>HPExternalEvent</code> protocol.
/// attention:
/// client app must implement <code>HPExternalEvent</code> protocol and implement <code>func didReceieHaptikEvent(_ eventData : String)</code>
@property (nonatomic, strong) id <HPExternalEvent> _Nullable delegate;
@end


@class UIViewController;

@interface HaptikCommerceLib (SWIFT_EXTENSION(HaptikCommerce))
/// Take the user to your conversation using the unique viaName provided to you by Haptik.
/// It takes an instance of the current view controller and the attributes via <code>HPAttributesBuilder</code> object
/// <hr/>
/// <h2>Swift Code</h2>
/// \code
/// // Import HaptikCommerce SDK
/// import HaptikCommerce
///
/// // Create an object of HPAttributesBuilder, and set properties
/// let attributes  =    HPAttributesBuilder.build { (builder) in
///     builder.category        = "grocery"
///     builder.customerID      = "12345"
///     builder.sessionID       = "SPI234567V2"
///     builder.pincode         = "411037"
///     builder.sourceController = "SPI234567V2"
/// }
///
/// // Present Haptik Conversation screen
/// HaptikCommerceLib.sharedSDK.loadConversation(launchController: self, attributes: attributes)
/// HaptikCommerceLib.sharedSDK.delegate = self
///
/// \endcode<h2>Objective-C Code</h2>
/// \code
/// // Import HaptikCommerce SDK
/// #import <HaptikCommerce/HaptikCommerce.h>
/// #import <HaptikCommerce/HaptikCommerce-Swift.h>
///
/// // Create an object of HPAttributesBuilder, and set properties
/// HPAttributesBuilder* builder = [HPAttributesBuilder buildWithData:^(HPAttributesBuilder *builder _Nonnull) {
/// builder.category        = @"grocery";
/// builder.customerID      = @"12345";
/// builder.sessionID       = @"SPI234567V2";
/// builder.pincode         = @"411037";
/// builder.sourceController = @"SPI234567V2";
/// }];
///
/// // Present Haptik Conversation screen
/// [HaptikCommerce.sharedSDK loadConversationWithLaunchController:self attributes:builder];
///
/// \endcoderequires:
/// A basic understanding of Markdown.
/// seealso:
/// <code>Error</code>, for a description of the errors that can be thrown.
/// \param launchController The current view controller over which the chat is expected to be presented
///
/// \param attributes <code>HPAttributesBuilder</code> object containing configuration params for chat screen
///
- (void)loadConversationWithLaunchController:(UIViewController * _Nonnull)launchController attributes:(HPCommerceAttributesBuilder * _Nonnull)attributes;
/// Signouts the current user from Haptik.
/// Called after application user logged out.
- (void)unregister;
/// Send application event data to SDK.
/// Clients can pass some events to our SDK, the data must be in JSON format.
/// <h2>Swift Code</h2>
/// \code
/// // Form event data in `NSDictionary`
/// let eventData = [
///     "key1": "value1",
///     "key2": "value1"
/// ]
///     // Send Event to SDK
/// HaptikCommerceLib.sharedSDK.updateEventData(withEventName: "mySdkEvent", eventData: eventData)
///
/// \endcode<h2>Objective-C Code</h2>
/// \code
/// // Form event data in `NSDictionary`
/// NSDictionary *eventData = @{
///                             @"key1":@"value1",
///                             @"key2": @"value1"
///                             };
/// // Send Event to SDK
/// [HaptikCommerceLib.sharedSDK updateEventDataWithEventName:@"mySdkEvent" eventData:eventData];
///
/// \endcode\param eventName Event identifier name
///
/// \param eventData Event specific data to be passed in key value format
///
- (void)updateEventDataWithEventName:(NSString * _Nonnull)eventName eventData:(NSDictionary<NSString *, id> * _Nonnull)eventData;
@end

/// Describes Text To Speech modes
typedef SWIFT_ENUM(NSInteger, TTSMode, open) {
  TTSModeAppleNative = 0,
  TTSModeGoogleTTS = 1,
  TTSModeReverieTTS = 2,
};

/// Describes Text To Speech modes
typedef SWIFT_ENUM(NSInteger, TTSVoice, open) {
  TTSVoiceMale = 0,
  TTSVoiceFemale = 1,
};

/// TTS Voice options (Google)
typedef SWIFT_ENUM(NSInteger, TTSVoiceType, open) {
  TTSVoiceTypeStandard = 0,
  TTSVoiceTypeWavenet = 1,
};

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
