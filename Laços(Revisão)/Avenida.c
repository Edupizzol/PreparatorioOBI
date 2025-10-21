#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    scanf("%d", &n);

    int menor = 2000;                       
    int pontos[] = {0, 400, 800, 1200, 1600, 2000};

    for (int i=0;i<6;i++){

        int dist = abs(pontos[i] - n);

        if(dist<menor){

            menor = dist;

        } 

    }

    printf("%d\n", menor);

    return 0;
    
}
