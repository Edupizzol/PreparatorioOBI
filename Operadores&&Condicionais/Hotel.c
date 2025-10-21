#include <stdio.h>

int main(){

    int D,A,N;

    scanf("%d %d %d", &D, &A, &N);

    int diaria;

    if(N<=15){

        diaria = D+(N-1)*A; 

    } 
    else{

        diaria = D+14*A;   

    }

    int dias = 32-N; 
    int total = diaria*dias;

    printf("%d\n", total);

    return 0;
}
