#include <stdio.h>//preprocessor directive to include standard input or output header file
#include<stdlib.h>
int main() {//where the execution start from main
	char name[50];//Declare charater and its variable and size 
	int marks,i,n;//Declare integer and its variable
	printf("Enter number of students: ");//Enter the number of student
	scanf("%d",&n);//The value of n is take by user
	FILE fptr;
	fptr(fopen("C:\\student.txt","w"));
	if(fptr==NULL) {
		printf("Error!");//print error
		exit(1);
	}//for loop start 
	for (i=0;i<n;++i) {//the value of i is o and n is take by user
		printf("For student%d\nEnter name: ",i+1);//printing the output
		scanf("%s",name);
		printf("Enter marks: ");
		scanf("%d",&marks);
		fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);
	}
	fclose(fptr);
	return 0;//return statemnet
}