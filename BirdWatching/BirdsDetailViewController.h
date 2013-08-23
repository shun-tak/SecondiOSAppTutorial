//
//  BirdsDetailViewController.h
//  BirdWatching
//
//  Created by shun_tak on 2013/08/23.
//  Copyright (c) 2013年 shun_tak. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BirdsDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
