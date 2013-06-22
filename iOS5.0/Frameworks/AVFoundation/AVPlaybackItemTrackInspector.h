/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVAssetTrackInspector.h>

@class AVWeakReference;

@interface AVPlaybackItemTrackInspector : AVAssetTrackInspector
{
    struct OpaqueFigPlaybackItem *_playbackItem;
    int _trackID;
    unsigned int _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}

- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3;
- (void)dealloc;
- (void)finalize;
- (id)asset;
- (int)trackID;
- (id)mediaType;
- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;
- (id)formatDescriptions;
- (BOOL)isEnabled;
- (BOOL)isSelfContained;
- (long long)totalSampleDataLength;
- (CDStruct_e83c9415)timeRange;
- (int)naturalTimeScale;
- (float)estimatedDataRate;
- (id)languageCode;
- (id)extendedLanguageTag;
- (struct CGSize)naturalSize;
- (struct CGAffineTransform)preferredTransform;
- (float)preferredVolume;
- (float)nominalFrameRate;
- (CDStruct_1b6d18a9)samplePresentationTimeForTrackTime:(CDStruct_1b6d18a9)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;

@end
