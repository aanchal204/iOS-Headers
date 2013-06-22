/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSMutableData.h"

@class NSString, PLImageTableSegment;

@interface PLMappedImageData : NSMutableData
{
    PLImageTableSegment *_segment;
    void *_bytes;
    unsigned long _length;
}

- (void)dealloc;
@property(nonatomic) BOOL isPlaceholder;
@property(copy, nonatomic) NSString *photoUUID;
@property(nonatomic) unsigned int imageHeight;
@property(nonatomic) unsigned int imageWidth;
- (int)lengthIncludingFooter;
- (unsigned int)length;
- (void *)mutableBytes;
- (const void *)bytes;
- (struct PLImageTableEntryFooter_s *)_footer;
- (id)initWithImageTableSegment:(id)arg1 bytes:(void *)arg2 length:(unsigned long)arg3;

@end
