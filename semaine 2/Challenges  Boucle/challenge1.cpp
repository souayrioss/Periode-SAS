#include<stdio.h>
#include<stdlib.h>
int main(){
	int nbr,i;
	printf("donner un nombre : ");
	scanf("%d",&nbr);
	for(i=1;i<11;i++){
		printf("%d * %d = %d \n",nbr,i,nbr*i);
	}
	return 0 ;
}
