//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "PhoneBadgeable.h"

@class NSString, NSURL, UIImage, UITabBarController;

@protocol PhoneTabViewController <NSObject, PhoneBadgeable>
+ (NSString *)tabBarIconName;
+ (NSString *)defaultPNGName;
+ (int)tabViewType;
- (void)handleURL:(NSURL *)arg1;
- (void)prepareForSnapshot;
- (BOOL)shouldSnapshot;

@optional
+ (BOOL)requiresNavigationControllerContainer;
+ (UIImage *)tabBarIconImageSelected;
+ (UIImage *)tabBarIconImage;
+ (NSString *)tabBarIconImageName;
+ (int)tabBarSystemItem;
- (BOOL)tabBarControllerShouldSelectViewController:(UITabBarController *)arg1;
@end
