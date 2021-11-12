#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
	float C,F;
	printf("enter la temperature en Fahrenheit ");
	scanf("%f",&F);
	C=(F-32)*5/9;
	printf("la temperature en degre Celsius %f ",C);
	if (C<8)
		printf("très froid ");
		else if (C>8 && C<18)
		printf("froid ");
		else if (C>=18 && C<28)
		printf("chaud ");
		else 
		printf("trés chaud ");
	return 0;
}
