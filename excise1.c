//1 标识符的命名要清晰、明了，有明确含义，同时使用完整的单词或大家基本可以理解的缩写，避免使人产生误解。
//说明：较短的单词可通过去掉“元音”形成缩写；较长的单词可取单词的头几个字母形成缩写；一些单词有大家公认的缩写。


// 有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
//标准输出函数


#include <stdio.h>

int calculateDigit() {
    int i, j, k;
    int count = 0;
    for (i = 1; i < 5; i++) {
        for (j = 1; j < 5; j++) {
            for (k = 1; k < 5; k++) {
                if (i != j && i != k && k != j) {
                    printf("%d%d%d", i, j, k);
                    printf("\n");
                    count++;
                }

            }
        }
    }
    printf("%d", count);
}