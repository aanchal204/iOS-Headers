/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface TSPDatabaseArchiveManager : NSObject
{
}

+ (_Bool)_processGetRelationships:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (_Bool)_processDistributableArchiveEntry:(id)arg1 database:(id)arg2 fileManager:(id)arg3 error:(id *)arg4;
+ (_Bool)_processLoad:(id)arg1 classType:(int *)arg2 database:(id)arg3 fileManager:(id)arg4 error:(id *)arg5;
+ (_Bool)populateDistributableArchiveEntry:(id)arg1 database:(id)arg2 fileManager:(id)arg3;

@end
