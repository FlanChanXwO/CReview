#include<stdio.h>
#include<math.h>
#include "../HeadFiles/String.h"

static String strArr [] = {"��","һ","��","��","��","��","��","��","��","��","ʮ"};

/**
 * ö�ٷ�
 * ���ݲ�ͬ�����������Ӧ�ĺ������֣�������-10 , 10
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
            printf("��%s\n",strArr[abs(n)]);
        }
    }

    return 0;
}