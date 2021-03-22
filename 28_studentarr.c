#include <stdio.h>//preprocessor directive to include standard input or output header file
#include <string.h>
 
struct student //Declare structure of variable is student
{
     int id;//Declare integer id
     char name[30];//Declare array and it size is 30
     float percentage;//declare float and variable percentage and its value is 1
};
 
int main() 
{
     int i;//Declare integer and variable is i
     struct student record[3];//sturct is keyword or student is struture tag or variable is record[3]
 
     record[0].id=1;
     strcpy(record[0].name, "Data0");
     record[0].percentage = 99.0;
 
     record[1].id=2;
     strcpy(record[1].name, "Data1");
     record[1].percentage = 99.1;
 
     record[2].id=3;
     strcpy(record[2].name, "Data2 ");
     record[2].percentage = 99.2;
 
     for(i=0; i<3; i++)
     { //print the output
         printf(" Records of STUDENT : %d \n", i+1);
         printf(" Id is: %d \n", record[i].id);
         printf(" Name is: %s \n", record[i].name);
         printf(" Percentage is: %f\n\n",record[i].percentage);
     }
     return 0;//return statement
}