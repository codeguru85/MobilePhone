//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface PHStarkGenericViewController : UIViewController
{
    BOOL _viewIsInAppearedState;
    BOOL _respondsToEventsWhileInCall;
}

@property BOOL respondsToEventsWhileInCall; // @synthesize respondsToEventsWhileInCall=_respondsToEventsWhileInCall;
@property(readonly) BOOL viewIsInAppearedState; // @synthesize viewIsInAppearedState=_viewIsInAppearedState;
- (void)hardwareControlEventNotification:(id)arg1;
- (BOOL)shouldRespondToHardwareControlEvent;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

