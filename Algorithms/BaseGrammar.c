#include <stdio.h>

void forEach () {
    //定义并初始化一个数组
    char arr [] = {'A','B','C','D'};

    //基础循环结构 for循环：它是算法的核心
    for (int i = 0; i < 3; i++) {
        //遍历所有数组元素
        printf("%c\n",arr[i]);
    }
}

void whileDemo () {
    int index = 0;

    //while循环示例，while循环一般适用于不确定循环终点的算法，例如遍历链表，遍历二叉树这样的数据结构
    while (1) {
        //打印从0到正无穷的数字
        printf("%d\n",index++);
    }
}


void ifDemo () {
    char var = 5;

    //C语言中的if语句，逻辑分支结构，用于筛选条件
    if (var == 5) {
        //如果变量var的值为5，则执行下面的语句
        printf("var = 5");
    } else {
        //如果变量var的值不为5，则执行下面的语句
        printf("var != 5");
    }
}

int main () {
    //调用for示例
    //forEach();

    //调用while示例
    whileDemo();

    //调用if示例
    //ifDemo();

    return 0;
}
