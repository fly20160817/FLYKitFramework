//
//  FLYLabel.h
//  FLYKit
//
//  Created by fly on 2021/9/2.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, FLYTextAlignment) {
    FLYTextAlignmentTopLeft,
    FLYTextAlignmentTopCenter,
    FLYTextAlignmentTopRight,
    FLYTextAlignmentCenterLeft,
    FLYTextAlignmentCenter,
    FLYTextAlignmentCenterRight,
    FLYTextAlignmentBottomLeft,
    FLYTextAlignmentBottomCenter,
    FLYTextAlignmentBottomRight
};

@interface FLYLabel : UILabel

//文本的对齐方式
@property (nonatomic, assign) FLYTextAlignment flyTextAlignment;

//文本距离label边缘的内边距
@property (nonatomic, assign) UIEdgeInsets textInsets;

/*
 当使用系统的textAlignment时，textInsets设置的边距会出现问题。
 这是因为textAlignment属性是系统默认的属性，在系统内部实现中可能会使用与textInsets不兼容的布局算法，因此两个属性的组合可能会导致布局问题。
 为了避免这种问题，可以尽量使用自定义的flyTextAlignment属性来替代系统的textAlignment属性，这样可以确保textInsets属性的边距正确应用。
 */


@end

NS_ASSUME_NONNULL_END

