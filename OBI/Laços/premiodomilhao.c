#include <stdio.h>

int main(){

    int N,num=0,uau=1000000,cont=0;
    scanf("%d", &N);

    for(int i=0;i<N;i++){

        scanf("%d", &num);
    
        uau-=num;
        cont++;

        if(uau<=0){
            break;
        }

    }

    printf("%d\n", cont);

    return 0;

}