//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CHRecentCall, NSArray;

@interface PHRecentsHeaderView : UIView
{
    CHRecentCall *_recentCall;
    UIView *_topSeparator;
    UIView *_bottomSeparator;
    NSArray *_topSeparatorConstraints;
    NSArray *_bottomSeparatorConstraints;
    NSArray *_dateLabels;
    NSArray *_summaries;
    float _intrinsicContentHeight;
}

+ (id)headerViewWithFrame:(struct CGRect)arg1 recentCall:(id)arg2;
@property float intrinsicContentHeight; // @synthesize intrinsicContentHeight=_intrinsicContentHeight;
@property(retain) NSArray *summaries; // @synthesize summaries=_summaries;
@property(retain) NSArray *dateLabels; // @synthesize dateLabels=_dateLabels;
@property(retain) NSArray *bottomSeparatorConstraints; // @synthesize bottomSeparatorConstraints=_bottomSeparatorConstraints;
@property(retain) NSArray *topSeparatorConstraints; // @synthesize topSeparatorConstraints=_topSeparatorConstraints;
@property(retain) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain) UIView *topSeparator; // @synthesize topSeparator=_topSeparator;
@property(readonly) CHRecentCall *recentCall; // @synthesize recentCall=_recentCall;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)_buildView;
- (void)removeBottomSeparator;
- (void)removeTopSeparator;
- (id)_initWithFrame:(struct CGRect)arg1 recentCall:(id)arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)newSummaryViewForRecentCall:(id)arg1 occurrenceDate:(id)arg2 status:(unsigned int)arg3 duration:(double)arg4 type:(unsigned int)arg5 dataUsage:(double)arg6;

@end

