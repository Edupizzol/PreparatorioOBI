#include <stdio.h>

int main(){

    int N;
    scanf("%d", &N);
    int max=0,num=0;

    int mat[N][N];
    int linhas[N],colunas[N];

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i=0;i<N;i++){
        linhas[i]=0;
    }

    for(int i=0;i<N;i++){
        colunas[i]=0;
    }
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            linhas[i]+=mat[i][j];
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            colunas[i]+=mat[j][i];
        }
    }

    int val=0;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            val=0;
            val=linhas[i] + colunas[j] - (2*mat[i][j]);
            if(val>max){
                max=val;
            }
        }
    }

    printf("%d\n", max);

    return 0;

}