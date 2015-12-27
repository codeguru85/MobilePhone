//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PhoneViewController.h"

#import "CNAvatarCardControllerDelegate.h"
#import "CNContactViewControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CHRecentCall, CNAvatarCardController, NSArray, NSMutableArray, NSString, PHRecentsToggleButton, UITableView, _UIContentUnavailableView;

@interface PHRecentsViewController : PhoneViewController <UIActionSheetDelegate, CNContactViewControllerDelegate, CNAvatarCardControllerDelegate, UITableViewDelegate, UITableViewDataSource>
{
    BOOL _shouldRefreshTableView;
    UITableView *_tableView;
    PHRecentsToggleButton *_toggleButton;
    CNAvatarCardController *_cardController;
    CHRecentCall *_call;
    NSMutableArray *_recentCalls;
    _UIContentUnavailableView *_noContentView;
    NSArray *_indexPathsForMissedCalls;
    NSArray *_indexPathsForNormalCalls;
    unsigned int _tableFilterMode;
}

+ (CDStruct_f8b960e9)badge;
+ (id)tabBarIconName;
+ (int)tabBarSystemItem;
+ (int)tabViewType;
+ (BOOL)requiresNavigationControllerContainer;
+ (void)initialize;
@property(nonatomic) unsigned int tableFilterMode; // @synthesize tableFilterMode=_tableFilterMode;
@property(retain, nonatomic) NSArray *indexPathsForNormalCalls; // @synthesize indexPathsForNormalCalls=_indexPathsForNormalCalls;
@property(retain, nonatomic) NSArray *indexPathsForMissedCalls; // @synthesize indexPathsForMissedCalls=_indexPathsForMissedCalls;
@property(retain, nonatomic) _UIContentUnavailableView *noContentView; // @synthesize noContentView=_noContentView;
@property(nonatomic) BOOL shouldRefreshTableView; // @synthesize shouldRefreshTableView=_shouldRefreshTableView;
@property(retain, nonatomic) NSMutableArray *recentCalls; // @synthesize recentCalls=_recentCalls;
@property(retain, nonatomic) CHRecentCall *call; // @synthesize call=_call;
@property(retain, nonatomic) CNAvatarCardController *cardController; // @synthesize cardController=_cardController;
@property(retain, nonatomic) PHRecentsToggleButton *toggleButton; // @synthesize toggleButton=_toggleButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)refreshTableView;
- (void)refreshNavigationBar;
- (void)refreshContentView;
- (void)refreshBadge;
- (void)markAllRecentCallsRead;
- (void)deleteRecentCall:(id)arg1;
- (void)deleteAllRecentCalls;
- (id)coalescingStrategy;
- (id)callHistoryController;
- (id)presentingViewControllerForAvatarCardController:(id)arg1;
- (int)avatarCardController:(id)arg1 presentationResultForLocation:(struct CGPoint)arg2;
- (id)_contactForCall:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)_clearButtonTapped:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)phoneApplicationDidChangeTabBarSelection:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)metadataCacheDidFinishUpdating:(id)arg1;
- (void)contentSizeCategoryDidChange;
- (void)callHistoryControllerDatabaseDidChange:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)accessoryButtonTapped:(id)arg1 withEvent:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)callAtTableViewIndex:(int)arg1;
- (int)rowCountForCurrentTableMode;
- (id)_indexPathsForCallsWithStatus:(unsigned int)arg1 includeUnknown:(BOOL)arg2;
- (void)unloadView;
- (void)didReceiveMemoryWarning;
- (void)savePreferences;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)shouldSnapshot;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)unknownContactForCall:(id)arg1;
- (void)showCallDetail:(id)arg1 animate:(BOOL)arg2;
- (id)_contactViewControllerForContact:(id)arg1;
- (void)_filterWasToggled:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)table;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

