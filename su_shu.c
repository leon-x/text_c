#include<stdio.h>
/**
 * ���50���ڵ����� 
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

