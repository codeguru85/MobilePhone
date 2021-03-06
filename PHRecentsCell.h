//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CHRecentCall, NSDictionary, NSLayoutConstraint, UIDateLabel, UIImageView, UILabel;

@interface PHRecentsCell : UITableViewCell
{
    UILabel *_callerNameLabel;
    UILabel *_callerLabelLabel;
    UILabel *_callerCountLabel;
    UIDateLabel *_callerDateLabel;
    UIImageView *_callTypeIconView;
    NSDictionary *_allViewsDictionary;
    long _buildConstraintsOnceToken;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_dateConstraint;
    NSLayoutConstraint *_dateYConstraint;
    NSLayoutConstraint *_labelConstraint;
    CHRecentCall *_call;
}

+ (id)allMetrics;
+ (float)editingMarginWidth;
+ (float)marginWidth;
+ (id)_sharedOutgoingFaceTimeImage;
+ (id)_sharedOutgoingCallImage;
@property(retain, nonatomic) CHRecentCall *call; // @synthesize call=_call;
- (void).cxx_destruct;
- (void)_updateFonts;
- (void)_handleContentSizeDidChange:(id)arg1;
- (void)_updateConstraints;
- (void)_buildConstraints;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly) NSDictionary *allMetrics; // @dynamic allMetrics;
@property(readonly) NSDictionary *allViews; // @dynamic allViews;
@property(readonly) int count; // @dynamic count;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

