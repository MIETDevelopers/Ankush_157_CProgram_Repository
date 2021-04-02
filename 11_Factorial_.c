//Author:Ankush kumar
//Date:26/03/2021
//purpose of the program to find the factorial of number
#include <stdio.h>//preprocessor to include standard input or output header file
 
int main()//The execution start from main function
{
  int c, n, f = 1;//declare the variable and its value
 
  printf("Enter the number\n");//Entre the number for Factorial
  scanf("%d", &n);// The n is take from user
  for (c = 1; c <= n; c++)//loop start from 1 n is take by user
    f = f * c;
 
  printf("Factorial of %d = %d\n", n, f);//print the output
 
  return 0;//return statement
}

