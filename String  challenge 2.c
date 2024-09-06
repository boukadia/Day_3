#include<stdio.h>
#include<string.h>
/*Écrivez un programme C qui 
calcule et affiche la longueur d'une chaîne de caractères sans utiliser la fonction strlen().*/
int main(){
    int nombre,p,n,m;
    
    char chaine[100];
    gets(chaine);
   // scanf("%s",chaine);
    n=0;
    int count=0;
    for (int i=0;i>=n;i++){
        if (chaine[i]!='\0'){
        count++;
         }
        else
        break;
    }
    printf ("%d",count);
}
