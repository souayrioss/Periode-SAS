#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	float r,c;
	const float pi=3.14;
	printf("Donner le rayon de cercle ");
	scanf("%f",&r);
	c=2*pi*r;
	printf("la circonférence d'un cercle est : %.3f",c);
	return 0;
}
