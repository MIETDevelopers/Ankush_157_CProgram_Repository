//Author:Ankuskh kumar
//Date:23/03/2021
//purpose of the program to used all arithmetic operater
#include<stdio.h>//preprocessor directive to include standard input or output header file
int main(){//The execution start from main function
 	int a,b;//declare the variable a or b
	printf("Enter the number");
	scanf("%d %d", &a,&b);//scanf is used for take input from user
	printf("The addition of two number:%d\n",a+b);//addtion of two number or print the output
	printf("The subtraction of two number:%d\n",a-b);//subtraction of two number or print the output
	printf("The multiplication of two number:%d\n",a*b);//multiplication of two number or print the output
	printf("The divisble of two number:%d\n",a/b);//divisible of two number or print the output
	return 0;//return statement
}