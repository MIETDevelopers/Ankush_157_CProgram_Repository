#include <stdio.h>//preprocessor directive to include standard input or ouptut header file

struct a {//declare a struture and struture tag
   int i;//Declare integer and  its variable 
};

struct a f(struct a x)
{
   struct a r = x;
   return r;//return r
}//variable of i

int main(void)
{
   struct a x = { 12 };//assigned value
   struct a y = f(x);
   printf("%d\n", y.i);//print output
   return 0;//rerurn statement
}