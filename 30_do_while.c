#include <stdio.h>//preprocessor directive to include standard input or output header file
int main()//where the execution start from main function
{
	int j=0;//Declare the integer and its variable or value
	//start of do while loop
	do
	{
		printf("Value of variable j is: %d\n", j);//print statemnet and then checked condition
		j++;
	}while (j<=3);
	return 0;//return statement
}
