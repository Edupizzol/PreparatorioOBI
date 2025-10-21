#include <stdio.h>

int main(){

    int vet1[6],vet2[6];
    int cont=0;

    for(int i=0;i<6;i++){

        scanf("%d", &vet1[i]);

    }

    for(int i=0;i<6;i++){

        scanf("%d", &vet2[i]);

    }

    for(int i=0;i<6;i++){

        for(int j=0;j<6;j++){

            if(vet1[i]==vet2[j]){

                cont++;

            }

        }

    }

    if(cont==3){

        printf("terno\n");

    }
    else if(cont==4){

        printf("quadra\n");

    }
    else if(cont==5){

        printf("quina\n");

    }
    else if(cont==6){

        printf("sena\n");

    }
    else{

        printf("azar\n");

    }

    return 0;

}