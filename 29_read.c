#include <stdio.h>//preprocessor directive to include standard input or ouput header file
#include <stdlib.h>

int main()//where the execution start from main function
{
   int num;//declare interger and its variable num
   FILE *fptr;
   //if conditon start
   if ((fptr = fopen("student.csv.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);//exit 1
   }

   fscanf(fptr,"%d", &num);

   printf("Value of n=%d", num);
   fclose(fptr); 
  
   return 0;//return statement
}
