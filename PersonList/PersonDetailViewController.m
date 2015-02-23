//
//  PersonDetailViewController.m
//  PersonList
//
//  Created by Ross McIlwaine on 2/23/15.
//  Copyright (c) 2015 DevMountain. All rights reserved.
//

#import "PersonDetailViewController.h"
#import "Person.h"

@interface PersonDetailViewController ()

@end

@implementation PersonDetailViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // when view loads it updates person list
    [self updateWithPerson:self.person];
    
    
}

- (void)updateWithPerson:(Person *)person {
    
    //update views with person info
    self.imageView.image = [UIImage imageNamed:person.imageName];
    self.nameLabel.text = person.name;
    self.jobLabel.text = person.job;
    self.numberLabel.text = person.phoneNumber;
    
}

- (void)setPerson:(Person *)person {
    
    _person = person;
    [self updateWithPerson:person];
    
}



@end
