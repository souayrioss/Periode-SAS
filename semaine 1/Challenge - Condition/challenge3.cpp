#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
	int nb1,nb2,p;
	printf("enter le premier nombre a : ");
	scanf("%d",&nb1);
	printf("enter le deuxieme nombre b ");
	scanf("%d",&nb2);
	if (nb1 != nb2 || nb1 < nb2){

		p=nb1;
		nb1=nb2;
		nb2=p;
		printf(" la permutation de a:%d et b:%d  est a:%d et b:%d ",nb2,nb1,nb1,nb2);
	}else 
		printf("les nombre sont egaux ou a superieur au b  ");
	return 0;
}
