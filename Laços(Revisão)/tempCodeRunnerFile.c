#include <stdio.h>

int main(){

    int N;

    scanf("%d", &N);

    double alcool,gasolina;

    char estado[2];

    for(int i=0;i<N;i++){

        fgets(estado,2,stdin);

        scanf("%lf %lf", &alcool, &gasolina);

        if((gasolina*7)/10 <= alcool){

            printf("%s\n", estado);

        }

    }

    return 0;

}