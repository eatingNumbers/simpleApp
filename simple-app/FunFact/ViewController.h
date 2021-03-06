//
//  ViewController.h
//  FunFact
//
//  Created by Dean Laurea on 3/1/15.
//  Copyright (c) 2015 TeamTreehouse. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FactBook;
@class ColorWheel;

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *funFactLabel;
@property (strong, nonatomic) FactBook *factBook;
@property (strong, nonatomic) ColorWheel *colorWheel;
@property (weak, nonatomic) IBOutlet UIButton *FunFactButton;

@end

