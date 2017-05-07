#include<stdio.h>
/**
 * 输出50以内的素数 
 * leon 
 */ 
int main(){
	int a,b;
	for(a=2;a<=50;a++){
		for(b=2;b<a;b++){
			if(a%b == 0){
				break;
			}
		}
		if(
			a == b){
			printf("%d\n",a);
		}
	}
	return 0;
}

