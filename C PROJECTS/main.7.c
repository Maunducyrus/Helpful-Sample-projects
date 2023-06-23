#include<stdio.h>
int main(){
	char operator;
	double number1;
	double number2;
	double result;
	printf("\n enter an operator(+-*/):");
	scanf("%c",&operator);
	printf("enter number1:");
	scanf("%lf",&number1);
	printf("enter number2:");
		scanf("%lf",&number2);
		
		switch(operator){
			case'+':
				result=number1+number2;
				printf("\n result: %lf",result);
				break;
				case'-':
					result=number1-number2;
					printf("\n result: %lf",result);
					break;
					case'*':
						result=number1* number2;
						printf("\n result: %lf",result);
						break;
						case'/':
							result=number1/ number2;
							printf("\n result: %lf",result);
							break;
							default:
								printf("%c is not valid",operator);
								break;
		}
	return 0;
}
