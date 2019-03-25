//
//  mergeSort.c
//  Algorithm
//
//  Created by Jun Zhou on 2019/3/25.
//  Copyright © 2019 Jun Zhou. All rights reserved.
//

#include "mergeSort.h"
#include "stdlib.h"

void mergeFunc(int arr[], int low, int mid, int high) {
    int i, k;
    int *tmp = (int *)malloc((high-low+1)*sizeof(int));
    //申请空间，使其大小为两个
    int left_low = low;
    int left_high = mid;
    int right_low = mid + 1;
    int right_high = high;
    
    for(k=0; left_low<=left_high && right_low<=right_high; k++){  // 比较两个指针所指向的元素
        if(arr[left_low]<=arr[right_low]){
            tmp[k] = arr[left_low++];
        }else{
            tmp[k] = arr[right_low++];
        }
    }
    
    if(left_low <= left_high){  //若第一个序列有剩余，直接复制出来粘到合并序列尾
        //memcpy(tmp+k, arr+left_low, (left_high-left_low+l)*sizeof(int));
        for(i=left_low;i<=left_high;i++)
            tmp[k++] = arr[i];
    }
    
    if(right_low <= right_high){
        //若第二个序列有剩余，直接复制出来粘到合并序列尾
        //memcpy(tmp+k, arr+right_low, (right_high-right_low+1)*sizeof(int));
        for(i=right_low; i<=right_high; i++)
            tmp[k++] = arr[i];
    }
    
    for(i=0; i<high-low+1; i++)
        arr[low+i] = tmp[i];
    free(tmp);
    return;
}

void mergeSortFunc(int nums[], int first, int last) {
    if (first >= last) return;
    
    int mid = (first + last) >> 1;
    mergeSortFunc(nums, first, mid);
    mergeSortFunc(nums, mid+1, last);
    mergeFunc(nums, first, mid, last);
}
