#include <stdio.h>
#include <stdbool.h>

int main(){

    int N,K;
    scanf("%d %d", &K, &N);
    getchar();

    char alphabet[1000];
    char phrase[1000];

    bool vdd=false;

    fgets(alphabet,1000,stdin);

    fgets(phrase,1000,stdin);

    for(int i=0;i<N;i++){
        
        vdd = false;

        for(int j=0;j<K;j++){
            if(phrase[i]==alphabet[j]){
            vdd=true;
            break;
            }
        }
        if(!vdd){
            break;
        }

    }
    
    if(vdd){
        printf("S\n");
    }
    else{
        printf("N\n");
    }

    return 0;
    
}