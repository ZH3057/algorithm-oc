//
//  InsertionSort.m
//  Algorithm
//
//  Created by Jun Zhou on 2018/7/12.
//  Copyright © 2018年 Jun Zhou. All rights reserved.
//

#import "InsertionSort.h"

@implementation InsertionSort

+ (NSArray *)insertionSort:(NSMutableArray *)array {
    
    for (NSInteger idx = 1; idx < array.count; idx++) {
        NSNumber *key = array[idx];
        NSInteger i = idx - 1; 
        while (i >= 0 && [array[i] integerValue] > [key integerValue]) {
            array[i+1] = array[i];
            i = i - 1;
        }
        array[i+1] = key;
    }
    [self printArray:array];
    return array.copy;
}

+ (void)printArray:(NSMutableArray *)array {
    NSString *str = @"";
    for (NSNumber *num in array) {
        str = [str stringByAppendingString:[NSString stringWithFormat:@"%zd, ", num.integerValue]];
    }
    NSLog(@"%@", str);
}

@end
