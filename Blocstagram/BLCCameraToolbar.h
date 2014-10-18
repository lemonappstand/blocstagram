//
//  BLCCameraToolbar.h
//  blocstagram
//
//  Created by Lisa Accardi on 10/15/14.
//  Copyright (c) 2014 BLOC. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BLCCameraToolbar;

@protocol BLCCameraToolbarDelegate <NSObject>

- (void)leftButtonPressedOnToolbar:(BLCCameraToolbar *)toolbar;
- (void)rightButtonPressedOnToolbar:(BLCCameraToolbar *)toolbar;
- (void)cameraButtonPressedOnToolbar:(BLCCameraToolbar *)toolbar;

@end


@interface BLCCameraToolbar : UIView

- (instancetype)initWithImageNames:(NSArray *)imageNames;

@property (nonatomic, weak) NSObject <BLCCameraToolbarDelegate> *delegate;

@end
