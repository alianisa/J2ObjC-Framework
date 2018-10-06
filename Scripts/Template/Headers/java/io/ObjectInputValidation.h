//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/ObjectInputValidation.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoObjectInputValidation")
#ifdef RESTRICT_JavaIoObjectInputValidation
#define INCLUDE_ALL_JavaIoObjectInputValidation 0
#else
#define INCLUDE_ALL_JavaIoObjectInputValidation 1
#endif
#undef RESTRICT_JavaIoObjectInputValidation

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoObjectInputValidation_) && (INCLUDE_ALL_JavaIoObjectInputValidation || defined(INCLUDE_JavaIoObjectInputValidation))
#define JavaIoObjectInputValidation_

/*!
 @brief A callback interface for post-deserialization checks on objects.
 Allows, for
 example, the validation of a whole graph of objects after all of them have
 been loaded.
 - seealso: ObjectInputStream#registerValidation(ObjectInputValidation,int)
 */
@protocol JavaIoObjectInputValidation < NSObject, JavaObject >

/*!
 @brief Validates this object.
 @throws InvalidObjectException
 if this object fails to validate itself.
 */
- (void)validateObject;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoObjectInputValidation)

J2OBJC_TYPE_LITERAL_HEADER(JavaIoObjectInputValidation)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoObjectInputValidation")
