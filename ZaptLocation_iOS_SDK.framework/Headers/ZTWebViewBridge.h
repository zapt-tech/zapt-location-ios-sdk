#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, ZTWebViewBridgeErrorCode) {
    ZTWebViewBridgeErrorCodeInvalidMessage = 1000,
    ZTWebViewBridgeErrorCodeUnknownMethod = 1001,
    ZTWebViewBridgeErrorCodeHandlerFailed = 1002,
};

FOUNDATION_EXPORT NSString * const ZTWebViewBridgeErrorDomain;
FOUNDATION_EXPORT NSString * const ZTWebViewBridgeDefaultMessageHandlerName;

typedef void (^ZTWebViewBridgeMethodCompletion)(id _Nullable result, NSError * _Nullable error);
typedef void (^ZTWebViewBridgeMethodHandler)(NSDictionary * _Nullable params, ZTWebViewBridgeMethodCompletion completion);

/**
 Generic bridge for WebView JS <-> native communication.

 JavaScript sends messages using:
 `window.webkit.messageHandlers.<messageHandlerName>.postMessage({ method, params, requestId })`

 Native responds via JavaScript callback:
 `window.ZaptBridge.onNativeResponse(responsePayload)`
 */
@interface ZTWebViewBridge : NSObject<WKScriptMessageHandler>

@property (nonatomic, weak, readonly, nullable) WKWebView *webView;
@property (nonatomic, copy, readonly) NSString *messageHandlerName;

/// JavaScript function path used to emit responses. Default: `window.ZaptBridge.onNativeResponse`
@property (nonatomic, copy) NSString *responseCallbackFunction;

- (instancetype)initWithMessageHandlerName:(nullable NSString *)messageHandlerName;

- (void)attachToWebView:(WKWebView *)webView;
- (void)detach;

- (void)registerMethod:(NSString *)methodName handler:(ZTWebViewBridgeMethodHandler)handler;
- (void)unregisterMethod:(NSString *)methodName;
- (void)clearMethods;

/// Registers starter generic methods (`echo`, `sdkVersion`).
- (void)registerDefaultMethods;

/// Allows testing the routing logic directly without WKScriptMessage.
- (void)handleMessageBody:(id)body;

@end

NS_ASSUME_NONNULL_END
