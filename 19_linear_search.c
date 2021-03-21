#include<stdio.h>//preprocessor directitve to include standard input or output header file
  
int main()//where the execution start from main function
{
    int a[100],i,x,n;//declare the variable and its value 
    printf("How many elements?\n");//how many element
    scanf("%d",&n);//The value of n is taken by user
     
    printf("Enter array elements\n");//enter the array element
    for(i=0;i<n;++i)//loop start from 0 , the n is take by user
        scanf("%d",&a[i]);//The value of a[i] is take by user
     
    printf("Enter element to search:\n");//Enter the element for search
    scanf("%d",&x);//The value of x is take by user
     
    for(i=0;i<n;++i)//loop start from 0 , the value of n is take by user
        if(a[i]==x)
            break;//break statement 
     
    if(i<n)
        printf("Element found at index %d\n",i);//if element found print the output
    else
        printf("Element not found\n");// element not found
  
    return 0;//return statement
}