//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/KeyStoreException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityKeyStoreException")
#ifdef RESTRICT_JavaSecurityKeyStoreException
#define INCLUDE_ALL_JavaSecurityKeyStoreException 0
#else
#define INCLUDE_ALL_JavaSecurityKeyStoreException 1
#endif
#undef RESTRICT_JavaSecurityKeyStoreException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityKeyStoreException_) && (INCLUDE_ALL_JavaSecurityKeyStoreException || defined(INCLUDE_JavaSecurityKeyStoreException))
#define JavaSecurityKeyStoreException_

#define RESTRICT_JavaSecurityGeneralSecurityException 1
#define INCLUDE_JavaSecurityGeneralSecurityException 1
#include "../../java/security/GeneralSecurityException.h"

/*!
 @brief <code>KeyStoreException</code> is a general <code>KeyStore</code> exception.
 - seealso: KeyStore
 */
@interface JavaSecurityKeyStoreException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Constructs a new instance of <code>KeyStoreException</code>.
 */
- (instancetype)init;

/*!
 @brief Constructs a new instance of <code>KeyStoreException</code> with the
 given message.
 @param msg
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)msg;

/*!
 @brief Constructs a new instance of <code>KeyStoreException</code> with the
 given message and the cause.
 @param message
 the detail message for this exception.
 @param cause
 the exception which is the cause for this exception.
 */
- (instancetype)initWithNSString:(NSString *)message
                 withNSException:(NSException *)cause;

/*!
 @brief Constructs a new instance of <code>KeyStoreException</code> with the
 cause.
 @param cause
 the exception which is the cause for this exception.
 */
- (instancetype)initWithNSException:(NSException *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityKeyStoreException)

FOUNDATION_EXPORT void JavaSecurityKeyStoreException_initWithNSString_(JavaSecurityKeyStoreException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityKeyStoreException *new_JavaSecurityKeyStoreException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityKeyStoreException *create_JavaSecurityKeyStoreException_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaSecurityKeyStoreException_init(JavaSecurityKeyStoreException *self);

FOUNDATION_EXPORT JavaSecurityKeyStoreException *new_JavaSecurityKeyStoreException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityKeyStoreException *create_JavaSecurityKeyStoreException_init();

FOUNDATION_EXPORT void JavaSecurityKeyStoreException_initWithNSString_withNSException_(JavaSecurityKeyStoreException *self, NSString *message, NSException *cause);

FOUNDATION_EXPORT JavaSecurityKeyStoreException *new_JavaSecurityKeyStoreException_initWithNSString_withNSException_(NSString *message, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityKeyStoreException *create_JavaSecurityKeyStoreException_initWithNSString_withNSException_(NSString *message, NSException *cause);

FOUNDATION_EXPORT void JavaSecurityKeyStoreException_initWithNSException_(JavaSecurityKeyStoreException *self, NSException *cause);

FOUNDATION_EXPORT JavaSecurityKeyStoreException *new_JavaSecurityKeyStoreException_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityKeyStoreException *create_JavaSecurityKeyStoreException_initWithNSException_(NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityKeyStoreException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityKeyStoreException")