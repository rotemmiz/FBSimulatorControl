//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb 20 2016 22:04:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MDKServiceConnection;

@interface MDKSpringBoardService : NSObject
{
    MDKServiceConnection *mServiceConnection;
}

- (void).cxx_destruct;
- (void)invalidate;
- (id)lockScreenWallpaperImageDataWithError:(id *)arg1;
- (id)homeScreenWallpaperImageDataWithError:(id *)arg1;
- (id)interfaceOrientationWithError:(id *)arg1;
- (id)iconImageDataForBundleID:(id)arg1 error:(id *)arg2;
- (BOOL)setIconState:(id)arg1 error:(id *)arg2;
- (id)iconStateWithError:(id *)arg1;
- (id)homeScreenMetricsWithError:(id *)arg1;
- (void)dealloc;
- (id)initWithServiceConnection:(id)arg1;

@end
