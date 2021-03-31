//Author:Ankush kumar
//Date:23/03/2021
//Purpose of the program is additionMatrix of 2D array
#include <stdio.h>//preprocessor directive to include standard input or output header file

int main()//The execution start from main function
{
    int rowCount, columnCount, i, j;//Declare integer and its variable
    int firstMatrix[10][10], secondMatrix[10][10], resultMatrix[10][10];//declare the 2D array

    printf("Number of rows of matrices to be added : ");
    scanf("%d", &rowCount);//The value of rowcount is taken by user

    printf("Number of columns matrices to be added : ");
    scanf("%d", &columnCount);//The value of columncount is taken by user

    printf("Elements of first matrix : \n");//Elemnt of first matrix

    for (i = 0; i < rowCount; i++)//loop start from 0 and the rowcount is taken by user
        for (j = 0; j < columnCount; j++)//loop start from 0 and column is taken by user
            scanf("%d", &firstMatrix[i][j]);

    printf("Elements of second matrix : \n");//Print the second matrix

    for (i = 0; i < rowCount; i++)
        for (j = 0; j < columnCount; j++)
            scanf("%d", &secondMatrix[i][j]);

    printf("Sum of entered matrix : \n");//print the output 

    for (i = 0; i < rowCount; i++)
    {
        for (j = 0; j < columnCount; j++)
        {
            resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
            printf("%d\t",resultMatrix[i][j]);//addition of first Matrix and secondMatrix
        }
        printf("\n");
    }

    return 0;//return statement
}
