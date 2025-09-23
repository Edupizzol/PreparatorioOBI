#include <stdio.h>

int main(){

    int N;

    scanf("%d", &N);

    int fila[N];

    for(int i=0;i<N;i++){

        scanf("%d", &fila[i]);

    }

    int M;

    scanf("%d", &M);

    int saida[M];

    for(int i=0;i<M;i++){

        scanf("%d", &saida[i]);

    }

    for(int i=0;i<M;i++){

        for(int j=0;j<N;j++){

            if(fila[j]==saida[i]){
                fila[j]=-1;
            }

        }

    }

    for(int i=0;i<N;i++){

        if(fila[i]!=-1){

            printf("%d ", fila[i]);

        }

    }

    printf("\n");

    return 0;

}