#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r,a,b;
    printf("Donner un entier positif:\n");
    scanf("%d",&a);
    while(a!=0)
    {
        r=a%10;
        b=10*b+r;
        a=a/10;
    }
    printf("l'inverse de l'entier donne en entr�e est %d\n",b);
    return 0;
}

