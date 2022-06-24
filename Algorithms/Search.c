#include <stdio.h>

/**
 * 成功值宏变量：成功寻找 -> 返回 1
 */
#define FOUND 1
/**
 * 失败值宏变量：没有寻找到 -> 返回 -1
 */
#define NO_FOUND -1


/**
 * 声明多个函数，这样让main方法可以直接调用函数，函数的具体定义便可以写在main方法下方
 */
int search (const int * arr , int begin ,  int end , int target);
int binarySearch (const int * arr , int begin ,  int end , int target);
void searchDemo();
void binarySearchDemo();

int main (void) {
    int num;

    printf("%s\n","要运行哪个示例？");
    printf("二分查找示例：1\n线性查找示例：2\n");
    printf("请输入示例所对应的数字编号：");
    scanf("%d",&num);

    switch (num) {
        case 1 : binarySearchDemo(); break;
        case 2 : searchDemo(); break;
        default:
            printf("不合法的数字编号！\n"); break;
    }

    return 0;
}


/**
 * 线性查找（寻找数组中的元素）：适合在所有情况进行搜素
 * @param arr 数组首地址
 * @param begin 搜素范围的开始位置
 * @param end 搜素范围的结束位置
 * @param target 目标值
 * @return FOUND (true 1) / NO_FOUND (false -1)
 */
int search (const int * arr , int begin ,  int end , int target) {
    for (int i = begin; i < end ; i++) {
        if (arr[i] == target) {
            return FOUND;
        }
    }
    return NO_FOUND;
}

/**
 * 对线性搜素算法的使用示例
 */
void searchDemo() {
    int target;

    printf("请输入你要在数组中查找的数字：\n");
    scanf("%d",&target);

    int arr [] = {1,2,3,4,5,7,11,15,21,95,87,68,54,55,52,22};
    int result =  search(arr,0, sizeof(arr) / sizeof(arr[0]),target);

    if (result == FOUND) {
        printf("找到了目标值：%d\n",target);
    } else  {
        printf("没有找到目标值：%d\n",target);
    }
}



/**
 * 二分查找（寻找数组中的元素）：只适合有序数组或有序链表
 * @param arr 数组首地址
 * @param begin 搜素范围的开始位置
 * @param end 搜素范围的结束位置
 * @param target 目标值
 * @return FOUND (true 1) / NO_FOUND (false -1)
 */
int binarySearch (const int * arr , int begin ,  int end , int target) {
    //记录数组的搜素范围，开始与结束位置
    int start = begin;
    int last = end;

    while (start < last) {
        //取开始与结束位置之间中间的索引 该公式等同于 (start + last) /2
        int mid =  start  + ((last - start) / 2);
        //如果中间索引上的元素比目标值小，则将搜素开始位置移动到中间索引位置 + 1
        if (arr[mid] < target) {
            start = mid + 1;
        }
        //如果中间索引上的元素比目标值大，则将搜素结束位置移动到中间索引位置 - 1
        else if (arr[mid] > target){
            last = mid - 1;
        }
        //如果中间索引上的元素与目标值一致，则直接返回中间索引的下标
        else {
            return mid;
        }
    }

    return NO_FOUND;
}


/**
 * 对二分搜素算法的使用示例
 */
void binarySearchDemo() {
    int target;

    printf("请输入你要在数组中查找的数字：\n");
    scanf("%d",&target);

    int arr [] = {1,2,3,4,5,7,11,15,21};
    int result =  binarySearch(arr,0, sizeof(arr) / sizeof(arr[0]),target);

    if (result > 0) {
        printf("找到了目标值：%d\n",target);
    } else  {
        printf("没有找到目标值：%d\n",target);
    }
}