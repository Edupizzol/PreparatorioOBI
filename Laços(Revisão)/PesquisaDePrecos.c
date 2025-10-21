#include <stdio.h>
#include <stdbool.h>

int main(){

    bool Bool = false;

    int N;

    scanf("%d", &N);
    getchar();

    double alcool,gasolina;

    char estado[3];

    for(int i=0;i<N;i++){

        for(int j=0;j<2;j++){

            scanf("%c", &estado[j]);

        }

        getchar();

        scanf("%lf %lf", &alcool, &gasolina);

        getchar();

        if((gasolina*7)/10 >= alcool){

            Bool = true;

            printf("%s\n", estado);

        }

    }

    if(!Bool){

        printf("*\n");

    }

    return 0;

}