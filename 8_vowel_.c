#include<stdio.h>//preprocessor directive to include standard input or output header file 
int main()//where the execution start from manin function
{
  char c;//declare the charcter and its variable is c
  int uppercase_vowel,lowercase_vowel;//declare the integer it variable is uppercase or lowercase
  printf("Enter the alphabet\n");
  scanf("%c", &c);//scanf is used for take input form user
  lowercase_vowel = (c == 'a'||c == 'e'||c == 'i'||c == 'o'||c == 'u');//evaluate true if variable c is lowercase_vowel
  uppercase_vowel = (c == 'A'||c == 'E'||c == 'I'||c == 'O'||c == 'U');//evaluate true if variable c is lowercase_vowel
  
  if (uppercase_vowel||lowercase_vowel)//if the uppercase_vowel or lowercase_vowel is true the entred character is vowel
   {
  	printf("this alphabet is vowel=%c\n",c);//print the output

   }
   else
   {
  	printf("this alphabet is constant=%c\n",c);//if the uppercase_vowel or lowercase_vowel is false the entered charcter is constant
   }
	return 0;//return statement

}