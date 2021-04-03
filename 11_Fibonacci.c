//Author:Ankush kumar
//Date :26/03/2021
//purpose of the program to find Fibonacci number
#include<stdio.h>//preprocessor directive to include standard input or output header file
 
int main() //The  execution start from main function 
{  
 int n1=0,n2=1,n3,i,number;  //declare the variable or its value
 printf("Enter the number of elements:");  //Enter the number of elements
 scanf("%d",&number);  //take input from user
 printf("\n%d %d",n1,n2);//printing 0 and 1  
 for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed  
 {  
  n3=n1+n2;  
  printf(" %d",n3); // print the output
  n1=n2;  
  n2=n3;  
 }
  return 0;//return statement
 }  