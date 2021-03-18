#include<stdio.h>//preprocessor directive to include standard input output header file
struct student{//The name of structure is student
	//structure member
	int rollnumber;        
	float engineeringdrawing;//float is datatype or engineeringdrawing its vairiable
	float computerprogramming; //float is datatype or computerprograming its vairiable
	float physic;//float is datatype or physic its variable
	float Maths;//flaot is datatype or Maths its variable
	float TotalMarks;//flaot is datatype or TotalMarks its variable

};
	int main(){//where the execution start from main
		struct student studentMarks;//studentMarks is the variable of structure Student
		//Assigning the values of each struct member here
		studentMarks.rollnumber=110;// 
		studentMarks.engineeringdrawing=10;
		studentMarks.computerprogramming=9;
		studentMarks.physic=9;
		studentMarks.Maths=8;
		studentMarks.TotalMarks=studentMarks.engineeringdrawing+studentMarks.computerprogramming+studentMarks.physic+studentMarks.Maths;//Adding of all variable
		printf("Aman(rollnumber%d)TotalMarks=%f\n",studentMarks.rollnumber,studentMarks.TotalMarks);//print the output
	}