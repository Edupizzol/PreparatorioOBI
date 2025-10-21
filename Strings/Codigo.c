#include <stdio.h>

int main(){

    int N;

    scanf("%d", &N);

    int codigo[N];

    for(int i=0;i<N;i++){

        scanf("%d", &codigo[i]);

    }

    int cont=0;

    for(int i=0;i<N-2;i++){

        if(codigo[i]==1 && codigo[i+1]==0 && codigo[i+2]==0){

            cont++;

        }

    }

    printf("%d\n", cont);

    return 0;

}