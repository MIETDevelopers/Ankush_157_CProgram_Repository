#include<stdio.h>
int main(){
	int num;
	printf("Enter the number\n");
	scanf("%d", &num);
	if (num%2==0)
	{printf("This number is prime=%d\n",num);
	
	}
	else{
		printf("This number is not prime=%d\n",num);
	}
	return 0;
}