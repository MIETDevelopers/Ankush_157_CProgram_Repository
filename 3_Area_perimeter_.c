/*Program to find the area of circle,square,rectangle or perimeter of circle,square,recatngle:
The formula of areaofcircle=22/7*radius*radius, perimeterofcircle=22/7*radius:
The formula of areaofsquare=side*side,perimeterofsquare=4*(side):
The formula of areaofrectangle=lenght*breath,perimeterofrectangle=2*(lenght+breath):*/
#include<stdio.h>//preprocessor directive to include standard input or output header file
int main(){//execution start from main function
	float radiusofcircle,sideofsquare,lenghtofrectangle,breathofrectangle;//declare the variable
	scanf("%f %f %f %f",&radiusofcircle,&sideofsquare,&lenghtofrectangle,&breathofrectangle);//scanf for take input form user
	printf("areaofcircle=%f\n",((22*radiusofcircle*radiusofcircle)/7));
	printf("perimeterofcircle=%f\n",((22*radiusofcircle)/7));
	printf("areaofsquare=%f\n",(sideofsquare*sideofsquare));
	printf("perimeterofsquare=%f\n",(4*(sideofsquare)));
	printf("areaofrectangle=%f\n",(lenghtofrectangle*breathofrectangle));
	printf("perimeterofrectangle=%f\n",(2*(lenghtofrectangle+breathofrectangle)));
	return 0;//return statment

}
