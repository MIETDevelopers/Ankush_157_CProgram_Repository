#include<stdio.h>
int main(){
	float radiusofcircle,sideofsquare,lenghtofrectangle,breathofrectangle;
	scanf("%f %f %f %f",&radiusofcircle,&sideofsquare,&lenghtofrectangle,&breathofrectangle);
	printf("areaofcircle=%f\n",((22*radiusofcircle*radiusofcircle)/7));
	printf("perimeterofcircle=%f\n",((22*radiusofcircle)/7));
	printf("areaofsquare=%f\n",(sideofsquare*sideofsquare));
	printf("perimeterofsquare=%f\n",(4*(sideofsquare)));
	printf("areaofrectangle=%f\n",(lenghtofrectangle*breathofrectangle));
	printf("perimeterofrectangle=%f\n",(2*(lenghtofrectangle+breathofrectangle)));
	return 0;

}
