#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	char nom[]="0";
	char prenom[]="0";
	int age;
	char sexe[]="0";
	char numTele[]="0";
	printf("Entrer votre nom :");
	scanf("%s",nom);
	printf("Entrer votre prenom :");
	scanf("%s",prenom);
	printf("Entrer votre age :");
	scanf("%d", &age);
	printf("Entrer votre sexe :");
	scanf("%s", &sexe);
	printf("Entrer votre numero de telephone :");
	scanf("%s", &numTele);
	printf("voila votre donnees %s,%s,%d,%s,%s " ,nom,prenom,age,sexe,numTele);
	return 0;
}
