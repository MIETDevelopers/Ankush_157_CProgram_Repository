#include <stdio.h>//preprocessor directive to include standard input or output header file

void main()
{
    int a[10];
    int i, n, sum=0;//Declare integer and its variable and value
	
	
       printf("\n\nFind sum of 10 elements of array:\n");//Find sum of all element of array

       printf("Input the number of elements to be stored in the array :");//Element store in the array
       scanf("%d",&n);//The value of m is taken by user
   
       printf("Input %d elements in the array :\n",n);//input element in the array
       for(i=0;i<n;i++)//loop start from 0 and n is taken by user
        {
	      printf("element - %d\n: ",i);//print the element as ouput
	      scanf("%d",&a[i]);
	    }

    for(i=0; i<n; i++)//loop start from 0 and n is taken by user
    {
        sum += a[i];//sum is equal to a[i]
    }

    printf("Sum of all elements stored in the array is : %d\n\n", sum);//print the sum of element store in the array
}