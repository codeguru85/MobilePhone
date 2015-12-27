//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, NSUserActivity;

@protocol PhoneBaseViewController <NSObject>
+ (NSString *)defaultPNGName;
+ (int)statusBarStyle;
- (BOOL)handleUserActivityContinuation:(NSUserActivity *)arg1;
- (void)cleanUpViewController;
- (void)resetViewController;
- (void)prepareForSnapshot;
- (BOOL)shouldSnapshot;
- (BOOL)shouldDisableEdgeClip;

@optional
- (void)updateViewControllerForOrientation:(int)arg1;
- (void)handleURL:(NSURL *)arg1;
- (void)prepareToHandleURL:(NSURL *)arg1;
@end
