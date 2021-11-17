#include<stdio.h>
#include<stdlib.h>
int main(){
	int nbr,sum,max;
	do{
	printf("donner un nombre(pour finir entrer un nombre negatif) : ");
	scanf("%d",&nbr);
	if(nbr > 0 && nbr <= 100){
		sum = sum+nbr;
		}
	if(nbr > 0 && max < nbr && nbr <= 100){
        max=nbr;
		}
	}while(nbr != 0);
	
	printf("Le moyenne  est %d\n",sum);
	printf("Le plus grand  est %d", max);
	return 0 ;
}
