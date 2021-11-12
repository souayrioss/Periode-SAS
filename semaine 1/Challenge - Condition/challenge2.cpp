#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
	int nbr,res;
	printf("enter un nombre ");
	scanf("%d",&nbr);
	res=nbr%2;
	if (res == 1)
		printf("impaire ");
	else 
		printf("paire ");
	return 0;
}
