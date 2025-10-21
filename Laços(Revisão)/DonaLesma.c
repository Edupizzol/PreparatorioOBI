#include <stdio.h>

int main(){

    int a,s,d;

    scanf("%d %d %d", &a, &s, &d);

    int cont=0;

    while(a>=0){

        a-=s;

        cont++; 

        if(a<=0){

            break;

        }
       
        a+=d;

    }

    printf("%d\n", cont);

    return 0;

}