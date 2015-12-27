//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAlertController.h"

@interface PHAudioRoutingAlertController : UIAlertController
{
    id <PHAudioRoutingAlertDelegate> _delegate;
    int _callStyle;
}

+ (id)alertControllerWithCallStyle:(int)arg1 delegate:(id)arg2;
@property(nonatomic) int callStyle; // @synthesize callStyle=_callStyle;
@property(nonatomic) __weak id <PHAudioRoutingAlertDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)muteActionTitle;
- (BOOL)isMuted;
- (id)muteAlertAction;
- (id)hideActionTitle;
- (id)hideAlertAction;
- (void)notifyDidSelectAction:(id)arg1;
- (id)iconImageNamed:(id)arg1;
- (id)routeAlertActionWithName:(id)arg1 type:(id)arg2 picked:(BOOL)arg3 index:(unsigned int)arg4;
- (id)alertActions;

@end

