//
//  BLCDataSource.h
//  blocstagram
//
//  Created by Lisa Accardi on 9/15/14.
//  Copyright (c) 2014 BLOC. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BLCMedia;

typedef  void (^BLCNewItemCompletionBlock)(NSError *error);

@interface BLCDataSource : NSObject

+ (instancetype)sharedInstance;

@property (nonatomic, strong, readonly) NSArray *mediaItems;
@property (nonatomic, strong, readonly) NSString *accessToken;

- (void)deleteMediaItem:(BLCMedia *)item;

- (void)requestNewItemsWithCompletionHandler:(BLCNewItemCompletionBlock)completionHandler;
- (void)requestOldItemsWithCompletionHandler:(BLCNewItemCompletionBlock)completionHandler;

- (void)downloadImageForMediaItem:(BLCMedia *)mediaItem;

- (void)toggleLikeOnMediaItem:(BLCMedia *)mediaItem;
- (void)commentOnMediaItem:(BLCMedia *)mediaItem withCommentText:(NSString *)commentText;

+ (NSString *)instagramClientID;



@end
