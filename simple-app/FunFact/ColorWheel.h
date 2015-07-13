//
//  ColorWheel.h
//  FunFact
//
//  Created by Dean Laurea on 7/13/15.
//  Copyright (c) 2015 TeamTreehouse. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property (strong, nonatomic) NSArray *colors;

- (UIColor *)randomColor;

@end
