//
//输入三个整数x,y,z，请把这三个数由小到大输出。
// Created by ocean on 2018/11/29.
//
#include <stdio.h>

void sort() {
    int x, y, z, min;
    scanf("%d,%d,%d", &x, &y, &z);
    if (x > y) {
        min = y;
        y = x;
        x = min;
    }
}