//Author:Ankush kumar
//Date:26/03/2021
//purpose of the program is sorting an array using insertion sort
#include<stdio.h>//preprocessor directive to include standard input or output header file
#include <math.h>//uses for Math operation

int main()//The execution start from main function
{
    int a[] = {16, 19, 11, 15, 10, 12, 14};//define array a and its size
    int i,j;//declare variable i,j

    for(i=0;i<7;i++)//loop start from 0 and end at 7 
    {
        j = i;//The value of i is assgined to j

        //i is not the first element
        while(j>0)
        {
            //not in order
            if(a[j-1] > a[j])
            {
                //swapping
                int temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
            }
            //in order
            else
            {
                break;// These two elements are not in order.
                // We need to swap them. else – The elements are in order,
                // we can break the while loop.
            }
            j--;
        }
    }

    for(i=0;i<7;i++)
        printf("%d\n",a[i]);//print the output

    return 0;//return statement
}
