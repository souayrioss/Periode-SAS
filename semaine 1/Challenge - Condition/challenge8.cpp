#include<stdio.h>
#include<stdlib.h>
int main()
{
    char c;
    printf("Donnez un caractere:\n");
    scanf("%c",&c);
    if(c>='a' && c<='z')
       printf("%c est un minuscule",c);
    if(c>='A' && c<='Z')
       printf("%c est un majuscule",c);
    if( !(c>='a' && c<='z') && !(c>='A' && c<='Z'))
       printf("%c n'est pas une alphabet",c);
    return 0;
}

