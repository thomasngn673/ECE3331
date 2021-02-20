#include <stdio.h>

int main(void){
	int num1;
	int num2;
	
	printf("Enter your first number: \n");
	scanf("%d", &num1);
	
	printf("Enter your second number: \n");
	scanf("%d", &num2);
	
	printf("Your total is %d", num1+num2);
	return 0;
}
