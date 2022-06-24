// #include 表示要包含的头文件，与java里面的import一样都是为了导入所需依赖
#include <stdio.h>
// #define 表示定义一个宏变量，宏变量也就是所谓的常量
#define Name "Bitch"

/**
 * main函数，C语言程序只能存在一个这样的函数，一般每个C程序都必须有一个main函数存在
 * 函数是C语言中最基本的组成单元，每个C程序至少要有一个函数存在
 * 注意，如果要让C程序输出中文字符，请更改文件编码格式为 "GBK"
 *
 * @author FlanChan
 * @version 1.0
 * @since 2022/6/25
 */
int main () {

    //一个HelloWorld程序示例
    printf("Hello %s!\n",Name);

    return 0;
}