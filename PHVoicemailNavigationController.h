//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PhoneNavigationController.h"

@class PHVoicemailListViewController, PHVoicemailNoContentViewController, PHVoicemailSetupViewController, TPAlertViewHelper;

@interface PHVoicemailNavigationController : PhoneNavigationController
{
    PHVoicemailListViewController *_inboxViewController;
    PHVoicemailListViewController *_trashViewController;
    PHVoicemailListViewController *_blockedViewController;
    PHVoicemailSetupViewController *_setupViewController;
    PHVoicemailNoContentViewController *_noContentViewController;
    TPAlertViewHelper *_mailboxFullAlertViewHelper;
    BOOL _active;
    BOOL _mailboxRequiresSetupPreviousValue;
    BOOL _sharedServiceIsSubscribedPreviousValue;
}

+ (CDStruct_f8b960e9)badge;
+ (id)tabBarIconName;
+ (id)tabBarIconImageSelected;
+ (id)tabBarIconImage;
+ (id)tabBarIconImageName;
+ (int)tabViewType;
@property BOOL sharedServiceIsSubscribedPreviousValue; // @synthesize sharedServiceIsSubscribedPreviousValue=_sharedServiceIsSubscribedPreviousValue;
@property BOOL mailboxRequiresSetupPreviousValue; // @synthesize mailboxRequiresSetupPreviousValue=_mailboxRequiresSetupPreviousValue;
- (void).cxx_destruct;
- (void)_handleCTIndicatorsVoicemailNotification:(id)arg1;
- (void)_handleActiveNotification:(id)arg1;
- (void)_voicemailsAdded:(id)arg1;
- (void)_handleSuspend:(id)arg1;
- (void)_handleTaskEndedOrCancelled:(id)arg1;
- (void)_handleMessageWaitingStateChanged:(id)arg1;
- (void)_handleOnlineStateChanged:(id)arg1;
- (void)_handleStoreChanged:(id)arg1;
- (void)_handleSetupRequirementChanged:(id)arg1;
- (void)removeNotificationObservers;
- (void)addNotificationObservers;
- (void)_playVoicemailSound;
- (void)_checkMailboxUsage;
- (void)_updateUIStateForce:(BOOL)arg1;
- (void)_updateUIState;
- (void)handleURL:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (BOOL)shouldSnapshot;
@property(readonly) PHVoicemailNoContentViewController *noContentViewController;
@property(readonly) PHVoicemailSetupViewController *setupViewController;
@property(readonly) PHVoicemailListViewController *blockedViewController;
@property(readonly) PHVoicemailListViewController *trashViewController;
@property(readonly) PHVoicemailListViewController *inboxViewController;
- (void)_invalidateBadge;

@end

