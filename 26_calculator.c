#include <stdio.h>//preprocessor directive to include standard input or output header file
int main() {
    char operator;//Declare charactar and operator variable
    float first, second;
    printf("Enter an operator (+, -, *,): ");//Take all operator
    scanf("%c", &operator);//The value of operator is take by user
    printf("Enter two operands: ");
    scanf("%f %f", &first, &second);//The value of first and second is take by user

    switch (operator) {//Take a switch statement
    case '+'://case for addition
        printf("%f + %f = %f", first, second, first + second);//Addition of two number
        break;//if the condition is true it jump to switch statement
    case '-':
        printf("%f - %f = %f", first, second, first - second);//Subtration of two number
        break;
    case '*':
        printf("%f * %f = %f", first, second, first * second);//Multiplication of two number
        break;
    case '/':
        printf("%f / %f = %f", first, second, first / second);//division of two number
        break;
        // operator doesn't match any case constant
    default://if the all case are not true it print the Error
        printf("Error! operator is not correct");
    }

    return 0;
}