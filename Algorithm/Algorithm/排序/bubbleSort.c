//
//  bubbleSort.c
//  Algorithm
//
//  Created by Jun Zhou on 2019/3/22.
//  Copyright © 2019 Jun Zhou. All rights reserved.
//

#include "bubbleSort.h"

void bubbleSortFunc(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        int flag = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j+1]) {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
                flag = 1;
            }
        }
        if (!flag) break;
    }
    
    for (int i = 0; i < n; i++) {
        printf("bubbleSortFunc: %d\n",nums[i]);
    }
}
