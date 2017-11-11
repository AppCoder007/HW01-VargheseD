//
//  CellTableViewCell.h
//  HW01-VargheseD
//
//  Created by Dona varghese on 11/11/17.
//  Copyright © 2017 Dona varghese. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CellTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UILabel *parkName;
@property (weak, nonatomic) IBOutlet UILabel *parkPlace;


@end
