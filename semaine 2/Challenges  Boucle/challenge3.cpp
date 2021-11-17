#include<stdio.h>
#include<stdlib.h>
int main(){
	int nbr,i,pr=0;
	printf("donner un nombre : ");
	scanf("%d",&nbr);
	for(i=2;i<nbr;i++){
		if(nbr%i==0)
			pr=1;
	}
	switch(pr){
		case 0:
			printf("%d est un premier",nbr);			
			break;
		case 1:
			printf(" %d n est pas premier",nbr);
			break;
	}
	return 0 ;
}
