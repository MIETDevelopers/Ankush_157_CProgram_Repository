//Author:Ankush kumar
//Date:26/03/2021
//Purpose of the Program to print Fibonacci series using recursion.
#include<stdio.h>//preprocessor directive to include standard input or output header file    
int main(){    
	int n1=0,n2=1,n3,i,number;//declare of variable and its value    
	printf("Enter the number of elements: ");    
	scanf("%d",&number);    
	printf(" %d %d",n1,n2);//Printing 0 and 1.   
	for(i=2;i<number;++i)//Loop starts from 2 because 0 and 1 are already printed.   
		{	//This will give output.
			n3=n1+n2;    
  			printf(" %d",n3);    
  			n1=n2;    
  			n2=n3;    
 		}  
	return 0;  //return statement
}
