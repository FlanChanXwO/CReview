#include <stdio.h>

/**
 * 导入库函数 math
 * math数学库包含了很多实用的函数，例如求取绝对值，求取三角函数值的各种函数
 */
#include <math.h>


/**
 * 以math库中的绝对值函数为例，演示绝对值函数的使用
 */
void MathDemo () {
    int num;

    printf("请输入任意数字：");
    scanf("%d",&num);

    //使用绝对值函数abs()来获取某数的绝对值
    printf("%d的绝对值为：%d\n",num,abs(num));
}


int main () {
    //调用示例函数
    MathDemo();

    return 0;
}