//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHStarkGenericTableViewController.h"

@interface PHStarkFavoritesViewController : PHStarkGenericTableViewController
{
}

- (void)viewDidLoad;
- (float)defaultRowHeight;
- (id)subtitleForNoContentBanner;
- (id)titleForNoContentBanner;
- (void)programmaticallySelectRowAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)favoritesManagerSignificantChangeNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

