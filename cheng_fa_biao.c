#include <stdio.h>

/**
 * ��� 99 �˷��� 
 */ 
int main(){
	
     // �����������i,j�Լ����result
    int i, j, result;
    printf("��ʼ����žų˷���\n"); 
	for(i=9;i>=1;i--){
        for(j=1;j<=i;j++){
            result = i*j;
            printf("%d*%d=%d\t",i,j,result);
        }
        printf("\n");
    }
    
    
    printf("����ľžų˷������\n");
    int a,b,num;	
	for(b=1;b<=9;b++){
		for(a=1;a<=b;a++){
			num = a*b;
			printf("%d*%d=%d\t",a,b,num);
		}
    	printf("\n");
    } 
    
    return 0;
}


