#include<stdio.h>
#include<string.h>

//Écrivez un programme C qui lit une chaîne de caractères entrée par l'utilisateur et l'affiche à l'écran.
int main(){
    
    char  chaine[1];
    printf("entrer le mots: ");
    gets (chaine);  
    printf("%s",chaine); 
   
    return 0;
}