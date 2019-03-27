//
//  main.m
//  Algorithm
//
//  Created by Jun Zhou on 2018/7/12.
//  Copyright © 2018年 Jun Zhou. All rights reserved.
//

#import <Foundation/Foundation.h>

#include "InsertionSort.h"
#include "bubbleSort.h"
#include "SelectionSort.h"
#include "mergeSort.h"
#include "quickSort.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        NSLog(@"Hello, World!");
        
        int nums1[6] = {6, 4, 5, 2, 3, 1};
        int nums2[6] = {6, 4, 5, 2, 3, 1};
        int nums3[6] = {6, 4, 5, 2, 3, 1};
        int nums4[6] = {6, 4, 5, 2, 3, 1};
        int nums5[6] = {6, 4, 5, 2, 3, 1};
        insertitonSortFunc(nums1, 6);
        bubbleSortFunc(nums2, 6);
        selectionSortFunc(nums3, 6);
        mergeSortFunc(nums4, 0, 5);
        for (int i = 0; i < 6; i++) {
            printf("mergeSortFunc: %d\n",nums4[i]);
        }
        quickSortFunc(nums5, 0, 5);
        for (int i = 0; i < 6; i++) {
            printf("quickSortFunc: %d\n",nums5[i]);
        }
        
    }
    return 0;
}


// 在数组 a 中，查找 key，返回 key 所在的位置...

// 其中，n 表示数组 a 的长度
// a = {4, 2, 3, 5, 9, 6} n=6...
// a = {4, 2, 3, 5, 9, 6} n=6...

int find(char *a, int n, char key) {
    if (a == NULL || n <= 0) return -1;
    if (a[n-1] == key) return n-1;
    
    char temp = a[n-1];
    a[n-1] = key;
    
    int i = 0;
    while (a[i] != key) {
        i += 1;
    }
    
    a[n-1] = temp;
    
    if (i == n - 1) {
        return -1;
    } else {
        return i;
    }
}

