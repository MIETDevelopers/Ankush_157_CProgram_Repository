#include <stdio.h>//preprocessor directive to include standard input or output header file

int main(void) {
  char name[] = "I love coding";//Declare character and name is variable
  //print  the output
  printf("%c \n", *name);     	
  printf("%c \n", *(name+3));	
  printf("%c \n", *(name+8));   
  char *namePtr;//The address of *name is store in pointer *nameptr
  //print output
  namePtr = name;
  printf("%c \n", *namePtr);     
  printf("%c \n", *(namePtr+2)); 
  printf("%c \n", *(namePtr+7)); 
} 