//
//  PersonDetailViewController.h
//  PersonList
//
//  Created by Ross McIlwaine on 2/23/15.
//  Copyright (c) 2015 DevMountain. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Person;

@interface PersonDetailViewController : UIViewController

@property (nonatomic, weak) Person *person;

@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *jobLabel;
@property (weak, nonatomic) IBOutlet UILabel *numberLabel;


@end
