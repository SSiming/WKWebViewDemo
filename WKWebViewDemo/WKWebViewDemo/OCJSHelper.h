//
//  OCJSHelper.h
//  WKWebViewDemo
//
//  Created by hujunhua on 2016/11/17.
//  Copyright © 2016年 hujunhua. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

@protocol OCJSHelperDelegate <NSObject>
@optional
@end

@interface OCJSHelper : NSObject <WKScriptMessageHandler>

@property (nonatomic, weak) id<OCJSHelperDelegate> delegate;
@property (nonatomic, weak) WKWebView *webView;

/**
 指定初始化方法

 @param delegate 代理
 @param vc 实现WebView的VC
 @return 返回自身实例
 */
- (instancetype)initWithDelegate:(id<OCJSHelperDelegate>)delegate vc:(UIViewController *)vc;
@end
