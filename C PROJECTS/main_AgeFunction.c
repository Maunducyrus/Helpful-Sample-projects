#include <stdio.h>
#include <stdlib.h>
int yourAge(int x){
	if(x >= 18){
		printf("ADULT");
	}
	else
	{
	printf("MINOR");	
	}
}
int main(){
	int Age;
	printf("enter your Age ");
	scanf("%d", &Age);
	YourAge(Age);
}
