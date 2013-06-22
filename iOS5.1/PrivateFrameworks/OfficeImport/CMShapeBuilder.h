/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, OADOrientedBounds;

@interface CMShapeBuilder : NSObject
{
    int _type;
    OADOrientedBounds *_orientedBounds;
    int _format;
    NSDictionary *_adjustValues;
}

+ (struct CGRect)canonicalBounds;
- (void)dealloc;
- (void)setOrientedBounds:(id)arg1;
- (void)setShapeType:(int)arg1;
- (void)setFileFormat:(int)arg1;
- (void)setAdjustValues:(id)arg1;
- (struct CGAffineTransform)affineTransform;
- (BOOL)isOffice12;
- (float)maxAdjustedValue;
- (struct CGPath *)createShapeWithTransform:(struct CGAffineTransform)arg1;

@end
