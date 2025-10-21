#include <stdio.h>

int main(){

    int cota,num,valor,answer=0;

    scanf("%d %d", &cota, &num);

    for(int i=0;i<num;i++){

        scanf("%d", &valor);

        answer+=(cota-valor);

    }

    printf("%d\n", cota + answer);

    return 0;

}