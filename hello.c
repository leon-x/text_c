#include <stdio.h>
int main()
{
    int i, j, k;
    for(i=1; i<5; i++)
    {
        /* �۲�ÿ�еĿո���������ȫѭ������ */
        for(j=i ; j<5 ; j++ )  
        {
            printf(" ");    //����ո�
        }
        /* �۲�ÿ��*�ŵ���������ȫѭ������ */
        for( k=0 ;  k<2*i-1 ;  k++ ) 
        {
            printf("*");   //ÿ�������*��
        }
        printf("\n");     //ÿ��ѭ������
    }
    return 0;    
}