#include <stdio.h>
#include <stdbool.h>

int main(){

    char alfabeto[23] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'z'};

    int array[23];

    for(int i=0;i<23;i++){

        array[i]=0;

    }

    char texto[202];

    fgets(texto,202,stdin);

    int i=0;

    while(texto[i]!='\n'){

        for(int j=0;j<23;j++){

            if(texto[i]==alfabeto[j]){

                array[j]=1;

            }

        }

        i++;

    }

    bool Bool = true;

    for(int i=0;i<23;i++){

        if(array[i]==0){

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