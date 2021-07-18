#include<stdio.h>

#include"myheader.h"

int main(){
	int num1,num2;
	printf("Enter first number:");
	scanf("%d",&num1);
	printf("Enter second number:");
	scanf("%d",&num2);
	int n;
	printf("Enter 1 for Addition");
	printf("\nEnter 2 for Subtraction");
	printf("\nEnter 3 for Multiplication");
	printf("\nEnter 4 for Division\n");
	scanf("%d",&n);
	if(n == 1){
		int sum = add(num1,num2);
		printf("Sum is %d\n",sum);
	}
	else if(n == 2){
		int difference = subtract(num1,num2);
		printf("Difference is %d\n",difference); 
	}
	else if(n == 3){
		int product = multiply(num1,num2);
		printf("Product is %d",product);
	}
	else{
		float result = division(num1,num2);
		printf("Quotient is %f",result);
	}
	return 0;
}