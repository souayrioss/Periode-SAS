#include<stdio.h>
#include<stdlib.h>

int main(){
	int nbr,i;
	bool pr=false;	
	printf("donner un nombre : ");
	scanf("%d",&nbr);
	for(i=2;i<nbr;i++){
		if(nbr%i==0)
			pr=true;
	}
	switch(pr){
		case false:
			printf("%d est un premier",nbr);			
			break;
		case true:
			printf(" %d n est pas premier",nbr);
			break;
	}
	return 0 ;
}
