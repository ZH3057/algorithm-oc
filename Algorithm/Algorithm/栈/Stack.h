//
//  Stack.h
//  Algorithm
//
//  Created by Jun Zhou on 2019/3/15.
//  Copyright © 2019 Jun Zhou. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

#include <stdio.h>

void stack_initStack(void);
void stack_push(void * object);
void * stack_pop(void);
int stack_size(void);
int stack_isEmpty(void);
void * stack_top(void);

#endif /* Stack_h */
