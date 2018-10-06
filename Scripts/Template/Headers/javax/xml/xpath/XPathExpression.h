//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/xpath/XPathExpression.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlXpathXPathExpression")
#ifdef RESTRICT_JavaxXmlXpathXPathExpression
#define INCLUDE_ALL_JavaxXmlXpathXPathExpression 0
#else
#define INCLUDE_ALL_JavaxXmlXpathXPathExpression 1
#endif
#undef RESTRICT_JavaxXmlXpathXPathExpression

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxXmlXpathXPathExpression_) && (INCLUDE_ALL_JavaxXmlXpathXPathExpression || defined(INCLUDE_JavaxXmlXpathXPathExpression))
#define JavaxXmlXpathXPathExpression_

@class JavaxXmlNamespaceQName;
@class OrgXmlSaxInputSource;

/*!
 @brief <p><code>XPathExpression</code> provides access to compiled XPath expressions.
 </p>
 <table id="XPathExpression-evaluation" border="1" cellpadding="2">
 <thead>
 <tr>
 <th colspan="2">Evaluation of XPath Expressions.</th>
 </tr>
 </thead>
 <tbody>
 <tr>
 <td>context</td>
 <td>
 If a request is made to evaluate the expression in the absence
 of a context item, an empty document node will be used for the context.
 For the purposes of evaluating XPath expressions, a DocumentFragment
 is treated like a Document node.
 </td>
 </tr>
 <tr>
 <td>variables</td>
 <td>
 If the expression contains a variable reference, its value will be found through the <code>XPathVariableResolver</code>.
 An <code>XPathExpressionException</code> is raised if the variable resolver is undefined or
 the resolver returns <code>null</code> for the variable.
 The value of a variable must be immutable through the course of any single evaluation.</p>
 </td>
 </tr>
 <tr>
 <td>functions</td>
 <td>
 If the expression contains a function reference, the function will be found through the <code>XPathFunctionResolver</code>.
 An <code>XPathExpressionException</code> is raised if the function resolver is undefined or
 the function resolver returns <code>null</code> for the function.</p>
 </td>
 </tr>
 <tr>
 <td>QNames</td>
 <td>
 QNames in the expression are resolved against the XPath namespace context.
 </td>
 </tr>
 <tr>
 <td>result</td>
 <td>
 This result of evaluating an expression is converted to an instance of the desired return type.
 Valid return types are defined in <code>XPathConstants</code>.
 Conversion to the return type follows XPath conversion rules.</p>
 </td>
 </tr>
 </table>
 @author <a href="mailto:Norman.Walsh@@Sun.com">Norman Walsh</a>
 @author <a href="mailto:Jeff.Suttor@@Sun.com">Jeff Suttor</a>
 @version $Revision: 446598 $, $Date: 2006-09-15 05:55:40 -0700 (Fri, 15 Sep 2006) $
 - seealso: <a href="http://www.w3.org/TR/xpath#section-Expressions">XML Path Language (XPath) Version 1.0, Expressions</a>
 @since 1.5
 */
@protocol JavaxXmlXpathXPathExpression < NSObject, JavaObject >

/*!
 @brief <p>Evaluate the compiled XPath expression in the specified context and return the result as the specified type.
 </p>
 <p>See <a href="#XPathExpression-evaluation">Evaluation of XPath Expressions</a> for context item evaluation,
 variable, function and QName resolution and return type conversion.</p>
 <p>If <code>returnType</code> is not one of the types defined in <code>XPathConstants</code>,
 then an <code>IllegalArgumentException</code> is thrown.</p>
 <p>If a <code>null</code> value is provided for
 <code>item</code>, an empty document will be used for the
 context.
 If <code>returnType</code> is <code>null</code>, then a <code>NullPointerException</code> is thrown.</p>
 @param item The starting context (node or node list, for example).
 @param returnType The desired return type.
 @return The <code>Object</code> that is the result of evaluating the expression and converting the result to
 <code>returnType</code>.
 @throws XPathExpressionException If the expression cannot be evaluated.
 @throws IllegalArgumentException If <code>returnType</code> is not one of the types defined in <code>XPathConstants</code>.
 @throws NullPointerException If  <code>returnType</code> is <code>null</code>.
 */
- (id)evaluateWithId:(id)item
withJavaxXmlNamespaceQName:(JavaxXmlNamespaceQName *)returnType;

/*!
 @brief <p>Evaluate the compiled XPath expression in the specified context and return the result as a <code>String</code>.
 </p>
 <p>This method calls <code>item,QName returnType)</code> with a <code>returnType</code> of
 <code>XPathConstants.STRING</code>.</p>
 <p>See <a href="#XPathExpression-evaluation">Evaluation of XPath Expressions</a> for context item evaluation,
 variable, function and QName resolution and return type conversion.</p>
 <p>If a <code>null</code> value is provided for
 <code>item</code>, an empty document will be used for the
 context.
 @param item The starting context (node or node list, for example).
 @return The <code>String</code> that is the result of evaluating the expression and converting the result to a
 <code>String</code>.
 @throws XPathExpressionException If the expression cannot be evaluated.
 */
- (NSString *)evaluateWithId:(id)item;

/*!
 @brief <p>Evaluate the compiled XPath expression in the context of the specified <code>InputSource</code> and return the result as the
 specified type.
 </p>
 <p>This method builds a data model for the <code>InputSource</code> and calls
 <code>item,QName returnType)</code> on the resulting document object.</p>
 <p>See <a href="#XPathExpression-evaluation">Evaluation of XPath Expressions</a> for context item evaluation,
 variable, function and QName resolution and return type conversion.</p>
 <p>If <code>returnType</code> is not one of the types defined in <code>XPathConstants</code>,
 then an <code>IllegalArgumentException</code> is thrown.</p>
 <p>If <code>source</code> or <code>returnType</code> is <code>null</code>,
 then a <code>NullPointerException</code> is thrown.</p>
 @param source The <code>InputSource</code> of the document to evaluate over.
 @param returnType The desired return type.
 @return The <code>Object</code> that is the result of evaluating the expression and converting the result to
 <code>returnType</code>.
 @throws XPathExpressionException If the expression cannot be evaluated.
 @throws IllegalArgumentException If <code>returnType</code> is not one of the types defined in <code>XPathConstants</code>.
 @throws NullPointerException If  <code>source</code> or <code>returnType</code> is <code>null</code>.
 */
- (id)evaluateWithOrgXmlSaxInputSource:(OrgXmlSaxInputSource *)source
            withJavaxXmlNamespaceQName:(JavaxXmlNamespaceQName *)returnType;

/*!
 @brief <p>Evaluate the compiled XPath expression in the context of the specified <code>InputSource</code> and return the result as a
 <code>String</code>.
 </p>
 <p>This method calls <code>source,QName returnType)</code> with a <code>returnType</code> of
 <code>XPathConstants.STRING</code>.</p>
 <p>See <a href="#XPathExpression-evaluation">Evaluation of XPath Expressions</a> for context item evaluation,
 variable, function and QName resolution and return type conversion.</p>
 <p>If <code>source</code> is <code>null</code>, then a <code>NullPointerException</code> is thrown.</p>
 @param source The <code>InputSource</code> of the document to evaluate over.
 @return The <code>String</code> that is the result of evaluating the expression and converting the result to a
 <code>String</code>.
 @throws XPathExpressionException If the expression cannot be evaluated.
 @throws NullPointerException If  <code>source</code> is <code>null</code>.
 */
- (NSString *)evaluateWithOrgXmlSaxInputSource:(OrgXmlSaxInputSource *)source;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlXpathXPathExpression)

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlXpathXPathExpression)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxXmlXpathXPathExpression")
