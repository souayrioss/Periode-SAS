#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	float Km,Ml;
	printf("enter la distance en Mille ");
	scanf("%f",&Ml);
	Km=Ml*1.609;
	printf("la la distance en  Kilo Metre %f ",Km);
	return 0;
}
