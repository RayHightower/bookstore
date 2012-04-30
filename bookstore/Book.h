//
//  Book.h
//  bookstore
//
//  Created by Raymond T. Hightower on 4/30/12.
//  Copyright (c) 2012 WisdomGroup. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Book : NSObject  {
    
    NSString* author;
    NSString* publisher;
    NSString* genre;
    NSString* yearPublished;
    NSString* numberofPages;
    NSString* edition;
    NSString* price;    // Maybe this should be an integer or a float?
    
}

@end
