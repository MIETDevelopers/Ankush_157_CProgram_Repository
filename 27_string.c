#include <stdio.h>//preprocesspr directive to include standard input or output header file
int main()
{
    char name[30];//Declare character
    printf("Enter name: \n");//Enter the name
    fgets(name, sizeof(name), stdin); // reads a line from the specified stream and stores it into the string pointed name
    puts(name);  //show one charcter to output
    return 0;//return statement
} 