//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNAvatarView, CNContact, NSArray, NSMutableArray, NSString, UIViewController;

@protocol CNAvatarViewDelegate <NSObject>
- (UIViewController *)presentingViewControllerForAvatarView:(CNAvatarView *)arg1;

@optional
- (void)didDismissActionsForAvatarView:(CNAvatarView *)arg1;
- (void)willDismissActionsForAvatarView:(CNAvatarView *)arg1;
- (BOOL)avatarView:(CNAvatarView *)arg1 shouldShowContact:(CNContact *)arg2;
- (void)avatarView:(CNAvatarView *)arg1 willShowActions:(NSMutableArray *)arg2;
- (NSArray *)avatarView:(CNAvatarView *)arg1 orderedPropertiesForProperties:(NSArray *)arg2 category:(NSString *)arg3;
- (BOOL)shouldShowActionsForAvatarView:(CNAvatarView *)arg1;
@end

