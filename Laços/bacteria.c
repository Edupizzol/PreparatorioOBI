#include <stdio.h>

int main(){

    int N=1;
    int soma=0;

        while(N!=0){

        scanf("%d", &N);
            
        if(N % 2 == 0){
            soma += N;
        }

        }

        printf("%d", soma);

    return 0;
}