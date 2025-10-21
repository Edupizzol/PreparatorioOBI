#include <stdio.h>

int main(){

    int N;

    scanf("%d", &N);

    int vetor[N];

    for (int i=0;i<N;i++){ 
        
        scanf("%d", &vetor[i]);
    
    }

    if(vetor[0]>8){

        printf("N\n");
        
        return 0;

    }

    for(int i=1;i<N;i++){

        if(vetor[i]-vetor[i-1]>8){

            printf("N\n");

            return 0;

        }

    }

    printf("S\n");
    
    return 0;

}
