#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int a,n,r,i;
bool pr =false;
int divededby(int n,int a){
	r=a/n;
	return r;
}
bool dividedby(){
	divededby(n,a);
	for(i=2;i<r;i++){
		if(r%i==0){
			pr=true;
			break; 
		}
	}
	return pr;
} 
int main(){
	printf("entrer un nombre ");
	scanf("%d",&a);
	printf("entrer le diviseur ");
	scanf("%d",&n);
	divededby(n,a);
	printf("%d : ",divededby(n,a));
	if(dividedby()==true)
		printf("n'est pas un premier");
	else 
		printf("est un premier");
		
	return 0;
}
