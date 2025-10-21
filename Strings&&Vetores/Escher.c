#include <stdio.h>
#include <stdbool.h>

int main(){

    int N;

    scanf("%d", &N);

    int Escher[N];

    for(int i=0;i<N;i++){

        scanf("%d", &Escher[i]);

    }

    N--;

    int num = Escher[0] + Escher[N];

    bool Bool = true;

    for(int i=0;i<=N/2;i++){

        if((Escher[i]+Escher[N-i])!=num){
            Bool = false;
        }

    }

    if(Bool){
        printf("S\n");
    }
    else{
        printf("N\n");
    }

    return 0;

}