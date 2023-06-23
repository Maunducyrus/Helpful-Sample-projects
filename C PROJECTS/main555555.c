#include <stdio.h>
void student(int x){
	if (x >= 50){
		printf("pass");
	}
	else
	{
		printf("fail");
	}
}

int main(){
	int marks;
	printf("enter student marks\n");
	scanf("%d", &marks);
student(marks);

	return 0;
}
