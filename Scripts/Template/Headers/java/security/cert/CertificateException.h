//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/cert/CertificateException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertCertificateException")
#ifdef RESTRICT_JavaSecurityCertCertificateException
#define INCLUDE_ALL_JavaSecurityCertCertificateException 0
#else
#define INCLUDE_ALL_JavaSecurityCertCertificateException 1
#endif
#undef RESTRICT_JavaSecurityCertCertificateException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityCertCertificateException_) && (INCLUDE_ALL_JavaSecurityCertCertificateException || defined(INCLUDE_JavaSecurityCertCertificateException))
#define JavaSecurityCertCertificateException_

#define RESTRICT_JavaSecurityGeneralSecurityException 1
#define INCLUDE_JavaSecurityGeneralSecurityException 1
#include "../../../java/security/GeneralSecurityException.h"

/*!
 @brief The base class for all <code>Certificate</code> related exceptions.
 */
@interface JavaSecurityCertCertificateException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Creates a new <code>CertificateException</code>.
 */
- (instancetype)init;

/*!
 @brief Creates a new <code>CertificateException</code> with the specified message.
 @param msg
 the detail message for the exception.
 */
- (instancetype)initWithNSString:(NSString *)msg;

/*!
 @brief Creates a new <code>CertificateException</code> with the specified message and
 cause.
 @param message
 the detail message for the exception.
 @param cause
 the cause.
 */
- (instancetype)initWithNSString:(NSString *)message
                 withNSException:(NSException *)cause;

/*!
 @brief Creates a new <code>CertificateException</code> with the specified cause.
 @param cause
 the cause
 */
- (instancetype)initWithNSException:(NSException *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCertificateException)

FOUNDATION_EXPORT void JavaSecurityCertCertificateException_initWithNSString_(JavaSecurityCertCertificateException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityCertCertificateException *new_JavaSecurityCertCertificateException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertificateException *create_JavaSecurityCertCertificateException_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaSecurityCertCertificateException_init(JavaSecurityCertCertificateException *self);

FOUNDATION_EXPORT JavaSecurityCertCertificateException *new_JavaSecurityCertCertificateException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertificateException *create_JavaSecurityCertCertificateException_init();

FOUNDATION_EXPORT void JavaSecurityCertCertificateException_initWithNSString_withNSException_(JavaSecurityCertCertificateException *self, NSString *message, NSException *cause);

FOUNDATION_EXPORT JavaSecurityCertCertificateException *new_JavaSecurityCertCertificateException_initWithNSString_withNSException_(NSString *message, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertificateException *create_JavaSecurityCertCertificateException_initWithNSString_withNSException_(NSString *message, NSException *cause);

FOUNDATION_EXPORT void JavaSecurityCertCertificateException_initWithNSException_(JavaSecurityCertCertificateException *self, NSException *cause);

FOUNDATION_EXPORT JavaSecurityCertCertificateException *new_JavaSecurityCertCertificateException_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertificateException *create_JavaSecurityCertCertificateException_initWithNSException_(NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCertificateException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertCertificateException")
