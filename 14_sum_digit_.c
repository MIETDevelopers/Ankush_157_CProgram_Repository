//C Program to Find Sum of Digits of a Number using While Loop

#include <stdio.h>//preprocessor directive to include standard input or output header file

int main()//where the execution start from main function
{
  int Number, Reminder, Sum=0;//declare the variable and it value

  printf("\n Please Enter any number\n");//Enter the number
  scanf("%d", &Number);//The value of number is take from user

  while(Number > 0)//number is greater than 0
  {
     Reminder = Number % 10;//get modulus/reminder of the number
     Sum = Sum+ Reminder;//sum the reminder of the number
     Number = Number / 10;//divide the number by 10
  }

  printf("\n Sum of the digits of Given Number = %d", Sum);//print the output

  return 0;//return statement
}
