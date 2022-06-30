#include<stdio.h>
#include<math.h>
#include "../HeadFiles/String.h"

static String strArr [] = {"零","一","二","三","四","五","六","七","八","九","十"};

/**
 * 枚举法
 * 根据不同的整数输出相应的汉字数字，适用于-10 , 10
 */
int main() {
    int n;
    scanf("%d",&n);

    if (n >= 0) {
        if (n <= 10) {
            printf("%s\n",strArr[n]);
        }
    } else {
        if (n >= -10) {
            printf("负%s\n",strArr[abs(n)]);
        }
    }

    return 0;
}