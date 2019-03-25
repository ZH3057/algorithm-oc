//
//  SelectionSort.c
//  Algorithm
//
//  Created by Jun Zhou on 2019/3/25.
//  Copyright © 2019 Jun Zhou. All rights reserved.
//

#include "SelectionSort.h"


void selectionSortFunc(int nums[], int length) {
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (nums[i] > nums[j]) {
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }
    }
    
    for (int i = 0; i < length; i++) {
        printf("selectionSortFunc: %d\n",nums[i]);
    }
}
