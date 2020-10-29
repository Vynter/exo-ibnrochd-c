#include<stdio.h>
int main() {
int val;
int max=0;
int min;

printf("Veuillez saisir la valeur N 1 \n");
scanf("%d",&min);

for (int i = 1 ; i < 10; i ++) {
printf("Veuillez saisir la valeur N %d \n", i+1);
scanf("%d",&val);

    if(val>max){
        max=val;

    }else if(val<min){
        min=val;
    }
}
printf("-----------------------------------------------------\n");
printf("le plus petit chiffre est :  %d :\n",min);
printf("le plus grand chiffre est :  %d :\n",max);
printf("-----------------------------------------------------\n");



return 0;
}
