#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	int nb1,nb2,nb3,nb4;
	double moy,sum;
	printf("enter les 4 nombre : \n");
	scanf("%d",&nb1);
	scanf("%d",&nb2);
	scanf("%d",&nb3);
	scanf("%d",&nb4);
	sum=nb1+nb2+nb3+nb4;
	printf("Moyenne est : %.2f \n",sum);
	moy=sum/4;
	printf("Moyenne est : %.2f",moy);
	return 0;
}
