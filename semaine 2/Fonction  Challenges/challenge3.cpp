#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int nbr,i;
bool pr=false;
bool isPremier(){

	for(i=2;i<nbr;i++){
		if(nbr%i==0){
			pr=true;
			break; 
		}
	
	}
} 
int main(){
	printf("donner un nombre : ");
	scanf("%d",&nbr);
	isPremier();
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
