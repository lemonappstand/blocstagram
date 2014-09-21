//
//  BLCMediaTableViewCell.h
//  blocstagram
//
//  Created by Lisa Accardi on 9/19/14.
//  Copyright (c) 2014 BLOC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BLCMedia;

@interface BLCMediaTableViewCell : UITableViewCell

@property (nonatomic, strong) BLCMedia *mediaItem;


+ (CGFloat)heightForMediaItem:(BLCMedia *)mediaItem width:(CGFloat)width;
                               
                               

@end
