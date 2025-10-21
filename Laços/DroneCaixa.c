#include <stdio.h>

int main(){
        
    int a,b,c,h,l;

    scanf("%d %d %d %d %d", &a, &b, &c, &h, &l);

    int size = h*l;
    int size1 = a*b, size2= b*c, size3 = a*c;

    if(size1 <= size && ((a<=h && b<=l) || (a<=l && b<=h))){
        printf("S\n");
    }
    else if(size2 <= size && ((c<=h && b<=l) || (c<=l && b<=h))){
        printf("S\n");
    }
    else if(size3 <= size && ((a<=h && c<=l) || (a<=l && c<=h))){
        printf("S\n");
    }
    else{
        printf("N\n");
    }

    return 0;

}