#include <stdio.h>

/**
 * C语言的函数与Java语言的函数定义方式是一样的，区别在于C语言可以先声明后具体定义
 * @param str 空字符串/字符数组首地址
 * @param size  输入的字符串长度
 */
void inputString (char * str , int size) {
    int index = 0;
    //从键盘中获取单个字符
    char ch = getchar();
    //持续输入字符，直到输入到换行符
    while (ch != '\n' && index < size) {
        //利用指针变量来持续为字符串增加新的字符
        *(index++ + str) = ch;
        ch = getchar();
    }
    //结束输入，添加字符串结尾符
    *(index + str) = '\0';
}


int main() {
    /*
     * C语言中的输出函数
     * printf("格式串",变量名)
     * 格式串种类繁多，常用的有：
     * - %d 按照整数输出  int
     * - %ld 按照长整数输出  long
     * - %ud 按照无符号整数输出 unsigned int
     * - %s 按照字符串输出 string
     * - %c 按照字符输出 char
     * - %lf 按照双精度数输出 double
     * - %f 按照单精度数输出 float
     * */
    printf("这是一个C输出函数printf()\n");


    /*
     * 数组是用于储存数据用的一个基本数据结构，是目前最常用的数据结构之一
     * C语言中的数组的定义方式：
     * 数据类型 数组名 [] = {};  定义数组的同时初始化
     * 数据类型 数组名 [长度] = {};  定义数组和数组长度的同时初始化，
     * 数据类型 数组名 [长度]; 定义数组，但是不马上进行初始化
     *
     */
    char in [100000]; //字符数组：字符数组也可被认为是字符串
    printf("这是一个C输入函数inputString()，接下来请输入一串字符串(不支持中文)\n");
    /*
    * 该函数主要使用scanf()输入函数来完成
    * C语言中的输入函数
    * scanf("格式串",变量地址(&变量名) -> 使用符号 "&" 可以获得变量的内存地址，然后通过内存地址操控内存来输入数据
    * 格式串种类繁多，常用的有：
    * - %d 按照整数输入  int
    * - %ld 按照长整数输入  long
    * - %ud 按照无符号整数输入 unsigned int
    * - %s 按照字符串输入 string
    * - %c 按照字符输入 char
    * - %lf 按照双精度数输入 double
    * - %f 按照单精度数输入 float
    * */
    inputString(in,100000);
    printf("这是你刚刚所输入的内容：\n【 %s 】\n",in);

    return 0;
}
