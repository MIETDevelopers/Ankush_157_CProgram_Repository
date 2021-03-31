//Author:Ankush kumar
//Date:26/03/2021
//purpose of the program is to find the number is even or odd
#include<stdio.h>//preprocessor directive to include standard input or outpur header file
int main(){//The execution start from main function
    int a,i=2,f=1;//declare the variable
    printf("Enter a number:\n");//enter the number
    scanf("%d",&a);// the input of a is take by user
    while(i<a) //in the program,loop iterated from i<=a/2
    {   //condition for non prime
        if(a%i == 0)// if a is perfectly divisible by1 is checked using this statment
        {
            f=0;
            break;//If n is perfectly divisible by i, a is not a prime number. In this case, f is set to true, and the loop is terminated using the break statement.
        }
        i++;
    }
    if(f)
         printf("Prime Number=%d\n",a);//print prime number
        
    else { 
         printf("Not Prime Number=%d\n",a);//print not prime number
         }
    
    return 0;//return statement
}
