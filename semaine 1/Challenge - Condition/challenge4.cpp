#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
	int nb1,nb2,sum;
	printf("enter le premier nombre : ");
	scanf("%d",&nb1);
	printf("enter le deuxieme nombre  ");
	scanf("%d",&nb2);
	sum=nb1+nb2;
	if (nb1 == nb2)
		printf(" %d",sum*3);
	else 
		printf("les deux  valeurs ne sont pas identique");
	return 0;
}
