#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	int x1,x2,y1,y2;
	float MN;
	printf("Donner les coordonnées de M ");
	scanf("%d%d",&x1,&y1);
	printf("Donner les coordonnées de N ");
	scanf("%d%d",&x2,&y2);
	MN=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("la distance entre N et M est : %f",MN);
	return 0;
}
