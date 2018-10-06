//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/locks/ReadWriteLock.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentLocksReadWriteLock")
#ifdef RESTRICT_JavaUtilConcurrentLocksReadWriteLock
#define INCLUDE_ALL_JavaUtilConcurrentLocksReadWriteLock 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentLocksReadWriteLock 1
#endif
#undef RESTRICT_JavaUtilConcurrentLocksReadWriteLock

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilConcurrentLocksReadWriteLock_) && (INCLUDE_ALL_JavaUtilConcurrentLocksReadWriteLock || defined(INCLUDE_JavaUtilConcurrentLocksReadWriteLock))
#define JavaUtilConcurrentLocksReadWriteLock_

@protocol JavaUtilConcurrentLocksLock;

/*!
 @brief A <tt>ReadWriteLock</tt> maintains a pair of associated <code>locks</code>
 , one for read-only operations and one for writing.
 The <code>read lock</code> may be held simultaneously by
 multiple reader threads, so long as there are no writers.  The
 <code>write lock</code> is exclusive.
 <p>All <tt>ReadWriteLock</tt> implementations must guarantee that
 the memory synchronization effects of <tt>writeLock</tt> operations
 (as specified in the <code>Lock</code> interface) also hold with respect
 to the associated <tt>readLock</tt>. That is, a thread successfully
 acquiring the read lock will see all updates made upon previous
 release of the write lock.
 <p>A read-write lock allows for a greater level of concurrency in
 accessing shared data than that permitted by a mutual exclusion lock.
 It exploits the fact that while only a single thread at a time (a
 <em>writer</em> thread) can modify the shared data, in many cases any
 number of threads can concurrently read the data (hence <em>reader</em>
 threads).
 In theory, the increase in concurrency permitted by the use of a read-write
 lock will lead to performance improvements over the use of a mutual
 exclusion lock. In practice this increase in concurrency will only be fully
 realized on a multi-processor, and then only if the access patterns for
 the shared data are suitable.
 <p>Whether or not a read-write lock will improve performance over the use
 of a mutual exclusion lock depends on the frequency that the data is
 read compared to being modified, the duration of the read and write
 operations, and the contention for the data - that is, the number of
 threads that will try to read or write the data at the same time.
 For example, a collection that is initially populated with data and
 thereafter infrequently modified, while being frequently searched
 (such as a directory of some kind) is an ideal candidate for the use of
 a read-write lock. However, if updates become frequent then the data
 spends most of its time being exclusively locked and there is little, if any
 increase in concurrency. Further, if the read operations are too short
 the overhead of the read-write lock implementation (which is inherently
 more complex than a mutual exclusion lock) can dominate the execution
 cost, particularly as many read-write lock implementations still serialize
 all threads through a small section of code. Ultimately, only profiling
 and measurement will establish whether the use of a read-write lock is
 suitable for your application.
 <p>Although the basic operation of a read-write lock is straight-forward,
 there are many policy decisions that an implementation must make, which
 may affect the effectiveness of the read-write lock in a given application.
 Examples of these policies include:
 <ul>
 <li>Determining whether to grant the read lock or the write lock, when
 both readers and writers are waiting, at the time that a writer releases
 the write lock. Writer preference is common, as writes are expected to be
 short and infrequent. Reader preference is less common as it can lead to
 lengthy delays for a write if the readers are frequent and long-lived as
 expected. Fair, or &quot;in-order&quot; implementations are also possible.
 <li>Determining whether readers that request the read lock while a
 reader is active and a writer is waiting, are granted the read lock.
 Preference to the reader can delay the writer indefinitely, while
 preference to the writer can reduce the potential for concurrency.
 <li>Determining whether the locks are reentrant: can a thread with the
 write lock reacquire it? Can it acquire a read lock while holding the
 write lock? Is the read lock itself reentrant?
 <li>Can the write lock be downgraded to a read lock without allowing
 an intervening writer? Can a read lock be upgraded to a write lock,
 in preference to other waiting readers or writers?
 </ul>
 You should consider all of these things when evaluating the suitability
 of a given implementation for your application.
 - seealso: ReentrantReadWriteLock
 - seealso: Lock
 - seealso: ReentrantLock
 @since 1.5
 @author Doug Lea
 */
@protocol JavaUtilConcurrentLocksReadWriteLock < NSObject, JavaObject >

/*!
 @brief Returns the lock used for reading.
 @return the lock used for reading.
 */
- (id<JavaUtilConcurrentLocksLock>)readLock;

/*!
 @brief Returns the lock used for writing.
 @return the lock used for writing.
 */
- (id<JavaUtilConcurrentLocksLock>)writeLock;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentLocksReadWriteLock)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentLocksReadWriteLock)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentLocksReadWriteLock")
