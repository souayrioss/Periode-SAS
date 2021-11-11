#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	int a,b;
	printf("enter les valeurs a  : ");
	scanf("%d",&a);
	printf("enter les valeurs b  : ");
	scanf("%d",&b);
	printf("la resultat  de a + b est = %d \n",a+b);
	printf("la resultat  de a - b est = %d \n",a-b);
	printf("la resultat  de a * b est = %d \n",a*b);
	printf("la resultat  de a / b est = %f \n",a/b);
	printf("la resultat  de a % b est = %d ",a%b);

	/*
	char ope ;
    double a, b;

    printf("Enter une operation (+, -, *, /): ");
    scanf("%c", &ope);
    printf("enter les valeurs a  : ");
	scanf("%d",&a);
	printf("enter les valeurs b  : ");
	scanf("%d",&b);

    switch(ope)
    {
        case '+':
            printf("la resultat  de a + b est = %d \n",a+b);
            break;

        case '-':
            printf("la resultat  de a - b est = %d \n",a-b);
            break;

        case '*':
            printf("la resultat  de a * b est = %d \n",a*b);
            break;

        case '/':
            printf("la resultat  de a / b est = %d \n",a/b);
            break;

		default:
            printf("Error! operator is not correct");
    }
	*/
    return 0;
}

