#include<stdio.h>//preprocessor directive to include standard input or output header file
 
int Fibonacci(int);//declare the fibonacci variable
 
int main()
{
   int n, i = 0, c;//declare int data type or its variable
 
   scanf("%d",&n);//The value of n is take by user
 
   printf("Fibonacci series\n");
 
   for ( c = 1 ; c <= n ; c++ )//loop start from 1, n is take by user
   {
      printf("%d\n", Fibonacci(i));//print the output
      i++; 
   }
 
   return 0;//return statement
}
 
int Fibonacci(int n)
{
   if ( n == 0 || n == 1 )
    {  
    	return n;
    }
   else
   {
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
   }

}




