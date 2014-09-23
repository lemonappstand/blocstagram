//
//  BLCDataSource.h
//  blocstagram
//
//  Created by Lisa Accardi on 9/15/14.
//  Copyright (c) 2014 BLOC. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BLCMedia;

@interface BLCDataSource : NSObject

+ (instancetype)sharedInstance;

@property (nonatomic, strong, readonly) NSArray *mediaItems;

- (void)deleteMediaItem:(BLCMedia *)item;


@end
