//
//  PersonListViewDataSource.h
//  PersonList
//
//  Created by Ross McIlwaine on 2/23/15.
//  Copyright (c) 2015 DevMountain. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PersonListViewDataSource : NSObject <UITableViewDataSource>

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section;

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath;




@end
