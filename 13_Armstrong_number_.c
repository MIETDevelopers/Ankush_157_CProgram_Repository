#include<stdio.h>//preprocessor directive to include standard input or output header file 
 int main(){//where the execution start from main      
	int n,r,sum=0,temp;//declare the variable    
	printf("enter the number=\n"); //enter the number   
	scanf("%d",&n); //the value of n is takes from user   
	temp=n; // The value of n is assigned to temp
	while(n>0)//n is greater than 0    
	{  
	//r contain the last digit  
	r=n%10;    
	sum=sum+(r*r*r); //in case of an Armstrong number of 3 digit is equal to the number itself   
	n=n/10;    
	}    
	if(temp==sum)    
	printf("The number is Armstrong\n"); // if true it print the number is armstrong   
	else    
	printf("The number is not Armstrong\n"); //if false it print the number is not armstrong   
	return 0;  //return statement
}   