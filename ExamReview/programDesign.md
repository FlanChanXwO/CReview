## 四、应用题
# 1、已知函数y=f(x)，编程实现输入一个x值，输出y值。
- 函数表达式：
>y = 2x+1  (x<0) \
>y = 0   (x=0) \
>y = 2x-1  (x>0)

- 代码示例：
```c
#include<stdio.h>

int f(int x) {
    return (x < 0) ? 2*x+1 : ((x > 0) ? 2*x-1 : 0);
}

int main () {
    int x;
    scanf("%d",&x);
    printf("f(%d) = %d\n",x,f(x));
    
    return 0;
}
```


# 2、有一个分数序列：2/1，3/2，5/3，8/5，13/8，……编程求这个序列的前20项之和。
- 需求：
> 依据分数序列：2/1，3/2，5/3，8/5，13/8，……编程求这个序列的前20项之和
- 代码示例：
```c
#include<stdio.h>

double dp1 [20] = {0,1,2};
double dp2 [20] = {0,2,3};

double f(int n) {
    double sum = 0;
    for (int i = 1 ; i <= n ; i++) {
        if (i >= 3) {
            dp1[i] = dp1[i-1] + dp1[i-2];
            dp2[i] = dp2[i-1] + dp2[i-2];
        }
        sum += dp2[i] / dp1[i];
    }

    return sum;
}

int main () {
    int n = 20;
    printf("f(%d) = %.2lf\n",n,f(n));

    return 0;
}
```

# 3、求1+2！+3！+4！+...…+10！
- 需求：
> 求取阶乘之和 1+2！+3！+4！+...…+10！
- 代码示例：
```c
#include<stdio.h>

int dp [11] = {0,1};

int f(int x) {
    int sum = 0;
    for (int i = 1 ; i <= x ; i++) {
        if (i >= 2) {
            dp[i] = i * dp[i-1];
        }
        sum += dp[i];
    }
    
    return sum;
}

int main () {
    int x = 10;
    printf("f(%d) = %d\n",x,f(x));
    
    return 0;
}
```
## 五、综合题
# 编程实现如下要求：
#### （1）随机生成100个[-100,100]内的随机整数，并存放于数组arr中
- 需求：
>  随机数生成，数组赋值
- 代码示例：
```c
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int * randomNumberArr(int s , int e , int size) {
    //保证生成的元素完全随机
    srand((unsigned) time(NULL));
    int * arr = (int *)calloc(size,sizeof(int));
    for (int i = 0; i < size; i++) {
        *(arr + i) = ( rand() % (e-s+1) ) + s;
    }
    return arr;
}

int main () {
    int len = 100;
    int l = -100 , r = 100;
    int * arr = randomNumberArr(l,r,len);
    
    free(arr);

    return 0;
}
```
#### （2）使用直接选择排序法，将（1）中获得的数组arr按升序进行排序；
- 需求：
> 使用直接选择排序法排序
- 代码示例：
```c
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int *randomNumberArr(int s, int e, int size) {
    //保证生成的元素完全随机
    srand((unsigned) time(NULL));
    int *arr = (int *) calloc(size, sizeof(int));
    for (int i = 0; i < size; i++) {
        *(arr + i) = (rand() % (e - s + 1)) + s;
    }
    return arr;
}

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

int main() {
    int len = 100;
    int l = -100, r = 100;
    int *arr = randomNumberArr(l, r, len);

    directSelectionSort(arr, 100);

    for (int i = 0; i < 100; i++) {
        printf("%4d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
```
#### （3）使用折半查找法，对用户通过键盘输入的整数x，在（2）中获得的数组arr中进行查找，并输出是否找到，若找到则输出找到x的位置。
- 需求：
> 使用折半查找法（二分查找法）查找元素
- 代码示例：
```c
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int *randomNumberArr(int s, int e, int size) {
    //保证生成的元素完全随机
    srand((unsigned) time(NULL));
    int *arr = (int *) calloc(size, sizeof(int));
    for (int i = 0; i < size; i++) {
        *(arr + i) = (rand() % (e - s + 1)) + s;
    }
    return arr;
}

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

int binarySearch(const int * arr , int len , int target) {
    int l = 0;
    int r = len ;
    while (l < r) {
        int mid = (l + r) / 2;
        if (*(arr + mid) > target) {
            r = mid -1;
        } else if (*(arr + mid) < target) {
            l = mid +1;
        } else {
            return mid;
        }
    }
    return -1;
}

int main() {
    int len = 100;
    int l = -100, r = 100;
    int *arr = randomNumberArr(l, r, len);

    directSelectionSort(arr, 100);

    int target , res;
    printf("Please input the element what you want to find : \n");
    scanf("%d",&target);

    if ((res = binarySearch(arr,100,target)) != -1) {
        printf("The element(%d) position is in index(%d) !\n",target,res);
    } else {
        printf("The element(%d) is don't exist in the array !\n",target);
    }

    free(arr);

    return 0;
}
```