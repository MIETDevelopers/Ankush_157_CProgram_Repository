//Author:Ankush kumar
//Date:26/03/2021
#include<stdio.h>//preprocessor directive to include standard input or output header file

int main(void)
{
  int c, d, p, q, m, n, k, tot = 0;//declare integer variable
  int fst[10][10], sec[10][10], mul[10][10];//declare  2d array

  printf(" Please insert the number of rows and columns for first matrix \n ");
  scanf("%d%d", &m, &n);//The value of m and n is take by user

  printf(" Insert your matrix elements : \n ");//Insert your matrix element 
  // it will iterate "m" and "n" number of times to feed values in the fst[][] array.
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &fst[c][d]);
 
  printf(" Please insert the number of rows and columns for second matrix\n");
  scanf(" %d %d", &p, &q);

  if (n != p)
    printf(" Your given matrices cannot be multiplied with each other. \n ");
  else
  {
    printf(" Insert your elements for second matrix \n ");
    //Now the condition is checked whether the number of columns in the first matrix is equal to the number of rows in the second matrix
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &sec[c][d] );

    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          tot = tot + fst[c][k] * sec[k][d];
        }
        mul[c][d] = tot;
        tot = 0;
      }
    }
 
    printf(" The result of matrix multiplication or product of the matrices is: \n "); 
    for (c = 0; c < m; c++) {//At the same time store every calculated value of tot in the array mul[][] 
      for (d = 0; d < q; d++)//which will store the resultant multiplication.
        printf("%d \t", mul[c][d] );
      printf(" \n ");
    }
  }
  return 0;
}
