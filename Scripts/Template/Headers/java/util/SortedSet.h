//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/SortedSet.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilSortedSet")
#ifdef RESTRICT_JavaUtilSortedSet
#define INCLUDE_ALL_JavaUtilSortedSet 0
#else
#define INCLUDE_ALL_JavaUtilSortedSet 1
#endif
#undef RESTRICT_JavaUtilSortedSet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilSortedSet_) && (INCLUDE_ALL_JavaUtilSortedSet || defined(INCLUDE_JavaUtilSortedSet))
#define JavaUtilSortedSet_

#define RESTRICT_JavaUtilSet 1
#define INCLUDE_JavaUtilSet 1
#include "../../java/util/Set.h"

@protocol JavaUtilComparator;

/*!
 @brief SortedSet is a Set which iterates over its elements in a sorted order.
 The
 order is determined either by the elements natural ordering, or by a
 <code>Comparator</code> which is passed into a concrete implementation at
 construction time. All elements in this set must be mutually comparable. The
 ordering in this set must be consistent with <code>equals</code> of its elements.
 - seealso: Comparator
 - seealso: Comparable
 */
@protocol JavaUtilSortedSet < JavaUtilSet, NSObject, JavaObject >

/*!
 @brief Returns the comparator used to compare elements in this <code>SortedSet</code>.
 @return a comparator or null if the natural ordering is used.
 */
- (id<JavaUtilComparator>)comparator;

/*!
 @brief Returns the first element in this <code>SortedSet</code>.
 The first element
 is the lowest element.
 @return the first element.
 @throws NoSuchElementException
 when this <code>SortedSet</code> is empty.
 */
- (id)first;

/*!
 @brief Returns a <code>SortedSet</code> of the specified portion of this
 <code>SortedSet</code> which contains elements less than the end element.
 The
 returned <code>SortedSet</code> is backed by this <code>SortedSet</code> so changes
 to one set are reflected by the other.
 @param end
 the end element.
 @return a subset where the elements are less than <code>end</code>.
 @throws ClassCastException
 when the class of the end element is inappropriate for this
 SubSet.
 @throws NullPointerException
 when the end element is null and this <code>SortedSet</code> does
 not support null elements.
 */
- (id<JavaUtilSortedSet>)headSetWithId:(id)end;

/*!
 @brief Returns the last element in this <code>SortedSet</code>.
 The last element is
 the highest element.
 @return the last element.
 @throws NoSuchElementException
 when this <code>SortedSet</code> is empty.
 */
- (id)last;

/*!
 @brief Returns a <code>SortedSet</code> of the specified portion of this
 <code>SortedSet</code> which contains elements greater or equal to the start
 element but less than the end element.
 The returned <code>SortedSet</code> is
 backed by this SortedMap so changes to one set are reflected by the
 other.
 @param start
 the start element.
 @param end
 the end element.
 @return a subset where the elements are greater or equal to <code>start</code>
 and less than <code>end</code>.
 @throws ClassCastException
 when the class of the start or end element is inappropriate
 for this SubSet.
 @throws NullPointerException
 when the start or end element is null and this
 <code>SortedSet</code> does not support null elements.
 @throws IllegalArgumentException
 when the start element is greater than the end element.
 */
- (id<JavaUtilSortedSet>)subSetWithId:(id)start
                               withId:(id)end;

/*!
 @brief Returns a <code>SortedSet</code> of the specified portion of this
 <code>SortedSet</code> which contains elements greater or equal to the start
 element.
 The returned <code>SortedSet</code> is backed by this
 <code>SortedSet</code> so changes to one set are reflected by the other.
 @param start
 the start element.
 @return a subset where the elements are greater or equal to <code>start</code> .
 @throws ClassCastException
 when the class of the start element is inappropriate for this
 SubSet.
 @throws NullPointerException
 when the start element is null and this <code>SortedSet</code>
 does not support null elements.
 */
- (id<JavaUtilSortedSet>)tailSetWithId:(id)start;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilSortedSet)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilSortedSet)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilSortedSet")
