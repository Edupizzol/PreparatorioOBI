#include <stdio.h>
#include <stdbool.h>

int main(){

    bool Bool = false;

    int n;
    
    scanf("%d", &n);

    getchar();

    char palavra1[n+1], palavra2[n+1];

    scanf("%[^\n]", palavra1);
    getchar();

    scanf("%[^\n]", palavra2);
    getchar();

    int k=0,l=0;

    while(palavra1[k]!='\0'){

        if(palavra1[k]<'a' || palavra1[k]>'z'){

            palavra1[k] = ' ';

        }

        k++;

    }

    while(palavra2[l]!='\0'){

        if(palavra2[l]<'a' || palavra2[l]>'z'){

            palavra2[l] = ' ';

        }

        l++;

    }

    int i=0,j=0;

    while(palavra1[i]!='\0'){

        Bool = false;

        j=0;

        while(palavra2[j]!='\0'){

            if(palavra1[i]==palavra2[j]){

                Bool = true;

                palavra2[j] = 'A';

                break;

            }

            j++;

        }

        if(!Bool){

            break;

        }

        i++;

    }

    if(Bool){

        printf("S\n");

    }
    else{

        printf("N\n");

    }


    return 0;

}