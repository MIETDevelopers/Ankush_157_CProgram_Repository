//Author:Ankush kumar
//Date:26/03/2021
//Purpose of the Program to read the string in pointers loaction and give it as output.(Pre-Defined)
#include <stdio.h>//preprocessor directive to include standard input or output header file

int main(void) {
  char name[] = "Aman";

  printf("%c \n", *name);     	// Output will be I
  printf("%c \n", *(name+3));	// Output will be A
  printf("%c \n", *(name+8));   // Output will be R

  char *namePtr;

  namePtr = name;
  printf("%c \n", *namePtr);     // Output will be I
  printf("%c \n", *(namePtr+2)); // Output will be H
  printf("%c \n", *(namePtr+7)); // Output will be E
}
