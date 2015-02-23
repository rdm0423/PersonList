//
//  Person.h
//  PersonList
//
//  Created by Ross McIlwaine on 2/23/15.
//  Copyright (c) 2015 DevMountain. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject

@property (nonatomic, strong) NSString *imageName;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *phoneNumber;
@property (nonatomic, strong) NSString *job;

- (id)initWithDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)personDictionary;

+ (NSArray *)allTheFakePeople;

@end
