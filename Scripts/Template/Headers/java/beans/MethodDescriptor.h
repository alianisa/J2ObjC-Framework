//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/beans/src/main/java/java/beans/MethodDescriptor.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaBeansMethodDescriptor")
#ifdef RESTRICT_JavaBeansMethodDescriptor
#define INCLUDE_ALL_JavaBeansMethodDescriptor 0
#else
#define INCLUDE_ALL_JavaBeansMethodDescriptor 1
#endif
#undef RESTRICT_JavaBeansMethodDescriptor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaBeansMethodDescriptor_) && (INCLUDE_ALL_JavaBeansMethodDescriptor || defined(INCLUDE_JavaBeansMethodDescriptor))
#define JavaBeansMethodDescriptor_

#define RESTRICT_JavaBeansFeatureDescriptor 1
#define INCLUDE_JavaBeansFeatureDescriptor 1
#include "../../java/beans/FeatureDescriptor.h"

@class IOSObjectArray;
@class JavaLangReflectMethod;

/*!
 @brief Describes a bean's method.
 */
@interface JavaBeansMethodDescriptor : JavaBeansFeatureDescriptor

#pragma mark Public

/*!
 @brief <p>
 Constructs an instance with the given <code>Method</code>.
 The
 <code>getName()</code> is set as the name of the <code>method</code>
 passed.
 </p>
 @param method
 The Method to set.
 */
- (instancetype)initWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

/*!
 @brief <p>
 Constructs an instance with the given <code>Method</code> and
 <code>ParameterDescriptor</code>s.
 The <code>getName()</code> is set as the name
 of the <code>method</code> passed.
 </p>
 @param method
 The Method to set.
 @param parameterDescriptors
 An array of parameter descriptors.
 */
- (instancetype)initWithJavaLangReflectMethod:(JavaLangReflectMethod *)method
        withJavaBeansParameterDescriptorArray:(IOSObjectArray *)parameterDescriptors;

/*!
 @brief <p>
 Gets the method.
 </p>
 @return A <code>Method</code> instance.
 */
- (JavaLangReflectMethod *)getMethod;

/*!
 @brief <p>
 Gets the parameter descriptors.
 </p>
 @return An array of <code>ParameterDescriptor</code> instance or
 <code>null</code>.
 */
- (IOSObjectArray *)getParameterDescriptors;

#pragma mark Package-Private

- (void)mergeWithJavaBeansMethodDescriptor:(JavaBeansMethodDescriptor *)anotherMethod;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaBeansMethodDescriptor)

FOUNDATION_EXPORT void JavaBeansMethodDescriptor_initWithJavaLangReflectMethod_withJavaBeansParameterDescriptorArray_(JavaBeansMethodDescriptor *self, JavaLangReflectMethod *method, IOSObjectArray *parameterDescriptors);

FOUNDATION_EXPORT JavaBeansMethodDescriptor *new_JavaBeansMethodDescriptor_initWithJavaLangReflectMethod_withJavaBeansParameterDescriptorArray_(JavaLangReflectMethod *method, IOSObjectArray *parameterDescriptors) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaBeansMethodDescriptor *create_JavaBeansMethodDescriptor_initWithJavaLangReflectMethod_withJavaBeansParameterDescriptorArray_(JavaLangReflectMethod *method, IOSObjectArray *parameterDescriptors);

FOUNDATION_EXPORT void JavaBeansMethodDescriptor_initWithJavaLangReflectMethod_(JavaBeansMethodDescriptor *self, JavaLangReflectMethod *method);

FOUNDATION_EXPORT JavaBeansMethodDescriptor *new_JavaBeansMethodDescriptor_initWithJavaLangReflectMethod_(JavaLangReflectMethod *method) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaBeansMethodDescriptor *create_JavaBeansMethodDescriptor_initWithJavaLangReflectMethod_(JavaLangReflectMethod *method);

J2OBJC_TYPE_LITERAL_HEADER(JavaBeansMethodDescriptor)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaBeansMethodDescriptor")
