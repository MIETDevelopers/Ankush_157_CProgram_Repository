//Author:Ankush kumar
//Date: 25/03/2021
//purpose of the program is swaping of two number using call by reference
#include <stdio.h>//pre processor directive to include standard input or output header file
 
void swap(int*, int*);//swap fuction declare
 
int main()//The execution start from main function
{
   int x, y;//declare x,y variable
 
   printf("Enter the value of x and y\n");// Enter the value of x and y
   scanf("%d%d",&x,&y);//The value of x and y is take by user
 
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);//print orignal value of x and y
 
   swap(&x, &y); //
 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);//print swapped value of x and y
 
   return 0;
}
 
void swap(int *a, int *b)//function to swap two number
{
   int temp;
 
   temp = *b;//The value of b is assigned to temp
   *b = *a;//The value of  a is assigned to b
   *a = temp; //The value of temp is assigned to a
}
