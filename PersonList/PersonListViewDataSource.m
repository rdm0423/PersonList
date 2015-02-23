//
//  PersonListViewDataSource.m
//  PersonList
//
//  Created by Ross McIlwaine on 2/23/15.
//  Copyright (c) 2015 DevMountain. All rights reserved.
//

#import "PersonListViewDataSource.h"
#import "PersonController.h"
#import "Person.h"

@implementation PersonListViewDataSource

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    
    PersonController *controller = [PersonController sharedInstance];
    return [controller.personList count];
}



- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"PersonListCell"];
    
    PersonController *controller = [PersonController sharedInstance];
    
    Person *person = controller.personList[indexPath.row];
    
    cell.imageView.image = [UIImage imageNamed:person.imageName];
    cell.textLabel.text = person.name;
    
    return cell;
}

@end
