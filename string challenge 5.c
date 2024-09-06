#include<stdio.h>
#include<string.h>
/*Écrivez un programme C qui lit une chaîne de caractères et affiche la chaîne inversée.
 Par exemple, si la chaîne est "abcd", le programme doit afficher "dcba".*/
 int main(){




    char a[30];
    printf("saisir la chaine : ");
    gets(a);
    int n=strlen(a);
    for(int i=n-1;i>=0;i--)

    printf("%c",a[i]);
 }
