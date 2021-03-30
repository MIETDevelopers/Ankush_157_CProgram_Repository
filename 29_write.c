#include <stdio.h>//preprocessor directive to include standard input or output header file
#include <stdlib.h>//preprocessor directive to include standard library header file

int main()//where the execution start from main function
{
   int num;//declare integer and its varaible num
   FILE *fptr;//declare file

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("C:writing.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");//if statement true it print
      exit(1);             
   }

   printf("Enter num: ");//Enter the number
   scanf("%d",&num);//take input from user

   fprintf(fptr,"%d",num);
   fclose(fptr);

   return 0;//return statement
}
