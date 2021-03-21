#include <stdio.h> //preprocesccor directive to include standard input or output header file
#include <stdlib.h>  
	int main() {
	int* ptr = malloc(10 * sizeof(*ptr));//deallocates the memory previously allocated by a call to malloc
		if (ptr != NULL){//if ptr is not equal to NuLL it pribt the value of integer
  		*(ptr + 2) = 50;
  		printf("Value of the 2nd integer is %d",*(ptr + 2));//print the output
		}
	free(ptr);//free(*ptr) deallocates the memory previously allocated by a call to calloc, malloc, or realloc.
}