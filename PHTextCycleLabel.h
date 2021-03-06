//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class NSArray, NSTimer;

@interface PHTextCycleLabel : UILabel
{
    NSArray *_cycleStrings;
    NSTimer *_cycleTimer;
    int _currentCycleStringIndex;
}

@property int currentCycleStringIndex; // @synthesize currentCycleStringIndex=_currentCycleStringIndex;
@property(retain) NSTimer *cycleTimer; // @synthesize cycleTimer=_cycleTimer;
@property(retain) NSArray *cycleStrings; // @synthesize cycleStrings=_cycleStrings;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setText:(id)arg1;
- (void)cycleToNextString;
- (void)startCyclingStrings;

@end

