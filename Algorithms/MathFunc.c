#include <stdio.h>

/**
 * ����⺯�� math
 * math��ѧ������˺ܶ�ʵ�õĺ�����������ȡ����ֵ����ȡ���Ǻ���ֵ�ĸ��ֺ���
 */
#include <math.h>


/**
 * ��math���еľ���ֵ����Ϊ������ʾ����ֵ������ʹ��
 */
void MathDemo () {
    int num;

    printf("�������������֣�");
    scanf("%d",&num);

    //ʹ�þ���ֵ����abs()����ȡĳ���ľ���ֵ
    printf("%d�ľ���ֵΪ��%d\n",num,abs(num));
}


int main () {
    //����ʾ������
    MathDemo();

    return 0;
}