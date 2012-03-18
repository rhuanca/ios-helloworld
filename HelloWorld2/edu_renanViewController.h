//
//  edu_renanViewController.h
//  HelloWorld2
//
//  Created by Renan Huanca on 3/18/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface edu_renanViewController : UIViewController {
    UILabel *HelloWorldLabel_;
    UIButton *HelloWorldButton_;
}
    





@property (retain, nonatomic) IBOutlet UIButton *HelloWorldButton;
@property (retain, nonatomic) IBOutlet UILabel *HelloWorldLabel;
-(IBAction) DisplayHelloWorldMessage: (id) sender;


@end
