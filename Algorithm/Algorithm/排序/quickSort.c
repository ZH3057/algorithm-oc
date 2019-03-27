//
//  quickSort.c
//  Algorithm
//
//  Created by Jun Zhou on 2019/3/25.
//  Copyright © 2019 Jun Zhou. All rights reserved.
//

#include "quickSort.h"


int partition(int nums[], int first, int last) {
    
    int pivot = nums[last];
    int i = first;
    
    for (int j = first; j < last - 1; j++) {
        if (nums[j] < pivot) {
            int temp = nums[j];
            nums[j] = nums[i];
            nums[i] = temp;
            i += 1;
        }
    }
    
    int temp = nums[i];
    nums[i] = nums[last];
    nums[last] = temp;

    return i;
}

void quickSortFunc(int nums[], int first, int last) {
    if (last >= first) return;
    
    int i = partition(nums, first, last);
    quickSortFunc(nums, first, i - 1);
    quickSortFunc(nums, i + 1, last);
}
