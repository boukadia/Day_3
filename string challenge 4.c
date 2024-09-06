#include<stdio.h>
#include<string.h>

/*Comparaison de Chaînes
Écrivez un programme C qui lit deux chaînes de caractères et compare si elles sont égales ou non.
 Affichez un message indiquant si les chaînes sont égales ou différentes.
 */
int main(){
    char chaine1[10];
    char chaine2[10];
    printf("taper la premiere chaine : ");
    gets (chaine1 ); // j'ai ajoute une espace dans fonction gets!!
    printf("taper la deuxieme chaine : ");
    gets (chaine2);
    strcmp (chaine2,chaine1);
    int i=strcmp (chaine2,chaine1);
    if (i==0)
    printf("les deux chaines sont identiques");
     else
      printf("les deux chaines ne sont pas identiques");
      return 0;

}