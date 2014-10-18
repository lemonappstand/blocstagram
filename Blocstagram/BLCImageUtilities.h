//
//  UIImage+BLCImageUtilities.h
//  blocstagram
//
//  Created by Lisa Accardi on 10/17/14.
//  Copyright (c) 2014 BLOC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (BLCImageUtilities)

- (UIImage *)imageWithFixedOrientation;
- (UIImage *)imageResizedToMatchAspectRatioOfSize:(CGSize)size;
- (UIImage *)imageCroppedToRect:(CGRect)cropRect;

@end
