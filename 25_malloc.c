#include <stdio.h>//preprocessor directive to include standard output or input header file
#include <stdlib.h> //general purpose standard library of C
	int main(){
	int *ptr;
		ptr = malloc(15 * sizeof(*ptr)); //use of malloc
    	if (ptr != NULL) {
        *(ptr + 5) = 298;  
    printf("Value of the 6th integer is %d",*(ptr + 5));//print the 6 integer
    }
}