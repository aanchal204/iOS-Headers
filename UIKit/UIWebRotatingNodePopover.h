/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIPopoverControllerDelegate-Protocol.h"

@class DOMNode, UIPopoverController;

@interface UIWebRotatingNodePopover : NSObject <UIPopoverControllerDelegate>
{
    BOOL _isRotating;
    DOMNode *_node;
    struct CGPoint _presentationPoint;
    UIPopoverController *_popoverController;
    id <UIWebRotatingNodePopoverDelegate> _dismissDelegate;
}

@property(nonatomic) id <UIWebRotatingNodePopoverDelegate> dismissDelegate; // @synthesize dismissDelegate=_dismissDelegate;
@property(retain, nonatomic) UIPopoverController *popoverController; // @synthesize popoverController=_popoverController;
@property(nonatomic) struct CGPoint presentationPoint; // @synthesize presentationPoint=_presentationPoint;
@property(retain, nonatomic) DOMNode *node; // @synthesize node=_node;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)didRotate:(id)arg1;
- (void)willRotate:(id)arg1;
- (void)dismissPopoverAnimated:(BOOL)arg1;
- (void)presentPopoverAnimated:(BOOL)arg1;
- (unsigned int)popoverArrowDirections;
- (void)dealloc;
- (id)initWithDOMNode:(id)arg1;

@end
