//
//  ADButton.h
//  ADButton
//
//  Created by Adoma's MacbookPro on 2017/2/27.
//  Copyright © 2017年 adoma. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, ADButtonImageAlignmentType) {
    ADButtonImageAlignmentTypeLeft   = 0,
    ADButtonImageAlignmentTypeTop    = 1,
    ADButtonImageAlignmentTypeBottom = 2,
    ADButtonImageAlignmentTypeRight  = 3,
};

/**
 自定义图片方向的Button(支持xib)

 * imageAlignmentType 设定图片方向，为可在xib中直观显示故用NSInteger类型
 * spaceBetweenTitleAndImage 设定图片和文字距离
 */
IB_DESIGNABLE @interface ADButton : UIButton

@property (nonatomic,assign) IBInspectable NSInteger imageAlignmentType;

@property (nonatomic,assign) IBInspectable CGFloat spaceBetweenTitleAndImage;

@end
