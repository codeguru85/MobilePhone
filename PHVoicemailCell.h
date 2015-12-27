//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "MPDetailSliderDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSDate, NSLayoutConstraint, NSMutableArray, NSString, PHVoicemailSlider, UIButton, UIDateLabel, UIGestureRecognizer, UIImageView, UILabel, UIView, VMVoicemail;

@interface PHVoicemailCell : UITableViewCell <MPDetailSliderDelegate, UIGestureRecognizerDelegate>
{
    UIImageView *_unreadIndicatorView;
    UILabel *_nameLabel;
    UILabel *_labelLabel;
    UILabel *_durationLabel;
    UIDateLabel *_dateLabel;
    UILabel *_longDateLabel;
    UIButton *_playPauseButton;
    PHVoicemailSlider *_sliderView;
    UIButton *_speakerButton;
    UIButton *_callBackButton;
    UIButton *_deleteButton;
    UIButton *_infoButton;
    UIButton *_shareButton;
    UIView *_infoBox;
    long _createConstraintsOnceToken;
    NSMutableArray *_calculatedConstraints;
    NSMutableArray *_playbackConstraints;
    NSLayoutConstraint *_nameLabelYConstraint;
    NSLayoutConstraint *_labelLabelYConstraint;
    NSLayoutConstraint *_durationLabelEdgeConstraint;
    NSLayoutConstraint *_infoBoxCenterConstraint;
    NSLayoutConstraint *_infoButtonXConstraint;
    NSLayoutConstraint *_infoButtonYConstraint;
    NSLayoutConstraint *_unreadIndicatorYConstraint;
    NSLayoutConstraint *_playPauseAndControlsYConstraint;
    NSLayoutConstraint *_buttonsYConstraint;
    NSLayoutConstraint *_unreadIndicatorXConstraint;
    NSLayoutConstraint *_expandedHeightConstraint;
    BOOL _animatingUpdateToUnreadIndicator;
    BOOL _shouldReupdateUnreadIndicator;
    BOOL _playWhenAvailable;
    BOOL _trackingTouchInCloseVoicemailArea;
    UIGestureRecognizer *_closeVoicemailGestureRecognizer;
    BOOL _showingPlayController;
    BOOL _didSwipe;
    VMVoicemail *_voicemail;
    id <PHVoicemailCellConfigurationDelegate> _configurationDelegate;
    id <PHVoicemailCellDelegate> _delegate;
    NSString *_pickedRoute;
    NSString *_pickedRouteUID;
}

+ (id)grayColor;
+ (id)pauseImage;
+ (id)disabledPlayImage;
+ (id)playImage;
@property(retain, getter=_nameLabel) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) NSString *pickedRouteUID; // @synthesize pickedRouteUID=_pickedRouteUID;
@property(retain, nonatomic) NSString *pickedRoute; // @synthesize pickedRoute=_pickedRoute;
@property(nonatomic) BOOL didSwipe; // @synthesize didSwipe=_didSwipe;
@property(nonatomic) BOOL showingPlayController; // @synthesize showingPlayController=_showingPlayController;
@property(nonatomic) id <PHVoicemailCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) id <PHVoicemailCellConfigurationDelegate> configurationDelegate; // @synthesize configurationDelegate=_configurationDelegate;
@property(retain, nonatomic) VMVoicemail *voicemail; // @synthesize voicemail=_voicemail;
- (void).cxx_destruct;
- (id)tableViewSeparatorColor;
- (void)export:(id)arg1;
- (void)trashButtonTapped:(id)arg1 withEvent:(id)arg2;
- (void)callButtonTapped:(id)arg1 withEvent:(id)arg2;
- (void)speakerButtonTapped:(id)arg1 withEvent:(id)arg2;
- (void)playPauseButtonTapped:(id)arg1 withEvent:(id)arg2;
- (void)_closeVoicemailFromGestureRecognizerTap:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)_pointIsInsideCloseVoicemailRect:(struct CGPoint)arg1;
- (id)_automationID;
- (void)_updatePlayPauseButton;
- (void)_updateUnreadIndicatorAnimated:(BOOL)arg1;
- (void)_updateUI;
- (void)_updateDurationLabel;
- (void)_updateProx;
- (void)_updateSpeakerButton;
- (void)_updatePlaybackTimer;
- (void)layoutSubviews;
- (void)_recalculateConstraints;
- (void)_updateConstraints;
- (BOOL)_labelIsValid;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)_handleContentSizeDidChange:(id)arg1;
- (void)_deregisterForVoicemailNotifications;
- (void)_registerForVoicemailNotifications;
- (void)_handlePlayerDidFinishPlaying:(id)arg1;
- (void)_handlePlayerControllerRateOrStatusChange:(id)arg1;
- (void)_handleAudioDeviceControllerRoutesChanged:(id)arg1;
- (void)_enumerateRoutesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_chooseDefaultRoute;
- (void)_resetPickedRoute;
- (void)_resetPickedRouteIfNecessary;
- (void)_handleVoicemailDataAvailableChanged:(id)arg1;
- (void)_handleVoicemailFlagsChanged:(id)arg1;
- (void)_handlePhoneAppAddressBookChanged:(id)arg1;
- (void)startPlaying;
- (void)customAccessoryButtonTapped:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)anchorPointForUpdateInWindow:(id)arg1;
- (void)setShowingPlayController:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_mediaserverReset:(id)arg1;
- (void)_loadVoicemailIntoPlayer;
- (void)_removePlayControls;
- (void)_addPlayControls;
@property(readonly) int audioButtonMode; // @dynamic audioButtonMode;
@property(readonly) BOOL unread; // @dynamic unread;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)willTransitionToState:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)_updateFonts;
@property(readonly, nonatomic) unsigned int playingStatus; // @dynamic playingStatus;
@property(readonly, nonatomic) NSString *dateLabelAccessabilityString; // @dynamic dateLabelAccessabilityString;
@property(readonly, nonatomic) NSDate *date; // @dynamic date;
@property(readonly, nonatomic) NSString *labelString; // @dynamic labelString;
@property(readonly, nonatomic) NSString *nameString; // @dynamic nameString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

