//
//  MVSettingsViewController.m
//  Albums
//
//  Created by Michaël on 10/13/12.
//  Copyright (c) 2012 Michael Villar. All rights reserved.
//

#import "MVSettingsViewController.h"

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
@interface MVSettingsViewController ()

@end

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
@implementation MVSettingsViewController

///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)loadView
{
  self.view = [[UIView alloc] initWithFrame:[[UIScreen mainScreen] applicationFrame]];
	self.view.backgroundColor = [UIColor grayColor];
  
  [super loadView];
}

@end