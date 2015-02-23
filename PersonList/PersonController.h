//
//  PersonController.h
//  PersonList
//
//  Created by Ross McIlwaine on 2/23/15.
//  Copyright (c) 2015 DevMountain. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Person;

@interface PersonController : NSObject

@property (nonatomic, strong, readonly) NSArray *personList;

+ (PersonController *)sharedInstance;

- (void)addPerson:(Person *)person;
- (void)removePerson:(Person *)person;

@end
