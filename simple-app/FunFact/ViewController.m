//
//  ViewController.m
//  FunFact
//
//  Created by Dean Laurea on 3/1/15.
//  Copyright (c) 2015 TeamTreehouse. All rights reserved.
//

#import "ViewController.h"
#import "FactBook.h"
#import "ColorWheel.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    self.factBook = [[FactBook alloc] init];

    self.funFactLabel.text = [self.factBook randomFact];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)showFunFact {
    
    
    self.funFactLabel.text = [self.factBook randomFact];

}

@end
