#include <stdio.h>

int main(){

    int n;

    scanf("%d", &n);

    int array[n];

    for(int i=0;i<n;i++){

        scanf("%d",&array[i]);

    }

    int cont=1,temp=1;

    for(int i=1;i<n;i++){


        if(array[i]!=temp){

            temp = array[i];

            cont++;

        }

    }

    printf("%d", cont);

    return 0;

}