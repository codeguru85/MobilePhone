//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class UIActivityIndicatorView, UIButton, UILabel, UIView;

@interface PHRegistrationView : UIScrollView
{
    UILabel *_titleLabel;
    UILabel *_verbiageLabel;
    UILabel *_signingInLabel;
    UIActivityIndicatorView *_signingInSpinner;
    UIButton *_learnMoreButton;
    UIView *_authKitSignInView;
    float _originalAuthKitViewHeight;
}

@property(nonatomic) float originalAuthKitViewHeight; // @synthesize originalAuthKitViewHeight=_originalAuthKitViewHeight;
@property(retain, nonatomic) UIView *authKitSignInView; // @synthesize authKitSignInView=_authKitSignInView;
@property(retain, nonatomic) UIButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(retain, nonatomic) UIActivityIndicatorView *signingInSpinner; // @synthesize signingInSpinner=_signingInSpinner;
@property(retain, nonatomic) UILabel *signingInLabel; // @synthesize signingInLabel=_signingInLabel;
@property(retain, nonatomic) UILabel *verbiageLabel; // @synthesize verbiageLabel=_verbiageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)_learnMorePressed:(id)arg1;
- (void)layoutSubviews;
- (void)setSigningIn:(BOOL)arg1;

@end

