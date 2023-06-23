#include<stdio.h>
int main(){
	int a = 0;
	int b = 1;
	int c = a + b;
	
	printf("%d %d ", a, b);
	
	while(c <= 100){
		printf("%d ", c);
		a = b;
		b = c;
		c = a+b;
	
	}
}
