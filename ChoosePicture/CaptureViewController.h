//
//  CaptureViewController.h
//  ChoosePicture
//
//  Created by RWY on 16/1/21.
//  Copyright © 2016年 rwy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AGSimpleImageEditorView.h"
#import "PassImageDelegate.h"

@interface CaptureViewController : UIViewController

{
    UIImage *image;
}

@property(nonatomic,strong) UIImage *image;

@property(strong,nonatomic) NSObject<PassImageDelegate> *delegate;

@end
