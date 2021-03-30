#include <stdio.h>//preprocessor directive include standard input or output header file

int main(void) {
  // creating a student structure template
  struct student {//Declare of structure and variable
    char firstname[64];
    char lastname[64];
    char id[64];
    int score;
  };
  
  // creating a student structure variable
  struct student std1;
  
  // taking user input
  printf("Enter First Name: ");//
  scanf("%s", std1.firstname);
  
  printf("Enter Last Name: ");
  scanf("%s", std1.lastname);
  
  printf("Enter ID: ");
  scanf("%s", std1.id);
  
  printf("Enter Score: ");
  scanf("%d", &std1.score);
  
  // output
  printf("\nStudent Detail:\n");
  printf("Firstname: %s\n", std1.firstname);
  printf("Lastname: %s\n", std1.lastname);
  printf("ID: %s\n", std1.id);
  printf("Score: %d\n", std1.score);
  return 0;//return statement
}