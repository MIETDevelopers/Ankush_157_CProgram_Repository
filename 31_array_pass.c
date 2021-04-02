//Author:Ankush kumar
//Date:23/03/2021
#include <stdio.h>//preprocessor directive to include standard input or output header file
#include <stdlib.h>//preprocessor directive to include standard input or output header file

#define ROWS 3
#define COLS 2

void fun1(int **, int, int);

int main()//The execution start from main function
{
  int array_2D[ROWS][COLS] = { {1, 2}, {3, 4}, {5, 6} };//declare of 2D arrray
  int n = ROWS;//Declare of interger and its variable
  int m = COLS;

  fun1(array_2D, n, m);

  return EXIT_SUCCESS;
}

void fun1(int **a, int n, int m)
{
  int i, j;//declare variable
  for (i = 0; i < n; i++) {//start of for loop 
    for (j = 0; j < m; j++) {//The loop start from o and the m is take by user
      printf("array[%d][%d]=%d\n", i, j, a[i][j]);
    }
  }
}
