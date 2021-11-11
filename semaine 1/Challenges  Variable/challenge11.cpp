#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	float lon,lar,rec;
	printf("Donner le longeur de rectangle ");
	scanf("%f",&lon);
	printf("Donner le largeur de rectangle ");
	scanf("%f",&lar);
	rec=2*(lar+lon);
	printf("la circonférence d'un rectangle est : %.3f",rec);
	return 0;
}
