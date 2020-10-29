#include<stdio.h>
int main() {
int val;
int p=1;
int loop=1;
int resultat;


while(loop>0){

    printf("Veuillez saisir une valeur entre 15 et 40\n");
    scanf("%d",&val);
    if(val<0){
        loop=0;
    }else{
    if(val>=15 && val<=40){
        resultat=val*val;
        printf("la puissance au carre de %d est de : %d\n",val,resultat);

        if(resultat%2==0){
            printf("la valeur %d est paire \n",resultat);
                }else{
                    printf("la valeur %d est impaire\n",resultat);
                }

        

    }else{
        printf("Valeur non supporter\n");
    }
}
 



}

return 0;
}