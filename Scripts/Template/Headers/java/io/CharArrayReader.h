//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/CharArrayReader.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoCharArrayReader")
#ifdef RESTRICT_JavaIoCharArrayReader
#define INCLUDE_ALL_JavaIoCharArrayReader 0
#else
#define INCLUDE_ALL_JavaIoCharArrayReader 1
#endif
#undef RESTRICT_JavaIoCharArrayReader

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoCharArrayReader_) && (INCLUDE_ALL_JavaIoCharArrayReader || defined(INCLUDE_JavaIoCharArrayReader))
#define JavaIoCharArrayReader_

#define RESTRICT_JavaIoReader 1
#define INCLUDE_JavaIoReader 1
#include "../../java/io/Reader.h"

@class IOSCharArray;

/*!
 @brief A specialized <code>Reader</code> for reading the contents of a char array.
 - seealso: CharArrayWriter
 */
@interface JavaIoCharArrayReader : JavaIoReader {
 @public
  /*!
   @brief The buffer for characters.
   */
  IOSCharArray *buf_;
  /*!
   @brief The current buffer position.
   */
  jint pos_;
  /*!
   @brief The current mark position.
   */
  jint markedPos_;
  /*!
   @brief The ending index of the buffer.
   */
  jint count_;
}

#pragma mark Public

/*!
 @brief Constructs a CharArrayReader on the char array <code>buf</code>.
 The size of
 the reader is set to the length of the buffer and the object to to read
 from is set to <code>buf</code>.
 @param buf
 the char array from which to read.
 */
- (instancetype)initWithCharArray:(IOSCharArray *)buf;

/*!
 @brief Constructs a CharArrayReader on the char array <code>buf</code>.
 The size of
 the reader is set to <code>length</code> and the start position from which to
 read the buffer is set to <code>offset</code>.
 @param buf
 the char array from which to read.
 @param offset
 the index of the first character in <code>buf</code> to read.
 @param length
 the number of characters that can be read from <code>buf</code>.
 @throws IllegalArgumentException
 if <code>offset < 0</code> or <code>length < 0</code>, or if
 <code>offset</code> is greater than the size of <code>buf</code> .
 */
- (instancetype)initWithCharArray:(IOSCharArray *)buf
                          withInt:(jint)offset
                          withInt:(jint)length;

/*!
 @brief This method closes this CharArrayReader.
 Once it is closed, you can no
 longer read from it. Only the first invocation of this method has any
 effect.
 */
- (void)close;

/*!
 @brief Sets a mark position in this reader.
 The parameter <code>readLimit</code> is
 ignored for CharArrayReaders. Calling <code>reset()</code> will reposition the
 reader back to the marked position provided the mark has not been
 invalidated.
 @param readLimit
 ignored for CharArrayReaders.
 @throws IOException
 if this reader is closed.
 */
- (void)markWithInt:(jint)readLimit;

/*!
 @brief Indicates whether this reader supports the <code>mark()</code> and
 <code>reset()</code> methods.
 @return <code>true</code> for CharArrayReader.
 - seealso: #mark(int)
 - seealso: #reset()
 */
- (jboolean)markSupported;

/*!
 @brief Reads a single character from this reader and returns it as an integer
 with the two higher-order bytes set to 0.
 Returns -1 if no more
 characters are available from this reader.
 @return the character read as an int or -1 if the end of the reader has
 been reached.
 @throws IOException
 if this reader is closed.
 */
- (jint)read;

/*!
 @brief Reads up to <code>count</code> characters from this CharArrayReader and
 stores them at <code>offset</code> in the character array <code>buffer</code>.
 Returns the number of characters actually read or -1 if the end of reader
 was encountered.
 @throws IndexOutOfBoundsException
 if <code>offset < 0 || count < 0 || offset + count > buffer.length</code>.
 @throws IOException
 if this reader is closed.
 */
- (jint)readWithCharArray:(IOSCharArray *)buffer
                  withInt:(jint)offset
                  withInt:(jint)count;

/*!
 @brief Indicates whether this reader is ready to be read without blocking.
 Returns <code>true</code> if the next <code>read</code> will not block. Returns
 <code>false</code> if this reader may or may not block when <code>read</code> is
 called. The implementation in CharArrayReader always returns <code>true</code>
 even when it has been closed.
 @return <code>true</code> if this reader will not block when <code>read</code> is
 called, <code>false</code> if unknown or blocking will occur.
 @throws IOException
 if this reader is closed.
 */
- (jboolean)ready;

/*!
 @brief Resets this reader's position to the last <code>mark()</code> location.
 Invocations of <code>read()</code> and <code>skip()</code> will occur from this new
 location. If this reader has not been marked, it is reset to the
 beginning of the string.
 @throws IOException
 if this reader is closed.
 */
- (void)reset;

/*!
 @brief Skips <code>charCount</code> characters in this reader.
 Subsequent calls to
 <code>read</code> will not return these characters unless <code>reset</code>
 is used. This method does nothing and returns 0 if <code>charCount <= 0</code>.
 @return the number of characters actually skipped.
 @throws IOException
 if this reader is closed.
 */
- (jlong)skipWithLong:(jlong)charCount;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoCharArrayReader)

J2OBJC_FIELD_SETTER(JavaIoCharArrayReader, buf_, IOSCharArray *)

FOUNDATION_EXPORT void JavaIoCharArrayReader_initWithCharArray_(JavaIoCharArrayReader *self, IOSCharArray *buf);

FOUNDATION_EXPORT JavaIoCharArrayReader *new_JavaIoCharArrayReader_initWithCharArray_(IOSCharArray *buf) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoCharArrayReader *create_JavaIoCharArrayReader_initWithCharArray_(IOSCharArray *buf);

FOUNDATION_EXPORT void JavaIoCharArrayReader_initWithCharArray_withInt_withInt_(JavaIoCharArrayReader *self, IOSCharArray *buf, jint offset, jint length);

FOUNDATION_EXPORT JavaIoCharArrayReader *new_JavaIoCharArrayReader_initWithCharArray_withInt_withInt_(IOSCharArray *buf, jint offset, jint length) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoCharArrayReader *create_JavaIoCharArrayReader_initWithCharArray_withInt_withInt_(IOSCharArray *buf, jint offset, jint length);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoCharArrayReader)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoCharArrayReader")
