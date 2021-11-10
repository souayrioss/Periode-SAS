#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	float C,F;
	const int nb1=32,nb2=(5/9);

	printf("enter la temperature en Fahrenheit ");
	scanf("%f",&F);
	C=(F-nb1)* nb2;
	printf("la temperature en degre Celsius %f ",C);
	return 0;
}
