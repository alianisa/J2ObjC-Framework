//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/CharSequence.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangCharSequence")
#ifdef RESTRICT_JavaLangCharSequence
#define INCLUDE_ALL_JavaLangCharSequence 0
#else
#define INCLUDE_ALL_JavaLangCharSequence 1
#endif
#undef RESTRICT_JavaLangCharSequence

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangCharSequence_) && (INCLUDE_ALL_JavaLangCharSequence || defined(INCLUDE_JavaLangCharSequence))
#define JavaLangCharSequence_

/*!
 @brief This interface represents an ordered set of characters and defines the
 methods to probe them.
 */
@protocol JavaLangCharSequence < NSObject, JavaObject >

/*!
 @brief Returns the number of characters in this sequence.
 @return the number of characters.
 */
- (jint)length;

/*!
 @brief Returns the character at <code>index</code>.
 @throws IndexOutOfBoundsException if <code>index < 0</code> or <code>index >= length()</code>.
 */
- (jchar)charAtWithInt:(jint)index;

/*!
 @brief Returns a <code>CharSequence</code> from the <code>start</code> index (inclusive)
 to the <code>end</code> index (exclusive) of this sequence.
 @param start
 the start offset of the sub-sequence. It is inclusive, that
 is, the index of the first character that is included in the
 sub-sequence.
 @param end
 the end offset of the sub-sequence. It is exclusive, that is,
 the index of the first character after those that are included
 in the sub-sequence
 @return the requested sub-sequence.
 @throws IndexOutOfBoundsException
 if <code>start < 0</code>, <code>end < 0</code>, <code>start > end</code>,
 or if <code>start</code> or <code>end</code> are greater than the
 length of this sequence.
 */
- (id<JavaLangCharSequence>)subSequenceFrom:(jint)start
                                         to:(jint)end;

/*!
 @brief Returns a string with the same characters in the same order as in this
 sequence.
 @return a string based on this sequence.
 */
- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangCharSequence)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangCharSequence)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangCharSequence")