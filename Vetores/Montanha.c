#include <stdio.h>

int main(){

    int N,cont=0;

    scanf("%d", &N);

    int vetor[N];


    for(int i=0;i<N;i++){

        scanf("%d", &vetor[i]);

    }

    for(int i=1;i<N;i++){

        if(vetor[i-1]>vetor[i] && vetor[i]<vetor[i+1]){

            cont++;

        }
        
    }

    if(cont>1){

        printf("S\n");

    }
    else{

        printf("N\n");

    }

    return 0;

}