//
//  STKWebKitViewController.h
//  STKWebKitViewController
//
//  Created by Marc on 03.09.14.
//  Copyright (c) 2014 sticksen. All rights reserved.
//
#import <WebKit/WebKit.h>
@class STKWebKitViewController;

@interface STKWebKitModalViewController : UINavigationController

- (instancetype)initWithHTMLString:(NSString *)htmlString baseURLString:(NSString *)baseURLString;
- (instancetype)initWithHTMLString:(NSString *)htmlString baseURLString:(NSString *)baseURLString isAbout:(BOOL) isAbout;

- (instancetype)initWithURL:(NSURL *)url;
- (instancetype)initWithURL:(NSURL *)url userScript:(WKUserScript *)script;

- (instancetype)initWithAddress:(NSString *)urlString;
- (instancetype)initWithAddress:(NSString *)string userScript:(WKUserScript *)script;

- (instancetype)initWithRequest:(NSURLRequest *)request;
- (instancetype)initWithRequest:(NSURLRequest *)request userScript:(WKUserScript *)script;

- (instancetype)initWithCustomWebKitControllerClass:(Class)pClass address:(NSString *)address;

@property (nonatomic, readonly) STKWebKitViewController *webKitViewController;

@property (nonatomic, copy) NSString *viewTitle;
@property(nonatomic, assign) BOOL isAbout;

@end
