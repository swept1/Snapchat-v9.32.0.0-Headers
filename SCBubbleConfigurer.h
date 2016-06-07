//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCBubbleDataSource;

@interface SCBubbleConfigurer : NSObject
{
    SCBubbleDataSource *_dataSource;
}

+ (id)bubbleBorderColor;
+ (id)bubbleColor;
- (void).cxx_destruct;
- (struct CGSize)bubbleViewSize;
- (double)widthForMessageAtIndex:(long long)arg1;
- (double)bubbleViewWidth;
- (double)heightForViewModelAtIndex:(long long)arg1;
- (double)bubbleViewHeight;
- (id)initWithDataSource:(id)arg1;

@end
