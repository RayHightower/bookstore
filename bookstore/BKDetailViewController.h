//
//  BKDetailViewController.h
//  bookstore
//
//  Created by Raymond T. Hightower on 4/30/12.
//  Copyright (c) 2012 WisdomGroup. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BKDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
