#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	float Km,Ml;
	printf("enter la distance en Kilo Metre ");
	scanf("%f",&Km);
	Ml=Km/1.609;
	printf("la la distance en Mille %f ",Ml);
	return 0;
}
