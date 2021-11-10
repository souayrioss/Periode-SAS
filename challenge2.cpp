#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	float C,F;
	printf("enter la temperature en Fahrenheit ");
	scanf("%f",&F);
	C=(F-32)*5/9;
	printf("la temperature en degre Celsius %f ",C);
	return 0;
}
