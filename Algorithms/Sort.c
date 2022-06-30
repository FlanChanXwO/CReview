#include <stdio.h>

//冒泡排序示例
void BubbleSortDemo();
//快速排序示例
void QuickSortDemo();
//插入排序示例
void insertSortDemo();

int main() {
    //调用冒泡示例函数
    //BubbleSortDemo();
    //调用快速排序示例函数
    //QuickSortDemo();
    //调用插入排序示例函数
    insertSortDemo();

    return 0;
}


/**
 * 冒泡排序 (重点)
 * @param arr 数组
 * @param len 数组长度：C语言无法对指针变量进行数组长度判断，因此需要手动传参
 */
void BubbleSort(int *arr, int len) {
    for (int i = 0; i < len; i++) {
        //两层for循环实现冒泡算法从而让大数值不断冒出来，直到大数值全部冒出，小数值沉在大数值之下
        for (int j = 0; j < len - i - 1; j++) {
            //利用一个中间临时变量实现的交换算法
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

/**
 * 冒泡排序使用示例
 */
void BubbleSortDemo() {
    //创建乱序数组，然后进行排序
    int arr[] = {1, 3, 3, 5, 8, 7, 6};
    BubbleSort(arr, 6);
    //遍历排序后的数组
    for (int i = 0; i < 6; ++i) {
        printf("arr[%d] = %d \n", i, arr[i]);
    }
}


/**
 * 快速排序 (递归实现 - 如果觉得太困难可了解)
 * 快速排序是目前工业排序算法中最常见的一种，Java中的Arrays.sort()方法正是使用了快速排序来实现的
 *
 * @param arr 数组
 * @param start 左分区位置
 * @param end 右分区位置
 */
void QuickSort(int *arr, int start, int end) {
    if (start < end) {
        //左右分区的下标
        int left = start;
        int right = end;
        //标准值
        int stander = arr[left];

        while (left < right) {
            //左右分区规则：左区的数都要比中间标准值小，右区的数都要比中间标准值大
            while (left < right && arr[left] < stander)
                left++;
            while (left < right && arr[right] > stander)
                right--;
            //交换2个元素顺序
            if (left < right) {
                int temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;
            }
        }
        //将被覆盖的标准值重新带入到数组中
        arr[left] = stander;
        //递归进行分区排序
        QuickSort(arr,start,left-1);
        QuickSort(arr,left+1,end);
    }
}

/**
 * 快速排序使用示例
 */
void QuickSortDemo () {
    //创建乱序数组，然后进行排序
    int arr[] = {5, 23, 3, 16, 98, 388, 28,15,22,69};
    QuickSort(arr, 0,(sizeof(arr) / sizeof(arr[0])) - 1);
    //遍历排序后的数组
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("arr[%d] = %d \n", i, arr[i]);
    }
}


/**
* 直接选择排序
 * @param arr 数组首地址
 * @param len 数组长度
*/
void directSelectionSort(int *arr, int len) {
    int c;
    for (int i = 0; i < len - 1; i++) {
        c = i;
        for (int j = i + 1; j < len; j++) {
            if (arr[c] > arr[j]) {
                c = j;
            }
        }
        int t = arr[i];
        arr[i] = arr[c];
        arr[c] = t;
    }
}

/**
 * 插入排序
 * @param arr 数组首地址
 * @param len 数组长度
 */
void insertionSort(int *arr ,int len) {
    for (int i = 1, j; i < len; i++) {
        int temp = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > temp; j--) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = temp;
    }
}

/**
 * 插入排序使用示例
 */
void insertSortDemo() {
    int arr[] = {5, 23, 3, 16, 98, 388, 28,15,22,69};
    insertionSort(arr, (sizeof(arr) / sizeof(arr[0])));
    //遍历排序后的数组
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("arr[%d] = %d \n", i, arr[i]);
    }
}


