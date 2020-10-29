#include<stdio.h>
int main() {

    int val;
    int loop=1;
    int j=0;
    int nbrVal=0; 
    int nbrP=0; 
    int nbrNP=0; 
    int maxP=0; 
    int maxNP=0; 
    int minP=0;
    int minNP=0;
    char opt ='N';

    while(loop>0){

        printf("Veuillez saisir une valeur \n");
        scanf("%d",&val);
        nbrVal++;


        for(int i=1; i<=val; i++){    
            if(val%i==0)
            {
                j++;
            }
        }
        
           if(j==2){
                printf("Le chiffre %d est un nombre premier.\n",val);
                if(maxP<val){
                    maxP=val;
                }
                if(minP>=val){
                    minP=val;
                }
                nbrP++;

                j=0;
            }else{
                printf("Le chiffre %d n'est pas un nombre premier.\n",val);
                if(maxNP<=val){
                    maxNP=val;
                }
                if(minNP>=val){
                    minNP=val;
                }
                nbrNP++;

                j=0;
            }

        printf("--------------------------\n");
        printf("|Voulez-vous quiter (O/N)|\n");
        printf("--------------------------\n");
        scanf(" %c",&opt);

        if(opt=='O'|| opt=='o'){
            printf("--------------------------\n");
            printf("Nombre total des chiffres premier saisi par tilisateur %d\n",nbrP);
            printf("Nombre total des chiffres non premier saisi par l utilisateur %d\n",nbrNP);
            printf("Le plus petit chiffre premier est :  %d | et le plus grand chiffre premier est : %d\n",minP,maxP);
            printf("Le plus petit chiffre non premier  : %d  | et le plus grand chiffre non premier est : %d\n",minNP,maxNP);
            printf("Nombre total de chiffre saisi par l utilisateur %d\n",nbrVal);
            printf("--------------------------\n");
            loop=-1;   
        }

    }

    return 0;
}