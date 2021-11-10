#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	float Mt,Ml;
	printf("enter la distance en Mètre ");
	scanf("%f",&Mt);
	Ml=Mt/0,000621371;
	printf("la temperature en degre Celsius %f ",Ml);
	return 0;
}
