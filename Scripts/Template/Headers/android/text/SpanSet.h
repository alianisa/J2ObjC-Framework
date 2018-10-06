//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/text/SpanSet.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidTextSpanSet")
#ifdef RESTRICT_AndroidTextSpanSet
#define INCLUDE_ALL_AndroidTextSpanSet 0
#else
#define INCLUDE_ALL_AndroidTextSpanSet 1
#endif
#undef RESTRICT_AndroidTextSpanSet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (AndroidTextSpanSet_) && (INCLUDE_ALL_AndroidTextSpanSet || defined(INCLUDE_AndroidTextSpanSet))
#define AndroidTextSpanSet_

@class IOSClass;
@class IOSIntArray;
@class IOSObjectArray;
@protocol AndroidTextSpanned;

/*!
 @brief A cached set of spans.
 Caches the result of <code>Spanned.getSpans(int,int,Class)</code> and then
 provides faster access to <code>Spanned.nextSpanTransition(int,int,Class)</code>.
 Fields are left public for a convenient direct access.
 Note that empty spans are ignored by this class.
 */
@interface AndroidTextSpanSet : NSObject {
 @public
  jint numberOfSpans_;
  IOSObjectArray *spans_;
  IOSIntArray *spanStarts_;
  IOSIntArray *spanEnds_;
  IOSIntArray *spanFlags_;
}

#pragma mark Public

/*!
 @brief Returns true if there are spans intersecting the given interval.
 @param end must be strictly greater than start
 */
- (jboolean)hasSpansIntersectingWithInt:(jint)start
                                withInt:(jint)end;

- (void)init__WithAndroidTextSpanned:(id<AndroidTextSpanned>)spanned
                             withInt:(jint)start
                             withInt:(jint)limit OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Removes all internal references to the spans to avoid memory leaks.
 */
- (void)recycle;

#pragma mark Package-Private

- (instancetype)initWithIOSClass:(IOSClass *)type;

/*!
 @brief Similar to <code>Spanned.nextSpanTransition(int,int,Class)</code>
 */
- (jint)getNextTransitionWithInt:(jint)start
                         withInt:(jint)limit;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTextSpanSet)

J2OBJC_FIELD_SETTER(AndroidTextSpanSet, spans_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(AndroidTextSpanSet, spanStarts_, IOSIntArray *)
J2OBJC_FIELD_SETTER(AndroidTextSpanSet, spanEnds_, IOSIntArray *)
J2OBJC_FIELD_SETTER(AndroidTextSpanSet, spanFlags_, IOSIntArray *)

FOUNDATION_EXPORT void AndroidTextSpanSet_initWithIOSClass_(AndroidTextSpanSet *self, IOSClass *type);

FOUNDATION_EXPORT AndroidTextSpanSet *new_AndroidTextSpanSet_initWithIOSClass_(IOSClass *type) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidTextSpanSet *create_AndroidTextSpanSet_initWithIOSClass_(IOSClass *type);

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextSpanSet)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidTextSpanSet")
