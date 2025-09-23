#include <stdio.h>

int main(){

    int p1,c1,p2,c2;

    scanf("%d %d %d %d", &p1, &c1, &p2, &c2);

    int g1=p1*c1, g2=p2*c2;

    if(g1>g2){
        printf("-1\n");
    }
    else if(g2>g1){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
    

}