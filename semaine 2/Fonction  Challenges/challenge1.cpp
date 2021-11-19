#include<stdio.h>
#include<stdlib.h>
int add(int a,int b){
	int res;
	res = a + b ;
	return res ;
}
int main(){
	int a,b;
	printf("entrer a  ");
	scanf("%d",&a);
	printf("entrer b  ");
	scanf("%d",&b);
	add(a,b);
	printf("%d + %d = %d",a,b,add(a,b));
	
	return 0;
}
