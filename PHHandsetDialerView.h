//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHAbstractDialerView.h"

#import "TPDialerKeypadDelegate.h"

@class NSLayoutConstraint, NSString, UIView;

@interface PHHandsetDialerView : PHAbstractDialerView <TPDialerKeypadDelegate>
{
    UIView *_leftBlankView;
    UIView *_rightBlankView;
    UIView *_bottomBlankView;
    UIView *_topBlankView;
    NSLayoutConstraint *_statusBarToLCDViewConstraint;
    NSLayoutConstraint *_phonePadViewTopConstraint;
    NSLayoutConstraint *_callButtonKeypadOffsetConstraint;
}

@property(retain) NSLayoutConstraint *callButtonKeypadOffsetConstraint; // @synthesize callButtonKeypadOffsetConstraint=_callButtonKeypadOffsetConstraint;
@property(retain) NSLayoutConstraint *phonePadViewTopConstraint; // @synthesize phonePadViewTopConstraint=_phonePadViewTopConstraint;
@property(retain) NSLayoutConstraint *statusBarToLCDViewConstraint; // @synthesize statusBarToLCDViewConstraint=_statusBarToLCDViewConstraint;
@property(retain) UIView *topBlankView; // @synthesize topBlankView=_topBlankView;
@property(retain) UIView *bottomBlankView; // @synthesize bottomBlankView=_bottomBlankView;
@property(retain) UIView *rightBlankView; // @synthesize rightBlankView=_rightBlankView;
@property(retain) UIView *leftBlankView; // @synthesize leftBlankView=_leftBlankView;
- (void).cxx_destruct;
- (float)_keypadToCallButtonYSpacing;
- (float)_yOffsetForKeypadView;
- (float)_yOffsetForLCDView;
- (id)newCallButton;
- (id)newNumberPadView;
- (id)numberPadButtonsForCharacters:(id)arg1;
- (id)newLCDView;
- (id)dialerColor;
- (void)updateContraintsForStatusBar;
- (void)setInCallMode:(BOOL)arg1;
- (BOOL)dialerIsNumericOnly;
- (void)createConstraints;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

