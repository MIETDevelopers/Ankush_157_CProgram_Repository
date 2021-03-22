#include <stdio.h>//preprocessor directive to include standard input or output header file
void displayString(char str[]);

int main()
{
    char str[50];//Declare character and it varible 
    printf("Enter String: \n");//Enter the string 
    fgets(str, sizeof(str), stdin);       
    displayString(str);        
    return 0;//return statment 
}
void displayString(char str[])
{
    //This will give output.
    printf("String Output: ");
    puts(str);
} 