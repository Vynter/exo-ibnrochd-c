#include<stdio.h>
int main() {
int val;
int paire=0;
int impaire=1;

for (int i = 0 ; i < 10; i ++) {
printf("Veuillez saisir la valeur N %d \n", i+1);
scanf("%d",&val);

    if(val%2==0){
        paire=paire+val;

    }else{
        impaire = impaire * val;
    }



}
printf("-----------------------------------------------------\n");
printf("la somme des valeurs paire est de %d :\n",paire);
printf("le produit des valeurs impaire est de %d :\n",impaire);
printf("-----------------------------------------------------\n");



return 0;
}
