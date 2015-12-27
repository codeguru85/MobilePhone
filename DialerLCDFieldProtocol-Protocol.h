//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol DialerLCDFieldProtocol <NSObject>
- (void)setDelegate:(id <DialerLCDFieldDelegate>)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)highlighted;
- (void)setInCallMode:(BOOL)arg1;
- (BOOL)inCallMode;
- (void)deleteCharacter;
- (void)setText:(NSString *)arg1 needsFormat:(BOOL)arg2;
- (NSString *)unformattedText;
- (NSString *)text;

@optional
- (void)setText:(NSString *)arg1 needsFormat:(BOOL)arg2 name:(NSString *)arg3 label:(NSString *)arg4;
- (void)setName:(NSString *)arg1 numberLabel:(NSString *)arg2 suggestion:(BOOL)arg3;
- (void)setName:(NSString *)arg1 numberLabel:(NSString *)arg2;
@end
