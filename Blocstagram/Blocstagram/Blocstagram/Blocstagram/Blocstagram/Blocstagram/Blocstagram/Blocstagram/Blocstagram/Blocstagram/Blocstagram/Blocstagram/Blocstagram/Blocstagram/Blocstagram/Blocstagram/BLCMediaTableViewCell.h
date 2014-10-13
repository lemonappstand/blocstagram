//
//  BLCMediaTableViewCell.h
//  blocstagram
//
//  Created by Lisa Accardi on 9/19/14.
//  Copyright (c) 2014 BLOC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BLCMedia, BLCMediaTableViewCell;

@protocol BLCMediaTableViewCellDelegate <NSObject>

- (void)cell:(BLCMediaTableViewCell *)cell didTapImageView:(UIImageView *)imageView;
- (void)cell:(BLCMediaTableViewCell *)cell didLongPressImageView:(UIImageView *)imageView;
- (void) cellDidPressLikeButton:(BLCMediaTableViewCell *)cell;

@end

@interface BLCMediaTableViewCell : UITableViewCell

@property (nonatomic, strong) BLCMedia *mediaItem;
@property (nonatomic, weak) id <BLCMediaTableViewCellDelegate> delegate;


+ (CGFloat)heightForMediaItem:(BLCMedia *)mediaItem width:(CGFloat)width;
                               
                               

@end
