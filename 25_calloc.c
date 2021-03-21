#include <stdio.h> //preprocessor directive to include standard input or output header file
#include <stdlib.h>//
    int main() {
        int i, * ptr, sum = 0;//declare the integer or its variable
        ptr = calloc(10, sizeof(int));
        if (ptr == NULL) {
            printf("Error! memory not allocated.");//print Error memory not allocate
            exit(0);
        }
        printf("Building and calculating the sequence sum of the first 10 terms \n ");//print thr sequencd sum of the first 10 term
        for (i = 0; i < 10; ++i) { * (ptr + i) = i;//loop start from 0 and less than 10
            sum += * (ptr + i);
        }
        printf("Sum = %d", sum);//print the sum output
        free(ptr);
        return 0;//return statement
    } 