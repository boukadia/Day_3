#include<stdio.h>
#include<string.h>

/* Concaténation de Chaînes
Écrivez un programme C qui lit deux chaînes de caractères et les concatène en une seule chaîne.
 Affichez la chaîne résultante.*/
int main(){
    char chaine1[]="Mustapha";
    char chaine2[]="Boukadia ";
    strcat (chaine2,chaine1);
    puts (chaine2);

}