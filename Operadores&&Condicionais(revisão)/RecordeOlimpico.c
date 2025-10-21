#include <stdio.h>

int main(){

    int A,B,C;

    scanf("%d %d %d", &A, &B, &C);

    if(A<B){

        printf("RM\n");

    }
    else{

        printf("*\n");

    }

    if(A<C){

        printf("RO\n");

    }
    else{

        printf("*\n");

    }

    return 0;

}