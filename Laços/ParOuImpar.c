#include <stdio.h>

int main(){

    int p,d1,d2;

    scanf("%d %d %d", &p, &d1, &d2);

    if(p==0 && (d1+d2)%2==0){
        printf("0\n");
    }
    else if(p==1 && (d1+d2)%2==0){
        printf("1\n");
    }
    else if(p==0 && (d1+d2)%2==1){
        printf("1\n");
    }
    else{
        printf("0\n");
    }

    return 0;

}