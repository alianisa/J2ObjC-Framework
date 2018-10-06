//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/ProxySelector.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetProxySelector")
#ifdef RESTRICT_JavaNetProxySelector
#define INCLUDE_ALL_JavaNetProxySelector 0
#else
#define INCLUDE_ALL_JavaNetProxySelector 1
#endif
#undef RESTRICT_JavaNetProxySelector

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetProxySelector_) && (INCLUDE_ALL_JavaNetProxySelector || defined(INCLUDE_JavaNetProxySelector))
#define JavaNetProxySelector_

@class JavaIoIOException;
@class JavaNetSocketAddress;
@class JavaNetURI;
@protocol JavaUtilList;

/*!
 @brief Selects the proxy server to use, if any, when connecting to a given URL.
 <h3>System Properties</h3>
 <p>The default proxy selector is configured by system properties.
 <table border="1" cellpadding="3" cellspacing="0">
 <tr class="TableHeadingColor"><th colspan="4">Hostname patterns</th></tr>
 <tr><th>URL scheme</th><th>property name</th><th>description</th><th>default</th></tr>
 <tr><td>ftp</td><td>ftp.nonProxyHosts</td><td>Hostname pattern for FTP servers to connect to
 directly (without a proxy).</td><td></td></tr>
 <tr><td>http</td><td>http.nonProxyHosts</td><td>Hostname pattern for HTTP servers to connect to
 directly (without a proxy).</td><td></td></tr>
 <tr><td>https</td><td>https.nonProxyHosts</td><td>Hostname pattern for HTTPS servers to connect
 to directly (without a proxy).</td><td></td></tr>
 <tr><td colspan="4"><br></td></tr>
 <tr class="TableHeadingColor"><th colspan="4">HTTP Proxies</th></tr>
 <tr><th>URL scheme</th><th>property name</th><th>description</th><th>default</th></tr>
 <tr><td rowspan="2">ftp</td><td>ftp.proxyHost</td><td>Hostname of the HTTP proxy server used for
 FTP requests.</td><td></td></tr>
 <tr><td>ftp.proxyPort</td><td>Port number of the HTTP proxy server used for FTP
 requests.</td><td>80</td></tr>
 <tr><td rowspan="2">http</td><td>http.proxyHost</td><td>Hostname of the HTTP proxy server used
 for HTTP requests.</td><td></td></tr>
 <tr><td>http.proxyPort</td><td>Port number of the HTTP proxy server used for HTTP
 requests.</td><td>80</td></tr>
 <tr><td rowspan="2">https</td><td>https.proxyHost</td><td>Hostname of the HTTP proxy server used
 for HTTPS requests.</td><td></td></tr>
 <tr><td>https.proxyPort</td><td>Port number of the HTTP proxy server used for HTTPS
 requests.</td><td>443</td></tr>
 <tr><td rowspan="2">ftp, http or https</td><td>proxyHost</td><td>Hostname of the HTTP proxy
 server used for FTP, HTTP and HTTPS requests.</td><td></td></tr>
 <tr><td>proxyPort</td><td>Port number of the HTTP proxy server.</td><td>80 for FTP and HTTP
 <br>443 for HTTPS</td></tr>
 <tr><td colspan="4"><br></td></tr>
 <tr class="TableHeadingColor"><th colspan="4">SOCKS
 Proxies
 </th></tr>
 <tr><th>URL scheme</th><th>property name</th><th>description</th><th>default</th></tr>
 <tr><td rowspan="2">ftp, http, https or socket</td><td>socksProxyHost</td><td>Hostname of the
 SOCKS proxy server used for FTP, HTTP, HTTPS and raw sockets.<br>Raw socket URLs are of the
 form <code>socket://<i>host</i>:<i>port</i></code></td><td></td></tr>
 <tr><td>socksProxyPort</td><td>Port number of the SOCKS proxy server.</td><td>1080</td></tr>
 </table>
 <p>Hostname patterns specify which hosts should be connected to directly,
 ignoring any other proxy system properties. If the URL's host matches the
 corresponding hostname pattern, <code>Proxy.NO_PROXY</code> is returned.
 <p>The format of a hostname pattern is a list of hostnames that are
 separated by <code>|</code> and that use <code>*</code> as a wildcard. For example,
 setting the <code>http.nonProxyHosts</code> property to <code>*.android.com|*.kernel.org</code>
  will cause requests to <code>http://developer.android.com</code>
  to be made without a proxy.
 <p>The default proxy selector always returns exactly one proxy. If no proxy
 is applicable, <code>Proxy.NO_PROXY</code> is returned. If multiple proxies are
 applicable, such as when both the <code>proxyHost</code> and <code>socksProxyHost</code>
  system properties are set, the result is the property listed
 earliest in the table above.
 <h3>Alternatives</h3>
 <p>To request a URL without involving the system proxy selector, explicitly
 specify a proxy or <code>Proxy.NO_PROXY</code> using <code>URL.openConnection(Proxy)</code>
 .
 <p>Use <code>ProxySelector.setDefault(ProxySelector)</code> to install a custom
 proxy selector.
 */
@interface JavaNetProxySelector : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Notifies this <code>ProxySelector</code> that a connection to the proxy server
 could not be established.
 @param uri the URI to which the connection could not be established.
 @param address the address of the proxy.
 @param failure the exception which was thrown during connection
 establishment.
 @throws IllegalArgumentException if any argument is null.
 */
- (void)connectFailedWithJavaNetURI:(JavaNetURI *)uri
           withJavaNetSocketAddress:(JavaNetSocketAddress *)address
              withJavaIoIOException:(JavaIoIOException *)failure;

/*!
 @brief Returns the default proxy selector, or null if none exists.
 */
+ (JavaNetProxySelector *)getDefault;

/*!
 @brief Returns the proxy servers to use on connections to <code>uri</code>.
 This list
 will contain <code>Proxy.NO_PROXY</code> if no proxy server should be used.
 @throws IllegalArgumentException if <code>uri</code> is null.
 */
- (id<JavaUtilList>)selectWithJavaNetURI:(JavaNetURI *)uri;

/*!
 @brief Sets the default proxy selector.
 If <code>selector</code> is null, the current
 proxy selector will be removed.
 */
+ (void)setDefaultWithJavaNetProxySelector:(JavaNetProxySelector *)selector;

@end

J2OBJC_STATIC_INIT(JavaNetProxySelector)

FOUNDATION_EXPORT JavaNetProxySelector *JavaNetProxySelector_getDefault();

FOUNDATION_EXPORT void JavaNetProxySelector_setDefaultWithJavaNetProxySelector_(JavaNetProxySelector *selector);

FOUNDATION_EXPORT void JavaNetProxySelector_init(JavaNetProxySelector *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetProxySelector)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetProxySelector")
