//���� stdbool.h ��ʹ�ò�������
#include <stdbool.h>
#include <stdio.h>

//����n!,n��ֵ��main�ж���
int main(void)
{
    int n = 10;    //���������
    int sum = 1; //������ŵ��˵Ľ��
    bool flag = false;    //���˱��
    
    int num = n;    //ѭ������
    while( !flag )
    {
        sum = sum * (num--);
        //��num=1ʱ����ѭ��
        if( num == 1)
        {
            flag = true;
        }
    }
    printf ("%d�ĵ���ֵΪ %d \n", n, sum);
    return 0;
}
