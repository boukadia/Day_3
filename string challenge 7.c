// converter le maniscule a majuscules
#include<stdio.h>
int main(){
    char tab[]="bouAadia";

    for (int i=0;i<8;i++){
        if(tab[i]>=97&&tab[i]<122)
        printf("%c",tab[i]-32);
        else 
        printf("%c",tab[i]);


    }
    
}