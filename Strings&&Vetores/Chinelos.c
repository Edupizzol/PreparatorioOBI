#include <stdio.h>

int main(){

    int N,P;

    scanf("%d", &N);

    int chinelos[N];

    for(int i=0;i<N;i++){

        scanf("%d", &chinelos[i]);

    }

    int num,cont=0;

    scanf("%d", &P);

    for(int i=0;i<P;i++){

        scanf("%d", &num);

        if(chinelos[num-1]>=1){

            chinelos[num-1]--;
            cont++;

        }

    }

    printf("%d\n", cont);

    return 0;

}