#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c,D;
	printf("enter a, b et c : ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	D=pow(b,2)-(4*a*c);
	printf("%d",D);
	if (D>0)
		printf(" il y a deux solution x1 %f \n x2 %f ",((-b)+sqrt(D))/2*a,((-b)-sqrt(D))/2*a);
		else if (D == 0)
		printf("il y a un solution x %d ",(-b)/2*a);
	else
		printf("pas de solution  ");
	return 0;
}
