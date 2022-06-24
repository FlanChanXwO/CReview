#include <stdio.h>

/**
 * �ɹ�ֵ��������ɹ�Ѱ�� -> ���� 1
 */
#define FOUND 1
/**
 * ʧ��ֵ�������û��Ѱ�ҵ� -> ���� -1
 */
#define NO_FOUND -1


/**
 * �������������������main��������ֱ�ӵ��ú����������ľ��嶨������д��main�����·�
 */
int search (const int * arr , int begin ,  int end , int target);
int binarySearch (const int * arr , int begin ,  int end , int target);
void searchDemo();
void binarySearchDemo();

int main (void) {
    int num;

    printf("%s\n","Ҫ�����ĸ�ʾ����");
    printf("���ֲ���ʾ����1\n���Բ���ʾ����2\n");
    printf("������ʾ������Ӧ�����ֱ�ţ�");
    scanf("%d",&num);

    switch (num) {
        case 1 : binarySearchDemo(); break;
        case 2 : searchDemo(); break;
        default:
            printf("���Ϸ������ֱ�ţ�\n"); break;
    }

    return 0;
}


/**
 * ���Բ��ң�Ѱ�������е�Ԫ�أ����ʺ������������������
 * @param arr �����׵�ַ
 * @param begin ���ط�Χ�Ŀ�ʼλ��
 * @param end ���ط�Χ�Ľ���λ��
 * @param target Ŀ��ֵ
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
 * �����������㷨��ʹ��ʾ��
 */
void searchDemo() {
    int target;

    printf("��������Ҫ�������в��ҵ����֣�\n");
    scanf("%d",&target);

    int arr [] = {1,2,3,4,5,7,11,15,21,95,87,68,54,55,52,22};
    int result =  search(arr,0, sizeof(arr) / sizeof(arr[0]),target);

    if (result == FOUND) {
        printf("�ҵ���Ŀ��ֵ��%d\n",target);
    } else  {
        printf("û���ҵ�Ŀ��ֵ��%d\n",target);
    }
}



/**
 * ���ֲ��ң�Ѱ�������е�Ԫ�أ���ֻ�ʺ������������������
 * @param arr �����׵�ַ
 * @param begin ���ط�Χ�Ŀ�ʼλ��
 * @param end ���ط�Χ�Ľ���λ��
 * @param target Ŀ��ֵ
 * @return FOUND (true 1) / NO_FOUND (false -1)
 */
int binarySearch (const int * arr , int begin ,  int end , int target) {
    //��¼��������ط�Χ����ʼ�����λ��
    int start = begin;
    int last = end;

    while (start < last) {
        //ȡ��ʼ�����λ��֮���м������ �ù�ʽ��ͬ�� (start + last) /2
        int mid =  start  + ((last - start) / 2);
        //����м������ϵ�Ԫ�ر�Ŀ��ֵС�������ؿ�ʼλ���ƶ����м�����λ�� + 1
        if (arr[mid] < target) {
            start = mid + 1;
        }
        //����м������ϵ�Ԫ�ر�Ŀ��ֵ�������ؽ���λ���ƶ����м�����λ�� - 1
        else if (arr[mid] > target){
            last = mid - 1;
        }
        //����м������ϵ�Ԫ����Ŀ��ֵһ�£���ֱ�ӷ����м��������±�
        else {
            return mid;
        }
    }

    return NO_FOUND;
}


/**
 * �Զ��������㷨��ʹ��ʾ��
 */
void binarySearchDemo() {
    int target;

    printf("��������Ҫ�������в��ҵ����֣�\n");
    scanf("%d",&target);

    int arr [] = {1,2,3,4,5,7,11,15,21};
    int result =  binarySearch(arr,0, sizeof(arr) / sizeof(arr[0]),target);

    if (result > 0) {
        printf("�ҵ���Ŀ��ֵ��%d\n",target);
    } else  {
        printf("û���ҵ�Ŀ��ֵ��%d\n",target);
    }
}