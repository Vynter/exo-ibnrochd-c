#include<stdio.h>
int main() {
int val;
int nbr1;
int nbr2;
int loop=1;

while(loop>0){

    printf("-----------------------------------\n");
    printf("Menu\n");
    printf("-----------------------------------\n");
    printf("1. Addition\n");
    printf("2. Soustraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulo\n");
    printf("6. Puissance\n");
    printf("7. Quitter\n");
    printf("-----------------------------------\n");
    printf("Veuillez choisir une des options \n");
    scanf("%d",&val);

    switch(val){
        case 1:
            printf("Veuillez saisir la 1er valeur\n");
            scanf("%d",&nbr1);
            printf("Veuillez saisir la 2eme valeur\n");
            scanf("%d",&nbr2);
            printf("L'addition des deux valeurs donne : %d \n",nbr1+nbr2);
            break;
        case 2:
            printf("Veuillez saisir la 1er valeur\n");
            scanf("%d",&nbr1);
            printf("Veuillez saisir la 2eme valeur\n");
            scanf("%d",&nbr2);
            printf("La soustracitions des deux valeurs donne : %d \n",nbr1-nbr2);
            break;
        case 3:
            printf("Veuillez saisir la 1er valeur\n");
            scanf("%d",&nbr1);
            printf("Veuillez saisir la 2eme valeur\n");
            scanf("%d",&nbr2);
            printf("La multiplication des deux valeurs donne : %d \n",nbr1*nbr2);
            break;
        case 4:
            printf("Veuillez saisir la 1er valeur\n");
            scanf("%d",&nbr1);
            printf("Veuillez saisir la 2eme valeur\n");
            scanf("%d",&nbr2);
            printf("La division entre les deux valeurs donne : %d\n",nbr1/nbr2);
            break;
        case 5:
            printf("Veuillez saisir la 1er valeur\n");
            scanf("%d",&nbr1);
            printf("Veuillez saisir la 2eme valeur\n");
            scanf("%d",&nbr2);

            printf("Le reste de la division entre les deux valeurs donne : %d\n",nbr1%nbr2);
            break;
        case 6:
            printf("Veuillez saisir la valeur\n");
            scanf("%d",&nbr1);
            printf("Veuillez saisir la puissance\n");
            scanf("%d",&nbr2);
            int resultat=1;
            for (int i = 0; i < nbr2; i++)
            {
                resultat = resultat * nbr1;
            }
            
            printf("le resultatt de %d ^ %d est : %d\n",nbr1,nbr2,resultat);
            
            break;
        case 7:
            loop=-1;
            break;
    }




}

return 0;
}