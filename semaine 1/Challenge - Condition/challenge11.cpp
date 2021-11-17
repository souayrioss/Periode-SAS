 #include<stdio.h>
#include<stdlib.h>
int main()
{
    int h1,h2;
    int m1,m2;
    int s1,s2;
    int k=2;
    printf("Entrez heur le premier instant:\n");
    scanf("%d",&h1);
    printf("Entrez minute le premier instant:\n");
    scanf("%d",&m1);
    printf("Entrez seconde le premier instant:\n");
    scanf("%d",&s1);
    printf("Entrez heur le deuxieme instant:\n");
    scanf("%d",&h2);
    printf("Entrez minute le deuxieme instant:\n");
    scanf("%d",&m2);
    printf("Entrez seconde le deuxieme instant:\n");
    scanf("%d",&s2);
    if(h1<h2) k=1;
    if(h1==h2 && m1<m2) k=1;
    if(h1==h2 && m1==m2 && s1<s2) k=1;
    if(h1==h2 && m1==m2 && s1==s2) k=0;
    switch(k)
    {
       case 0: 
               printf("Il s'agit du meme instant.\n");
            break;
       case 1: 
               printf("Le premier instant vient avant le deuxieme.\n");
            break;
       case 2 : 
               printf("Le deuxieme instant vient avant le premier.\n");
    }
    return 0;
}

