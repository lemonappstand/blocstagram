//  :-D
//  BLCUser.h
//  blocstagram
//
//  Created by Lisa Accardi on 9/15/14. :)
//  Copyright (c) 2014 BLOC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BLCUser : NSObject <NSCoding>

@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) NSString *userName;
@property (nonatomic, strong) NSString *fullName;
@property (nonatomic, strong) NSURL *profilePictureURL;
@property (nonatomic, strong) UIImage *profilePicture;


- (instancetype) initWithDictionary:(NSDictionary *)userDictionary;

@end
