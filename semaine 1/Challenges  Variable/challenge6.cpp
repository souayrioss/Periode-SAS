#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	float C,F;
	const int x=32;
	printf("enter la temperature en degre Celsius ");
	scanf("%f",&C);
	F=(C*1.8)+x;
	printf("la temperature en Fahrenheit %f ",F);
	return 0;
}
