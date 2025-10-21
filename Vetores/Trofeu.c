#include <stdio.h>

int main(){

    int vetor[5];

    int trofeu,placa,conttrofeu=0,contplaca=0;

    for(int i=0;i<5;i++){

        scanf("%d", &vetor[i]);

    }

    trofeu = vetor[0];
    
    for(int i=0;i<5;i++){

        if(vetor[i]<trofeu){

            placa=vetor[i];
            
            break;

        }

    }

    for(int i=0;i<5;i++){

        if(vetor[i]==trofeu){

            conttrofeu++;

        }
        else if(vetor[i]==placa){

            contplaca++;

        }

    }

    printf("%d %d\n", conttrofeu, contplaca);

    return 0;

}