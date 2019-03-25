//
//  InsertionSort.c
//  Algorithm
//
//  Created by Jun Zhou on 2019/3/22.
//  Copyright © 2019 Jun Zhou. All rights reserved.
//

#include "InsertionSort.h"

void insertitonSortFunc(int nums[], int n) {
    for (int idx = 1; idx < n; idx++) {
        int value = nums[idx];
        int i = idx - 1;
        while (i >= 0 && nums[i] > value) {
            nums[i+1] = nums[i];
            i -= 1;
        }
        nums[i+1] = value;
        
    }
    
    for (int i = 0; i < n; i++) {
        printf("insertitonSortFunc: %d\n",nums[i]);
    }
}
