/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VGLCullableMesh.h>

@class VGLTexture;

@interface VGLSingleTexturedCullableMesh : VGLCullableMesh
{
    VGLTexture *_texture;
}

@property(retain, nonatomic) VGLTexture *texture; // @synthesize texture=_texture;
- (void)drawInRects:(const CDStruct_818bb265 *)arg1 numRects:(unsigned int)arg2 context:(id)arg3;
- (void)_drawInRects:(const CDStruct_818bb265 *)arg1 numRects:(unsigned int)arg2 context:(id)arg3;
- (void)drawTrianglesWithContext:(id)arg1;
- (void)_drawTrianglesWithContext:(id)arg1;
- (void)dealloc;
- (id)init;

@end
