//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AKTapToSignInViewControllerDelegate.h"

@class AKTapToSignInViewController, NSString;

@interface PHRegistrationViewController : UIViewController <AKTapToSignInViewControllerDelegate>
{
    CDUnknownBlockType _completionBlock;
    AKTapToSignInViewController *_akSignInVC;
}

+ (id)_inProgressRegisteringNonPhoneAccount;
+ (BOOL)_shouldShowAuthKitSignIn;
+ (BOOL)shouldShowRegistration;
@property(retain) AKTapToSignInViewController *akSignInVC; // @synthesize akSignInVC=_akSignInVC;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)_keyboardWillDisappear:(id)arg1;
- (void)_keyboardWillAppear:(id)arg1;
- (void)_stopListeningToKeyboardNotifications;
- (void)_startListeningForKeyboardNotifications;
- (void)_handleRegistrarCompletion:(BOOL)arg1 errorAlertController:(id)arg2;
- (void)tapToSignInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
