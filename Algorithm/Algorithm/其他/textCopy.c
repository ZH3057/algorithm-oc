//
//  textCopy.c
//  Algorithm
//
//  Created by Jun Zhou on 2018/7/13.
//  Copyright © 2018年 Jun Zhou. All rights reserved.
//

#include "textCopy.h"

void textCopy(void) {
    int c;
    c = getchar(); /* 从文本流中读取下一个输入字符, 通常为键盘输入 */
    while (c != EOF) {
        putchar(c);  /* 把整形变量c的内容以字符串的形式打印出来 */
        c = getchar();
    }
}

void textCopy1(void) {
    int c;
    while ((c = getchar())!= EOF) {
        putchar(c);
    }
}


