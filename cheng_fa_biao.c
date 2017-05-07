#include <stdio.h>

/**
 * 输出 99 乘法表 
 */ 
int main(){
	
     // 定义相乘数字i,j以及结果result
    int i, j, result;
    printf("开始输出九九乘法表\n"); 
	for(i=9;i>=1;i--){
        for(j=1;j<=i;j++){
            result = i*j;
            printf("%d*%d=%d\t",i,j,result);
        }
        printf("\n");
    }
    
    
    printf("反向的九九乘法表输出\n");
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


