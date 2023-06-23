#include<stdio.h>
struct MYnames{
	char names[40];
};
int main(){
	struct MYnames Students[5];
	int i,j;
	
	for (i = 0; i < 5; i++){
		printf("Students name ");
		scanf("%s", &Students[i].names);
		
	}
	for (j = 0; j < 5; j++){
		printf("Students name is %s\n ", Students[j].names);
	}
}
