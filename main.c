#include<stdio.h>
#include<stdlib.h>

#include"myheader.h"

int main(){
	int num1,num2,n;
	int sum = 0,difference = 0, product = 1;
	float  result = 0;
	while(1){
		printf("Enter 1 for Addition");
		printf("\nEnter 2 for Subtraction");
		printf("\nEnter 3 for Multiplication");
		printf("\nEnter 4 for Division\n");
		printf("Enter 5 for exit\n");
		scanf("%d",&n);
		
		switch(n){
			case 1 :
				printf("Enter first number:");
				scanf("%d",&num1);
				printf("Enter second number:");
				scanf("%d",&num2);
				sum = add(num1,num2);
				printf("Sum is %d\n",sum);
				break;
			case 2:
				printf("Enter first number:");
				scanf("%d",&num1);
				printf("Enter second number:");
				scanf("%d",&num2);
				difference = subtract(num1,num2);
				printf("Difference is is %d\n",difference);
				break;
			case 3:
				printf("Enter first number:");
				scanf("%d",&num1);
				printf("Enter second number:");
				scanf("%d",&num2);
				product = multiply(num1,num2);
				printf("Product is %d\n",product);
				break;
			case 4 :
				printf("Enter first number:");
				scanf("%d",&num1);
				printf("Enter second number:");
				scanf("%d",&num2);
				result = division(num1,num2);
				printf("Result is %f\n",result);
				break;
			case 5:
				exit(0);
		}
	}
	return 0;
}