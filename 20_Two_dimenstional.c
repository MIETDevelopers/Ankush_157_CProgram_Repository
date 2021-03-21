#include<stdio.h>//preprocessor directive to include standard input or output header file
int main(){
   /* 2D array declaration*/
   int disp[2][3];
   /*Counter variables for the loop*/
   int i, j;
   for(i=0; i<2; i++) {//loop start from 0 to 2 
      for(j=0;j<3;j++) {//loop start from 0 to 3
         printf("Enter value for disp[%d][%d]:\n", i, j);//enter the value of disp array1 or array 2
         scanf("%d", &disp[i][j]);//The value of disp[i][j] is take by user
      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", disp[i][j]);//print the 2d array output
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;//return statment
}