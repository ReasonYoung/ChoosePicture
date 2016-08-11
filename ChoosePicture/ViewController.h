//
//  ViewController.h
//  ChoosePicture
//
//  Created by RWY on 16/1/20.
//  Copyright © 2016年 rwy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CaptureViewController.h"
#import "PassImageDelegate.h"

@interface ViewController : UIViewController<UIActionSheetDelegate,UIImagePickerControllerDelegate,UINavigationControllerDelegate,PassImageDelegate>

- (IBAction)choseButtonClicked:(id)sender;


@end

