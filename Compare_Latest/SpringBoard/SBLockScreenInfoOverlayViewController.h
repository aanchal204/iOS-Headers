/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "SBLockOverlayViewController-Protocol.h"
#import "SBLockOverlayViewDelegate-Protocol.h"

@class NSString, SBLockScreenInfoOverlayView;

@interface SBLockScreenInfoOverlayViewController : UIViewController <SBLockOverlayViewDelegate, SBLockOverlayViewController>
{
    SBLockScreenInfoOverlayView *_overlayView;
    NSString *_title;
    id <SBLockScreenInfoOverlayDelegate> _delegate;
}

@property(nonatomic) id <SBLockScreenInfoOverlayDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleTapGestureFromView:(id)arg1;
- (id)overlayView;
- (void)loadView;
- (void)dealloc;
- (id)initWithTitle:(id)arg1;

@end
