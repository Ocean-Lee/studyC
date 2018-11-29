// 用*号输出字母C的图案。
//核心思想：控制每一行空格和星号的个数
// 利用递归方法求5!。
//
#include <stdio.h>

void graph() {

    int i, j;
    printf("\1\1\n"); /*输出两个笑脸*/
    for (i = 1; i < 11; i++) {
        for (j = 1; j <= i; j++)
            printf("%c%c", 219, 219);
        printf("\n");
    }
}

int sum(int n) {
    if (n == 1)
        return 1;
    else
        return n * sum(n - 1);
}