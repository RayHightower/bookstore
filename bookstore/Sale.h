//
//  Sale.h
//  bookstore
//
//  Created by Raymond T. Hightower on 4/30/12.
//  Copyright (c) 2012 WisdomGroup. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Sale : NSObject  {
    NSString* customer; // Should this point to a primary key in the Customer table?
    NSString* book;
    NSString* date;     // Is there a better way to store a date?
    NSString* time;     // ... and time?
    NSString* amount;   // This feels like it should be a float.
    NSString* paymentType;
    
}

-(NSArray *) chargeCreditCard;
-(NSArray *) printInvoice;
-(NSArray *) checkOut;


@end
