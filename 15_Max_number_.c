#include <stdio.h>//preprocessor directive to include standard input or output
int main()//where the exeuction start from main function
{
  int array[100], size, c, location = 0;//take array and it size or variable

  printf("Enter the number of elements in array\n");//Enter the number of element
  scanf("%d", &size);//The value of size is taken by user

  printf("Enter %d integers\n", size);//entre the interger

  for (c = 0; c < size; c++)//loop start from 0, size take from user 
    scanf("%d", &array[c]);//The value of array[c] is take by user 

  for (c = 1; c < size; c++)//loop start from 1, size is take by user
    if (array[c] > array[location])//array[c] is greater than array[location]
      location = c;//The value of c is assigned to location

  printf("Maximum element is present at location %d and its value is %d.\n", location+1, array[location]);//print the output
  return 0;//return statement
}