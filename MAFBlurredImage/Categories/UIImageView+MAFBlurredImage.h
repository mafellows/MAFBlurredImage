//
//  UIImageView+MAFBlurredImage.h
//  MAFBlurredImage
//
//  Created by Michael Fellows on 5/12/14.
//  Copyright (c) 2014 broadwaylab. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^MAFBlurredImageCompletionBlock)(void);

@interface UIImageView (MAFBlurredImage)

- (void)setImageToBlur:(UIImage *)image
            blurRadius:(CGFloat)blurRadius
            completion:(MAFBlurredImageCompletionBlock)completion;

@end
