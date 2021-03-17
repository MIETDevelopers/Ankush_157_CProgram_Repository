#include<stdio.h>
struct student{
	int rollnumber;
	float engineeringdrawing;
	float computerprogramming;
	float physic;
	float Maths;
	float TotalMarks;

};
	int main(){
		struct student studentMarks;
		studentMarks.rollnumber=110;
		studentMarks.engineeringdrawing=10;
		studentMarks.computerprogramming=9;
		studentMarks.physic=9;
		studentMarks.Maths=8;
		studentMarks.TotalMarks=studentMarks.engineeringdrawing+studentMarks.computerprogramming+studentMarks.physic+studentMarks.Maths;
		printf("Aman(rollnumber%d)TotalMarks=%f\n",studentMarks.rollnumber,studentMarks.TotalMarks);
	}