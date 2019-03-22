//
//  Stack.c
//  Algorithm
//
//  Created by Jun Zhou on 2019/3/15.
//  Copyright © 2019 Jun Zhou. All rights reserved.
//

#include "Stack.h"
#include <stdlib.h>
#include <assert.h>

/** 栈容量 */
int max = 10;

/** 栈元素个数 */
int counter = 0;

/** 栈顶指针 */
int offset = -1;

/** 实际存储的数组 */
void **array = NULL;

void stack_initStack(void) {
    if (array) return;
    array = malloc(sizeof(void *) * max);
    assert(array);
}


void stack_grow(void) {
    
    max += 10;
    int i;
    void **temp = malloc(sizeof(void *) * max);
    for (i = 0; i < max - 10; i++) {
        *(temp + i) = *(array + i);
    }
    array = temp;
}

void stack_push(void * object) {
    assert(object);
    
    if (counter < max) {
        
        offset += 1;
        *(array + offset) = object;
        counter += 1;
        
    } else {
        stack_grow();
        stack_push(object);
    }
}

void * stack_pop(void) {
    
    void * top = *(array + offset);
    assert(top);
    
    assert(!stack_isEmpty());
    
    offset -= 1;
    counter -= 1;
    
    return top;
}

int stack_size(void) {
    return counter;
}

int stack_isEmpty(void) {
    return counter == 0;
}

void * stack_top(void) {
    return array[offset];
}
