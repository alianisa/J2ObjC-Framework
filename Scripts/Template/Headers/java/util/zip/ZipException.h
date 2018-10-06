//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/ZipException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilZipZipException")
#ifdef RESTRICT_JavaUtilZipZipException
#define INCLUDE_ALL_JavaUtilZipZipException 0
#else
#define INCLUDE_ALL_JavaUtilZipZipException 1
#endif
#undef RESTRICT_JavaUtilZipZipException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilZipZipException_) && (INCLUDE_ALL_JavaUtilZipZipException || defined(INCLUDE_JavaUtilZipZipException))
#define JavaUtilZipZipException_

#define RESTRICT_JavaIoIOException 1
#define INCLUDE_JavaIoIOException 1
#include "../../../java/io/IOException.h"

/*!
 @brief This runtime exception is thrown by <code>ZipFile</code> and <code>ZipInputStream</code>
  when the file or stream is not a valid zip file.
 - seealso: ZipFile
 - seealso: ZipInputStream
 */
@interface JavaUtilZipZipException : JavaIoIOException

#pragma mark Public

/*!
 @brief Constructs a new <code>ZipException</code> instance.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>ZipException</code> instance with the specified
 message.
 @param detailMessage
 the detail message for the exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipZipException)

FOUNDATION_EXPORT void JavaUtilZipZipException_init(JavaUtilZipZipException *self);

FOUNDATION_EXPORT JavaUtilZipZipException *new_JavaUtilZipZipException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipZipException *create_JavaUtilZipZipException_init();

FOUNDATION_EXPORT void JavaUtilZipZipException_initWithNSString_(JavaUtilZipZipException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaUtilZipZipException *new_JavaUtilZipZipException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipZipException *create_JavaUtilZipZipException_initWithNSString_(NSString *detailMessage);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipZipException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilZipZipException")
