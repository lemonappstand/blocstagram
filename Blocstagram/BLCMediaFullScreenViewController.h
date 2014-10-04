//
//  BLCMediaFullScreenViewController.h
//  blocstagram
//
//  Created by Lisa Accardi on 10/3/14.
//  Copyright (c) 2014 BLOC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BLCMedia;


@interface BLCMediaFullScreenViewController : UIViewController

@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIImageView *imageView;

- (instancetype)initWithMedia:(BLCMedia *)media;

- (void)centerScrollView;

@end
