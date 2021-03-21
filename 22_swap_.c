#include <stdio.h>//preprocessor directive to include standard input or output header file
 
 
void swap(int, int);//declare swap function
 
int main()
{
   int x, y;//declare  the variable x and y
 
   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);//The value of x and y is take by user
 
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);//print orignal value of x and y
 
   swap(x, y); 
 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);//swaping of number 
 
   return 0;
}
 
void swap(int a, int b)
{
   int temp;//declare temp variable
 
   temp = b;//The value of a is assigned to temp
   b = a;//The value of b is assigned to a 
   a = temp;//The value of temp is assigned to a
    printf("Values of a and b is %d  %d\n",a,b);//Print the value of a and b
}