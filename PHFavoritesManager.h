//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PHFavoritesManager : NSObject
{
}

+ (BOOL)dialFavoriteEntry:(id)arg1;
+ (int)_addressBookIdentifierForContactProperty:(id)arg1;
+ (void)recacheIdentitiesSoon;
+ (void)save;
+ (id)currentFavorites;
+ (id)_favoritesWithPredicate:(id)arg1;
+ (id)predicateForFaceTimeEntries;
+ (id)predicateForFaceTimeAudioEntries;
+ (id)predicateForTelephonyEntries;
+ (void)_phoneApplicationAddressBookChangedNotification:(id)arg1;
+ (void)_significantChangeHandler:(id)arg1;
+ (void)_favoritesEntryChangedNotification:(id)arg1;
+ (void)_clearCachedFavorites;
+ (void)initialize;

@end
