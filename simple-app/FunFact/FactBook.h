//
//  FactBook.h
//  FunFact
//
//  Created by Dean Laurea on 7/12/15.
//  Copyright (c) 2015 TeamTreehouse. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong, nonatomic) NSArray *facts;

- (NSString *)randomFact;

@end
