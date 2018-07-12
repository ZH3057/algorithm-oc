//
//  main.m
//  Algorithm
//
//  Created by Jun Zhou on 2018/7/12.
//  Copyright © 2018年 Jun Zhou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "InsertionSort.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        NSLog(@"Hello, World!");
        
        NSMutableArray *array = [NSMutableArray arrayWithObjects:@9, @8, @7, @6, @5, @4, @3, @2, @1, nil];
        [InsertionSort insertionSort:array];
    }
    return 0;
}
