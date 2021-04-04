//Author:Ankush kumat
//Date:26/03/2021
//Purpose of the Program to store information of a student using union.
#include <stdio.h>//preprocessor to directive to include standard input or output header file
#include <string.h>
 
union student //declare union variable
{
      //Declare the datatype or its variable
            char name[20];
            char subject[20];
            float percentage;
};
 
int main() 
{
    union student record1;//declare the variable
    union student record2;
      //function copies the string pointed by source
       strcpy(record1.name, "Anuj");
       strcpy(record1.subject, "Maths");
       record1.percentage = 86.50;
 
       printf("Union record1 values example\n");
       //print the output union record 1
       printf(" Name       : %s \n", record1.name);
       printf(" Subject    : %s \n", record1.subject);
       printf(" Percentage : %f \n\n", record1.percentage);
      //Print the value of union record 2
       printf("Union record2 values example\n");
       strcpy(record2.name, "Mani");
       printf(" Name       : %s \n", record2.name);//print the name of student
 
       strcpy(record2.subject, "Physics");
       printf(" Subject    : %s \n", record2.subject);//prrint the percentage of physic
 
       record2.percentage = 99.50;
       printf(" Percentage : %f \n", record2.percentage);
       return 0;//return statemenet
} 
