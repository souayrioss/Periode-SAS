#include<stdio.h>
#include<stdlib.h>
int main(){
	int nbl,i,j,k;
	printf("donner un nombre : ");
	scanf("%d",&nbl);
	for(i=1;i<=nbl;++i){
		for(j=1;j<=nbl-i;++j){
		printf("  ");
		}
		for(k=0;k != 2*i-1;++k){
		printf(" *");
		}	
		printf("\n");
	}
	return 0 ;
}
