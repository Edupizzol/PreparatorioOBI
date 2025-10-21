#include <stdio.h>

int main(){

    int N,G,M;

    scanf("%d %d %d", &N, &G, &M);

    int Sobra = (G*8+M*6)-N;

    if(Sobra>0){

        printf("%d\n", Sobra);

    }
    else{

        printf("0\n");

    }

    return 0;

}