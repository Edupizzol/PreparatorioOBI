#include <stdio.h>
#include <stdbool.h>

int main(){

    bool Bool = false;

    char palavra1[1002], palavra2[1002];

    fgets(palavra1,1002,stdin);

    fgets(palavra2,1002,stdin);

    int i=0,j;

    int iguaispos1=-1,iguaispos2=-1,cont=0,cont2=0;

    while(palavra1[i]!='\n'){

        cont++;
        i++;

    }

    i=0;

    while(palavra2[i]!='\n'){

        cont2++;
        i++;

    }

    i=0;

    cont--;
    cont2--;

    int temp = cont2;

    while(cont>=0){

        cont2 = temp;

        while(cont2>=0){

            if(palavra1[cont]==palavra2[cont2]){

                iguaispos1 = cont;
                iguaispos2 = cont2;

                break;

            }

            cont2--;

        }

        if(iguaispos1!=-1){

            Bool = true;
            break;

        }

        cont--;

    }

    if(Bool){

        printf("%d %d\n", iguaispos1+1, iguaispos2+1);

    }
    else{

        printf("-1 -1\n");

    }

    return 0;

}