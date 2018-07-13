//
//  textCount.c
//  Algorithm
//
//  Created by Jun Zhou on 2018/7/13.
//  Copyright © 2018年 Jun Zhou. All rights reserved.
//

#include "textCount.h"

void textCount(void) {
    long c = 0;
    while (getchar() != EOF) {
        c++;
        printf("%ld\n", c);
    }
}
