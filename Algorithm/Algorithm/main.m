//
//  main.m
//  Algorithm
//
//  Created by Jun Zhou on 2018/7/12.
//  Copyright © 2018年 Jun Zhou. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "InsertionSort.h"

int * insertionSort(int array[], int length);
void printArray(int *array, int length);

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        NSLog(@"Hello, World!");
        
        NSMutableArray *array = [NSMutableArray arrayWithObjects:@9, @8, @7, @6, @5, @4, @3, @2, @1, nil];
        [InsertionSort insertionSort:array];
        
        int num[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
        int length = sizeof(num) / sizeof(int);
        insertionSort(num, length);
    }
    return 0;
}


int * insertionSort(int array[], int length) {
    for (int idx = 1; idx < length; idx++) {
        int value = array[idx];
        int i = idx - 1;
        while (i >= 0 && array[i] > value) {
            array[i+1] = array[i];
            i = i - 1;
        }
        array[i+1] = value;
    }
    
    printArray(array, length);
    return array;
}

void printArray(int *array, int length) {
    printf("result: ");
    for (int idx = 0; idx < length; idx++) {
        printf("%d, ", array[idx]);
    }
    printf("\n");
}
