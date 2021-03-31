//Author:Ankush kumar
//Date:24/03/2021
#include <stdio.h>//preprocessor directive to include standard input or output header file
int main()//The execution start from main function
{
	int j=0;//Declare the integer and its variable or value
	//start of do while loop
	do
	{
		printf("Value of variable j is: %d\n", j);//First execute and then checked condition
		j++;
	}while (j<=3);
	return 0;//return statement
}
