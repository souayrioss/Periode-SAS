#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	int nbr,b;
	printf("Donner un nombre entier à trois chiffres ");
	scanf("%d",&nbr);
	b=(nbr%10)*100;
	nbr/=10;
	b+=(nbr%10)*10;
	nbr/=10;
	b+=nbr;
	printf("l'inverce de votre nombre  est : %d",b);
	return 0;
}
