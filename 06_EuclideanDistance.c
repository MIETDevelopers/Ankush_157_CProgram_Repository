//Author:Ankush kumar
//Date:23/03/2021
//Purpose of the program to find the Euclidean distance between to point
 #include<stdio.h>//preprocessor directive to include standard input or output header file
#include<math.h>//for math operation sqrt funtion is use in  math.h
int main(){//The execution start from main
	float x1,y1,x2,y2,distance;//declare variable x1,x2,y1,y2,distance
	printf("Enter point 1(x1,y2)\n");//Take point 1
	scanf("%f %f", &x1, &y1);//scanf for take input from user
	printf("Enter point 2(x2,y2)\n");//Take point 2
	scanf("%f %f", &x2, &y2);
	//Distance formula =sqrt( (x2 - x1)*(x2 - x1)  +(y2 - y1)*(y2 - y1) sqrt is square root
	distance =sqrt( (x2 - x1)*(x2 - x1)  +(y2 - y1)*(y2 - y1) );
	printf("distance between two point=%f\n", distance);//print the distance between two point
	return 0;//return statement

}