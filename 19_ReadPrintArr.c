//Author:Ankush kumar
//Date;26/03/2021
//Purpose of the Program to read and print elements in two dimensional array.
#include<stdio.h>//preprocessor directive to include standard input or output header file
int main(){
   /* 2D array declaration*/
   int disp[3][4];
   /*Counter variables for the loop*/
   int i, j;
   for(i=0; i<3; i++) {//loop start from to 0 and end at 3
      for(j=0;j<4;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);//The value of dis[i][j] is taken by user
      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<3; i++) {
      for(j=0;j<4;j++) {
         printf("%d \n", disp[i][j]);
         if(j==4){
            printf("\n");//print the output
         }
      }
   }
   return 0;//return statement
} 
