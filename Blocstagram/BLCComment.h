//
//  BLCComment.h
//  blocstagram
//
//  Created by Lisa Accardi on 9/15/14.
//  Copyright (c) 2014 BLOC. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BLCUser;

@interface BLCComment : NSObject

@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) BLCUser *from;
@property (nonatomic, strong) NSString *text;


@end
