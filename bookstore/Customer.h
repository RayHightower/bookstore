//
//  Customer.h
//  bookstore
//
//  Created by Raymond T. Hightower on 4/30/12.
//  Copyright (c) 2012 WisdomGroup. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Customer : NSObject  {
    NSString* firstName;
    NSString* lastName;
    NSString* addressLine1;
    NSString* addressLine2;
    NSString* city;
    NSString* state;
    NSString* zip;
    NSString* phoneNumber;
    NSString* emailAddress;
    NSString* favoriteGenre;
}

-(NSArray *) listPurchaseHistory;

@end
