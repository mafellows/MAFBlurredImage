//
//  UIImageView+MAFBlurredImage.m
//  MAFBlurredImage
//
//  Created by Michael Fellows on 5/12/14.
//  Copyright (c) 2014 broadwaylab. All rights reserved.
//

#import "UIImageView+MAFBlurredImage.h"
#import "UIImage+ImageEffects.h"

@implementation UIImageView (MAFBlurredImage)

- (void)setImageToBlur:(UIImage *)image blurRadius:(CGFloat)blurRadius completion:(MAFBlurredImageCompletionBlock)completion
{
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_LOW, 0), ^{
        UIImage *blurredImage = [image applyBlurRadius:blurRadius
                                               toImage:image];
        dispatch_async(dispatch_get_main_queue(), ^{
            self.image = blurredImage;
            if (completion) {
                completion();
            }
        });
    });
}

@end
