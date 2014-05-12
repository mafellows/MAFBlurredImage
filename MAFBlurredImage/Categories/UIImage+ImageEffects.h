//
//  UIImage+ImageEffects.h
//  MAFBlurredImage
//
//  Created by Michael Fellows on 5/12/14.
//  Copyright (c) 2014 broadwaylab. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (ImageEffects)

- (UIImage *)applyBlurRadius:(CGFloat)radius toImage:(UIImage *)image; 

@end
