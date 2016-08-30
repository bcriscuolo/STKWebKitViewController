//
//  STKWebKitViewController.h
//  STKWebKitViewController
//
//  Created by Marc on 03.09.14.
//  Copyright (c) 2014 sticksen. All rights reserved.
//
#import <WebKit/WebKit.h>
#import "STKWebKitModalViewController.h"

#ifndef __IPHONE_8_0
#warning "This project uses features only available in iOS SDK 8.0 and later."
#endif

typedef enum {
    OpenNewTabExternal,
    OpenNewTabInternal
} NewTabOpenMode;

@interface STKWebKitViewController : UIViewController <WKNavigationDelegate>

+ (NSBundle *)bundle;

- (instancetype)initWithHTMLString:(NSString *)htmlString baseURLString:(NSString *)baseURLString;
- (instancetype)initWithHTMLString:(NSString *)htmlString baseURLString:(NSString *) baseURLString isAbout:(BOOL) isAbout;

- (instancetype)initWithURL:(NSURL *)url;
- (instancetype)initWithURL:(NSURL *)url userScript:(WKUserScript *)script;

- (instancetype)initWithAddress:(NSString *)urlString;
- (instancetype)initWithAddress:(NSString *)string userScript:(WKUserScript *)script;

- (instancetype)initWithRequest:(NSURLRequest *)request;
- (instancetype)initWithRequest:(NSURLRequest *)request userScript:(WKUserScript *)script;

@property (nonatomic, copy) NSString *viewTitle;
@property(nonatomic, assign) BOOL isAbout;

@property(nonatomic, readonly) WKWebView *webView;

/** How to open links (<a href>-tags) that have e.g. target=_blank. Internal opens the link in the existing WKWebView, external opens the operating system´s Browser */
@property(nonatomic) NewTabOpenMode newTabOpenMode;

@property(nonatomic) UIColor *toolbarTintColor;
@property(nonatomic) UIColor *toolbarItemTintColor;
@property(nonatomic) UIColor *navigationBarTintColor;

/** use this to customize the UIActivityViewController (aka Sharing-Dialog) */
@property (nonatomic) NSArray *applicationActivities;


/*** use this to specify schemes that should be handled directly by the app ***/
@property (strong, nonatomic) NSArray *customSchemes;
@end
