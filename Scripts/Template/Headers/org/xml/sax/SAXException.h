//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/SAXException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgXmlSaxSAXException")
#ifdef RESTRICT_OrgXmlSaxSAXException
#define INCLUDE_ALL_OrgXmlSaxSAXException 0
#else
#define INCLUDE_ALL_OrgXmlSaxSAXException 1
#endif
#undef RESTRICT_OrgXmlSaxSAXException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgXmlSaxSAXException_) && (INCLUDE_ALL_OrgXmlSaxSAXException || defined(INCLUDE_OrgXmlSaxSAXException))
#define OrgXmlSaxSAXException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "../../../java/lang/Exception.h"

/*!
 @brief Encapsulate a general SAX error or warning.
 <blockquote>
 <em>This module, both source code and documentation, is in the
 Public Domain, and comes with <strong>NO WARRANTY</strong>.</em>
 See <a href='http://www.saxproject.org'>http://www.saxproject.org</a>
 for further information.
 </blockquote>
 <p>This class can contain basic error or warning information from
 either the XML parser or the application: a parser writer or
 application writer can subclass it to provide additional
 functionality.  SAX handlers may throw this exception or
 any exception subclassed from it.</p>
 <p>If the application needs to pass through other types of
 exceptions, it must wrap those exceptions in a SAXException
 or an exception derived from a SAXException.</p>
 <p>If the parser or application needs to include information about a
 specific location in an XML document, it should use the
 <code>SAXParseException</code> subclass.</p>
 @since SAX 1.0
 @author David Megginson
 @version 2.0.1 (sax2r2)
 - seealso: org.xml.sax.SAXParseException
 */
@interface OrgXmlSaxSAXException : JavaLangException

#pragma mark Public

/*!
 @brief Create a new SAXException.
 */
- (instancetype)init;

/*!
 @brief Create a new SAXException wrapping an existing exception.
 <p>The existing exception will be embedded in the new
 one, and its message will become the default message for
 the SAXException.</p>
 @param e The exception to be wrapped in a SAXException.
 */
- (instancetype)initWithJavaLangException:(JavaLangException *)e;

/*!
 @brief Create a new SAXException.
 @param message The error or warning message.
 */
- (instancetype)initWithNSString:(NSString *)message;

/*!
 @brief Create a new SAXException from an existing exception.
 <p>The existing exception will be embedded in the new
 one, but the new exception will have its own message.</p>
 @param message The detail message.
 @param e The exception to be wrapped in a SAXException.
 */
- (instancetype)initWithNSString:(NSString *)message
           withJavaLangException:(JavaLangException *)e;

/*!
 @brief Return the embedded exception, if any.
 @return The embedded exception, or null if there is none.
 */
- (JavaLangException *)getException;

/*!
 @brief Return a detail message for this exception.
 <p>If there is an embedded exception, and if the SAXException
 has no detail message of its own, this method will return
 the detail message from the embedded exception.</p>
 @return The error or warning message.
 */
- (NSString *)getMessage;

/*!
 @brief Override toString to pick up any embedded exception.
 @return A string representation of this exception.
 */
- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxSAXException)

FOUNDATION_EXPORT void OrgXmlSaxSAXException_init(OrgXmlSaxSAXException *self);

FOUNDATION_EXPORT OrgXmlSaxSAXException *new_OrgXmlSaxSAXException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxSAXException *create_OrgXmlSaxSAXException_init();

FOUNDATION_EXPORT void OrgXmlSaxSAXException_initWithNSString_(OrgXmlSaxSAXException *self, NSString *message);

FOUNDATION_EXPORT OrgXmlSaxSAXException *new_OrgXmlSaxSAXException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxSAXException *create_OrgXmlSaxSAXException_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void OrgXmlSaxSAXException_initWithJavaLangException_(OrgXmlSaxSAXException *self, JavaLangException *e);

FOUNDATION_EXPORT OrgXmlSaxSAXException *new_OrgXmlSaxSAXException_initWithJavaLangException_(JavaLangException *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxSAXException *create_OrgXmlSaxSAXException_initWithJavaLangException_(JavaLangException *e);

FOUNDATION_EXPORT void OrgXmlSaxSAXException_initWithNSString_withJavaLangException_(OrgXmlSaxSAXException *self, NSString *message, JavaLangException *e);

FOUNDATION_EXPORT OrgXmlSaxSAXException *new_OrgXmlSaxSAXException_initWithNSString_withJavaLangException_(NSString *message, JavaLangException *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxSAXException *create_OrgXmlSaxSAXException_initWithNSString_withJavaLangException_(NSString *message, JavaLangException *e);

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxSAXException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgXmlSaxSAXException")
