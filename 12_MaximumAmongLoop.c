//Author:Ankushkumar
//Date:23/03/2021
//Purpose of the program is to find the  maximum of n number
#include<Stdio.h>//preprocessor directive to include standard input or output header file
int main(){//The execution start from main function
	int n,i,max=0,marks;//Declaration of variable and its value 
	printf("how many student\n");
	scanf("%d", &n);//The value of n is taken by user 
	for(i=1;i<=n;i++)//loop start from 1 and n is taken by user
	{	printf("enter the marks\n");//enter the marks of student
	    scanf("%d",&marks);
	    if(marks>max)//if the marks is greater than max its true
	    	max=marks;//The value of marks are assigned to max
	}
	printf("\nMaximum =%d",max);//print the ouptut
}