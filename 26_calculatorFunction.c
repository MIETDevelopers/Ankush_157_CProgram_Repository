//Author:Ankush kumar
//Date:24/03/2021
//purpose of the program is to make a calculator with function
#include <stdio.h>//preprocessor directive to include standard input or ouput header file
void main()
{
    int num1, num2, cal; //decleration of integer variables
    char ope; //decleration of character variables

    printf("Enter First Number");
    scanf("%i", &num1); //Getting the first value from user

    printf("Enter Second Number");
    scanf("%i", &num2); //Getting the second value from user

    printf("Choose Any Operator: +  | - | / | * \n");
    scanf(" %c", &ope); // getting the operator for operation from user

    // Applying if-else condition to check conditions 
        if(ope == ' + ')
     {
      cal= num1 + num2;
      printf("Addition of two numbers is: %i",cal);
     }

     else if(ope == ' - ')
     {
      cal= num1 - num2;
      printf("Subtraction of two numbers is: %i",cal);
     }
      
     else if(ope == ' / ')
     {
      cal= num1 / num2;
      printf("Division of two numbers is: %i",cal);
     }
      
     else if(ope == ' *' )
     {
      cal= num1 * num2;
      printf("Multiplication of two numbers is: %i",cal);
     }
      
     else
     {
     printf("Invalid Input"); 
     }

}in(){//The execution start from  main function
