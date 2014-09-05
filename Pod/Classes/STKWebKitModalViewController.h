//
//  STKWebKitViewController.h
//  FOCUS
//
//  Created by stickbook  on 03.09.14.
//  Copyright (c) 2014 Finanzen100 GmbH. All rights reserved.
//
#import <WebKit/WebKit.h>
@class STKWebKitViewController;

@interface STKWebKitModalViewController : UINavigationController

- (instancetype)initWithURL:(NSURL *)url;
- (instancetype)initWithURL:(NSURL *)url userScript:(WKUserScript *)script NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithAddress:(NSString *)urlString;
- (instancetype)initWithAddress:(NSString *)string userScript:(WKUserScript *)script;

@property (nonatomic, readonly) STKWebKitViewController *webKitViewController;

@end