#include<stdio.h>
#include<math.h>

int main(){
	
	float moyenne ;
	
	printf("entrer le moyenne generale : ");
	scanf("%f",&moyenne);
	
	if(moyenne < 10 )
		printf("recalé");
		else if (moyenne >= 10 && moyenne < 12 )
		printf("passable");
		else if (moyenne >= 12 && moyenne < 14 )
		printf("assez bien");
		else if (moyenne >= 14 && moyenne < 16 )
		printf(" bien");
	else 
		printf("trés bien");
}
