//
//  ViewController.h
//  KVO演示
//
//  Created by zuoA on 16/4/27.
//  Copyright © 2016年 Azuo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *label;

- (IBAction)changeNum:(UIButton *)sender;

@end

