#include<stdio.h>
#include<stdlib.h>
int a, b;
void echanger(){
	a=a+b;
	b=a-b;
	a=a-b;
}
int main(){
	
	printf("entrer a  ");
	scanf("%d",&a);
	printf("entrer b  ");
	scanf("%d",&b);
	printf("a = %d && b = %d \n",a,b);
	echanger();
	printf("a = %d && b = %d",a,b);
	
	return 0;
}
