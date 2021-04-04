//Author:Ankush kumar
//Date:26/03/2021
//purpose of the program to find the factorial number with recursion
#include <stdio.h>//preprocessor directive to include standard input or output header file
 
int factorial(int);
 
int main()//The execution start from the main function
{
    int num;//declare num variable
    int result;//declare result variable
 
    printf("Enter a number to find it's Factorial: ");//Enter the number for find the factorial
    scanf("%d", &num);//The value of num is take by user
    if (num < 0)//num is less than 0
    {
        printf("Factorial of negative number not possible\n");//factorial of negative number not possible
    }
    else
    {
        result = factorial(num);
        printf("The Factorial of %d is %d.\n", num, result);//print the factorial of enter the number
    }
    return 0;//return statement
}
int factorial(int num)
{
    if (num == 0 || num == 1)//num is equal to o or 1
    {
        return 1;
    }
   else
    {
        return(num * factorial(num - 1));//num is multiply by factorial
    }
}  
