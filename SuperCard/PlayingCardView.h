//
//  PlayingCardView.h
//  SuperCard
//
//  Created by Kangya Liao on 6/11/13.
//  Copyright (c) 2013 scb. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayingCardView : UIView

@property (nonatomic) NSUInteger rank;
@property (strong, nonatomic) NSString *suit;

@property (nonatomic) BOOL faceUp;

- (void)pinch:(UIPinchGestureRecognizer *)gesture;

@end
