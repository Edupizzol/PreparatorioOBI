#include <stdio.h>

int main(){

    int N;
    scanf("%d", &N);

    int camisa,pequeno=0,medio=0;

    for(int i=0;i<N;i++){
        
        scanf("%d", &camisa);

        if(camisa==1){
            pequeno++;
        }
        else{
            medio++;
        }

    }

    int a,b;

    scanf("%d %d", &a, &b);

    if(pequeno==a && medio==b){
        printf("S\n");
    }
    else{
        printf("N\n");
    }

    return 0;

}