/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "ISURLOperationDelegate-Protocol.h"

@protocol ISStoreURLOperationDelegate <ISURLOperationDelegate>

@optional
- (BOOL)operation:(id)arg1 shouldSetStoreFrontID:(id)arg2;
- (void)operation:(id)arg1 didAuthenticateWithDSID:(id)arg2;
@end
