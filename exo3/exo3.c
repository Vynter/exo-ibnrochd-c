#include<stdio.h>
int main() {
int val;
int cinq=0;
int dix=0;
int dixSept=0;

while(1){

    printf("Veuillez saisir une valeur entre 0 et 50\n");
    scanf("%d",&val);
    if(val<0){
        break;
    }
    if(val<0 || val>50){
        printf("Veuillez saisir un nouveau chiffre\n");
    }else{
        if(val == 5){
            cinq=cinq+1;
        }else if (val ==10){
            dix=dix+1;
        }else if (val ==17){
            dixSept=dixSept+1;
        }
    };

printf("le nombre d'occurance de 5 est de : %d \n",cinq);
printf("le nombre d'occurance de 10 est de : %d \n",dix);
printf("le nombre d'occurance de 17 est de : %d \n",dixSept);

}

return 0;
}


