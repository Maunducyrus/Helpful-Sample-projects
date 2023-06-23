#include <stdio.h>
#include <stdlib.h>
int yourAge(int x){
	if(x >= 18){
		printf("adult");
	}
	else{
		printf("minor");
	}
}
int main(int argc, char *argv[]) {
	int Age;
	printf("enter your age ");
	scanf("%d ", &Age);
	
	yourAge(Age);
	return 0;
}
