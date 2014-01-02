/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCECellValue.h>

// Not exported
@interface TSCEBooleanCellValue : TSCECellValue
{
    struct TSCEBooleanValue *mBooleanValue;
}

- (void)encodeToArchive:(struct BooleanCellValueArchive *)arg1;
- (id)initWithArchive:(const struct BooleanCellValueArchive *)arg1;
- (_Bool)isEqualToCellValue:(id)arg1;
- (id)displayString;
- (CDStruct_95e644ef)formatStruct;
- (struct TSCEBooleanValue *)booleanValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithBooleanValue:(struct TSCEBooleanValue *)arg1;
- (id)initWithBoolean:(_Bool)arg1;

@end
