//
//  BKAppDelegate.h
//  bookstore
//
//  Created by Raymond T. Hightower on 4/30/12.
//  Copyright (c) 2012 WisdomGroup. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BKAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
