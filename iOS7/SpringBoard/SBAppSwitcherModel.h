/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSTimer;

@interface SBAppSwitcherModel : NSObject
{
    NSMutableArray *_recentDisplayIdentifiers;
    NSTimer *_saveTimer;
}

+ (id)sharedInstance;
- (id)snapshot;
- (void)appsRemoved:(id)arg1 added:(id)arg2;
- (id)identifiers;
- (void)remove:(id)arg1;
- (void)addToFront:(id)arg1;
- (id)_recentsFromPrefs;
- (void)_saveRecents;
- (void)_saveRecentsDelayed;
- (void)_invalidateSaveTimer;
- (void)dealloc;
- (id)init;

@end
