#include <stdio.h>

//声明示例函数
void changeValueDemo();
void pointArrDemo ();

/**
 * 指针是C语言中最重要，也是最困难的部分
 * 指针可以让你直接操控变量的内存地址，随意更改变量的值
 * 指针在数据结构算法中运用非常广泛，因为其操控内存的机制，使其出来了一种新的数据存储类型 - 链式储存
 * 指针合理使用能让程序效率提高
 *
 * 指针的使用：
 * 定义指针的方式： 数据类型 * 指针名  例：char * ch = &old_char;
 * 获取指针变量下的储存的值： *指针名  例：char new_ch =  *ch;
 * 注意：数组也是一种指针   例：char * ch_arr = "我是个数组，也是个字符指针！";
 */
int main () {
    changeValueDemo();
    printf("-----------\n");
    pointArrDemo();

    return 0;
}

/**
 * 指针入门：指针是如何操控内存并对其产生影响的
 */
void changeValueDemo () {
    //定义变量a
    int a = 5;
    //定义指针变量b，让b去获取a的内存地址
    int * b = &a;

    //案例：更改指针变量b的内存地址所指向的值，使得a的值也发生变化
    printf("before: a=%d, b=%d \n",a,*b);
    *b = 11; //改变指针变量下储存的值
    printf("after: a=%d, b=%d \n",a,*b);
    //由程序运行状况可知，指针变量与原变量指向的内存单元是同一个，改变指针变量或者原变量，都会让两者的值发生相同的改变
}


/**
 * 指针与数组：
 * 指针就是数组，一般来说数组指针代表的是数组首地址，我们根据数组首地址可以遍历整个数组，因此接下来演示使用指针遍历数组
 */
void pointArrDemo () {
    //创建字符数组
    char arr [] = {"You are a Chicken"};
    //记录下标
    int index = 0;

    //对字符数组每一个字符单独遍历
    for (char * i = arr; *i != '\0'; i++) {
        printf("遍历数组元素 arr[%d] : 【%c】 : 内存地址 【%d】\n",index++,*i,i);
    }
    printf("完整字符串：%s\n",arr);
}