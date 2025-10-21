#include <stdio.h>
#include <stdbool.h>

int main(){

    int a,b,c,d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    bool V = true;

    if(a!=b+c+d){
        V = false;
    }   

    if(b+c!=d){
        V=false;
    }

    if(b!=c){
        V=false;
    }

    if(V){
        printf("S\n");
    }
    else{
        printf("N\n");
    }


}