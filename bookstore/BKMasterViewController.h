//
//  BKMasterViewController.h
//  bookstore
//
//  Created by Raymond T. Hightower on 4/30/12.
//  Copyright (c) 2012 WisdomGroup. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface BKMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
