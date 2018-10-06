//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/text/DecimalFormatSymbols.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTextDecimalFormatSymbols")
#ifdef RESTRICT_JavaTextDecimalFormatSymbols
#define INCLUDE_ALL_JavaTextDecimalFormatSymbols 0
#else
#define INCLUDE_ALL_JavaTextDecimalFormatSymbols 1
#endif
#undef RESTRICT_JavaTextDecimalFormatSymbols

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaTextDecimalFormatSymbols_) && (INCLUDE_ALL_JavaTextDecimalFormatSymbols || defined(INCLUDE_JavaTextDecimalFormatSymbols))
#define JavaTextDecimalFormatSymbols_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../java/io/Serializable.h"

@class IOSObjectArray;
@class JavaUtilCurrency;
@class JavaUtilLocale;

/*!
 @brief Encapsulates the set of symbols (such as the decimal separator, the grouping
 separator, and so on) needed by <code>DecimalFormat</code> to format numbers.
 <code>DecimalFormat</code> internally creates an instance of
 <code>DecimalFormatSymbols</code> from its locale data. If you need to change any
 of these symbols, you can get the <code>DecimalFormatSymbols</code> object from
 your <code>DecimalFormat</code> and modify it.
 - seealso: java.util.Locale
 - seealso: DecimalFormat
 */
@interface JavaTextDecimalFormatSymbols : NSObject < NSCopying, JavaIoSerializable >

#pragma mark Public

/*!
 @brief Constructs a new <code>DecimalFormatSymbols</code> containing the symbols for
 the user's default locale.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 Best practice is to create a <code>DecimalFormat</code>
 and then to get the <code>DecimalFormatSymbols</code> from that object by
 calling <code>DecimalFormat.getDecimalFormatSymbols()</code>.
 */
- (instancetype)init;

/*!
 @brief Constructs a new DecimalFormatSymbols containing the symbols for the
 specified Locale.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 Best practice is to create a <code>DecimalFormat</code>
 and then to get the <code>DecimalFormatSymbols</code> from that object by
 calling <code>DecimalFormat.getDecimalFormatSymbols()</code>.
 @param locale
 the locale.
 */
- (instancetype)initWithJavaUtilLocale:(JavaUtilLocale *)locale;

- (id)clone;

/*!
 @brief Compares the specified object to this <code>DecimalFormatSymbols</code> and
 indicates if they are equal.
 In order to be equal, <code>object</code> must be
 an instance of <code>DecimalFormatSymbols</code> and contain the same symbols.
 @param object
 the object to compare with this object.
 @return <code>true</code> if the specified object is equal to this
 <code>DecimalFormatSymbols</code>; <code>false</code> otherwise.
 - seealso: #hashCode
 */
- (jboolean)isEqual:(id)object;

/*!
 @brief Returns an array of locales for which custom <code>DecimalFormatSymbols</code> instances
 are available.
 <p>Note that Android does not support user-supplied locale service providers.
 @since 1.6
 */
+ (IOSObjectArray *)getAvailableLocales;

/*!
 @brief Returns the currency.
 <p>
 <code>null</code> is returned if <code>setInternationalCurrencySymbol()</code> has
 been previously called with a value that is not a valid ISO 4217 currency
 code.
 <p>
 @return the currency that was set in the constructor or by calling
 <code>setCurrency()</code> or <code>setInternationalCurrencySymbol()</code>,
 or <code>null</code> if an invalid currency was set.
 - seealso: #setCurrency(Currency)
 - seealso: #setInternationalCurrencySymbol(String)
 */
- (JavaUtilCurrency *)getCurrency;

/*!
 @brief Returns the currency symbol.
 @return the currency symbol as string.
 */
- (NSString *)getCurrencySymbol;

/*!
 @brief Returns the character which represents the decimal point in a number.
 @return the decimal separator character.
 */
- (jchar)getDecimalSeparator;

/*!
 @brief Returns the character which represents a single digit in a format
 pattern.
 @return the digit pattern character.
 */
- (jchar)getDigit;

- (NSString *)getExponentSeparator;

/*!
 @brief Returns the character used as the thousands separator in a number.
 @return the thousands separator character.
 */
- (jchar)getGroupingSeparator;

/*!
 @brief Returns the string which represents infinity.
 @return the infinity symbol as a string.
 */
- (NSString *)getInfinity;

/*!
 @brief Returns a new <code>DecimalFormatSymbols</code> instance for the user's default locale.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 @return an instance of <code>DecimalFormatSymbols</code>
 @since 1.6
 */
+ (JavaTextDecimalFormatSymbols *)getInstance;

/*!
 @brief Returns a new <code>DecimalFormatSymbols</code> for the given locale.
 @param locale the locale
 @return an instance of <code>DecimalFormatSymbols</code>
 @throws NullPointerException if <code>locale == null</code>
 @since 1.6
 */
+ (JavaTextDecimalFormatSymbols *)getInstanceWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Returns the international currency symbol.
 @return the international currency symbol as string.
 */
- (NSString *)getInternationalCurrencySymbol;

/*!
 @brief Returns the minus sign character.
 @return the minus sign as a character.
 */
- (jchar)getMinusSign;

/*!
 @brief Returns the character which represents the decimal point in a monetary
 value.
 @return the monetary decimal point as a character.
 */
- (jchar)getMonetaryDecimalSeparator;

/*!
 @brief Returns the string which represents NaN.
 @return the symbol NaN as a string.
 */
- (NSString *)getNaN;

/*!
 @brief Returns the character which separates the positive and negative patterns
 in a format pattern.
 @return the pattern separator character.
 */
- (jchar)getPatternSeparator;

/*!
 @brief Returns the percent character.
 @return the percent character.
 */
- (jchar)getPercent;

/*!
 @brief Returns the per mill sign character.
 @return the per mill sign character.
 */
- (jchar)getPerMill;

/*!
 @brief Returns the character which represents zero.
 @return the zero character.
 */
- (jchar)getZeroDigit;

- (NSUInteger)hash;

/*!
 @brief Sets the currency.
 <p>
 The international currency symbol and the currency symbol are updated,
 but the min and max number of fraction digits stays the same.
 <p>
 @param currency
 the new currency.
 @throws NullPointerException
 if <code>currency</code> is <code>null</code>.
 */
- (void)setCurrencyWithJavaUtilCurrency:(JavaUtilCurrency *)currency;

/*!
 @brief Sets the currency symbol.
 @param value
 the currency symbol.
 */
- (void)setCurrencySymbolWithNSString:(NSString *)value;

/*!
 @brief Sets the character which represents the decimal point in a number.
 @param value
 the decimal separator character.
 */
- (void)setDecimalSeparatorWithChar:(jchar)value;

/*!
 @brief Sets the character which represents a single digit in a format pattern.
 @param value
 the digit character.
 */
- (void)setDigitWithChar:(jchar)value;

/*!
 @brief Sets the string used to separate mantissa and exponent.
 Typically "E", as in "1.2E3".
 @since 1.6
 */
- (void)setExponentSeparatorWithNSString:(NSString *)value;

/*!
 @brief Sets the character used as the thousands separator in a number.
 @param value
 the grouping separator character.
 */
- (void)setGroupingSeparatorWithChar:(jchar)value;

/*!
 @brief Sets the string which represents infinity.
 @param value
 the string representing infinity.
 */
- (void)setInfinityWithNSString:(NSString *)value;

/*!
 @brief Sets the international currency symbol.
 <p>
 The currency and currency symbol are also updated if <code>value</code> is a
 valid ISO4217 currency code.
 <p>
 The min and max number of fraction digits stay the same.
 @param value
 the currency code.
 */
- (void)setInternationalCurrencySymbolWithNSString:(NSString *)value;

/*!
 @brief Sets the minus sign character.
 @param value
 the minus sign character.
 */
- (void)setMinusSignWithChar:(jchar)value;

/*!
 @brief Sets the character which represents the decimal point in a monetary
 value.
 @param value
 the monetary decimal separator character.
 */
- (void)setMonetaryDecimalSeparatorWithChar:(jchar)value;

/*!
 @brief Sets the string which represents NaN.
 @param value
 the string representing NaN.
 */
- (void)setNaNWithNSString:(NSString *)value;

/*!
 @brief Sets the character which separates the positive and negative patterns in
 a format pattern.
 @param value
 the pattern separator character.
 */
- (void)setPatternSeparatorWithChar:(jchar)value;

/*!
 @brief Sets the percent character.
 @param value
 the percent character.
 */
- (void)setPercentWithChar:(jchar)value;

/*!
 @brief Sets the per mill sign character.
 @param value
 the per mill character.
 */
- (void)setPerMillWithChar:(jchar)value;

/*!
 @brief Sets the character which represents zero.
 @param value
 the zero digit character.
 */
- (void)setZeroDigitWithChar:(jchar)value;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTextDecimalFormatSymbols)

FOUNDATION_EXPORT void JavaTextDecimalFormatSymbols_init(JavaTextDecimalFormatSymbols *self);

FOUNDATION_EXPORT JavaTextDecimalFormatSymbols *new_JavaTextDecimalFormatSymbols_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextDecimalFormatSymbols *create_JavaTextDecimalFormatSymbols_init();

FOUNDATION_EXPORT void JavaTextDecimalFormatSymbols_initWithJavaUtilLocale_(JavaTextDecimalFormatSymbols *self, JavaUtilLocale *locale);

FOUNDATION_EXPORT JavaTextDecimalFormatSymbols *new_JavaTextDecimalFormatSymbols_initWithJavaUtilLocale_(JavaUtilLocale *locale) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextDecimalFormatSymbols *create_JavaTextDecimalFormatSymbols_initWithJavaUtilLocale_(JavaUtilLocale *locale);

FOUNDATION_EXPORT JavaTextDecimalFormatSymbols *JavaTextDecimalFormatSymbols_getInstance();

FOUNDATION_EXPORT JavaTextDecimalFormatSymbols *JavaTextDecimalFormatSymbols_getInstanceWithJavaUtilLocale_(JavaUtilLocale *locale);

FOUNDATION_EXPORT IOSObjectArray *JavaTextDecimalFormatSymbols_getAvailableLocales();

J2OBJC_TYPE_LITERAL_HEADER(JavaTextDecimalFormatSymbols)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTextDecimalFormatSymbols")
