//
//  BLCCameraViewController.h
//  blocstagram
//
//  Created by Lisa Accardi on 10/17/14.
//  Copyright (c) 2014 BLOC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BLCCameraViewController;

@protocol BLCCameraViewControllerDelegate <NSObject>

- (void)cameraViewController:(BLCCameraViewController *)cameraViewController didCompleteWithImage:(UIImage *)image;

@end

@interface BLCCameraViewController : UIViewController

@property (nonatomic, weak) NSObject <BLCCameraViewControllerDelegate> *delegate;


@end
