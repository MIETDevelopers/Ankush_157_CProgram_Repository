#include <stdio.h>//preprocessor directive to include standard input or output header file
#include <stdlib.h>//preprocessor directive to include library header file
int main(){
   char name[50];//Declare of character and its array with 50 size
   int marks,i,n;//Declare integer and its variable
   printf("Enter number of students:\n ");//Enter the number of student
   scanf("%d",&n);//The value of n is taken by user
   FILE *fptr;//Declare file
   fptr=(fopen("C:/Users/pc/Documents/student.txt","a"));//location of csv file
   if(fptr==NULL){//if fptr is null it print error
       printf("Error!");
       exit(1);
   }
   for(i=0;i<n;++i)//loop start from  to 0 and n is taken by user
   {
      printf("For student%d\nEnter name: ",i+1);
      scanf("%s",name);//name is taken by user
      printf("Enter marks:\n ");
      scanf("%d",&marks);//marks are taken by user
      fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);
   }
   fclose(fptr);//close the file
   return 0;//return statement
}
