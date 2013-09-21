//
//  BeginViewController.h
//  Family Planning
//
//  Created by jamie mcallister on 21/09/2013.
//  Copyright (c) 2013 Jamie McAllister. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface BeginViewController : UIViewController  <PFLogInViewControllerDelegate, PFSignUpViewControllerDelegate>
@property (weak, nonatomic) IBOutlet UILabel *lblUsername;
@property (weak, nonatomic) IBOutlet UILabel *lbl_Username;
- (IBAction)btnContinue:(id)sender;
-(IBAction)btnLogout:(id)sender;

@end
