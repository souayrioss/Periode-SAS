#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	int c;
	printf("Donner un valeur ");
	scanf("%s",&c);

	printf(" \n le nombre en decimale est   est : %d",c);
	printf(" \n le nombre en hexadecimale est  est : %x",c);
	printf(" \n le nombre en octel est : %o",c);
	return 0;
}
