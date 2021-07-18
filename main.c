#include<stdio.h>
#include<stdlib.h>

void add(int,int);
void subtract(int,int);
void multiply(int, int);
void division(int,int);

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
		add(num1,num2);
	}
	else if(n == 2){
		subtract(num1,num2);
	}
	else if(n == 3){
		multiply(num1,num2);
	}
	else{
		division(num1,num2);
	}
	return 0;
}