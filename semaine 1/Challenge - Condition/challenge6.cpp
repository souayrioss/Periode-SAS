#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palidrome(char *str)
{
    bool resultat = false;
    if(strlen(str) <= 1)
       resultat = true;
    
    else if(str[0] == str[strlen(str)-1])
         {
            char c[strlen(str)-2];
            memcpy( c, &str[1], strlen(str) - 2 );
            c[strlen(str) - 2] = '\0';
            resultat = palidrome(c);
         }
    return resultat;
}

int main()
{
    char str[50];
    printf("Entrer une chaine.\n");
    scanf("%s",str);

    if(palidrome(str))
        printf("C'est un palindrome!\n");
    else
        printf("Ce n'est pas un palindrome! \n");
}

