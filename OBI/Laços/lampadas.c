#include <stdio.h>

int main(){

    int N;
    scanf("%d", &N);
    
    int A=0,B=0,num;

    for(int i=0;i<N;i++){

        scanf("%d", &num);

        if(num==1){
            A++;
        }
        else{
            B++;
            A++;
        }
        
    }

    if(A%2==0){
        printf("0\n");
    }
    else{
        printf("1\n");
    }

    if(B%2==0){
        printf("0\n");
    }
    else{
        printf("1\n");
    }


    return 0;

}