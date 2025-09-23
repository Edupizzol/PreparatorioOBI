#include <stdio.h>

int LookAround(int N, int mat[N][N],int i, int j){

    int contWhite=0, contBlack=0;
    if(mat[i-1][j-1]==0){
        contWhite++;
    }
    else{
        contBlack++;
    }

    if(mat[i][j-1]==0){
        contWhite++;
    }
    else{
        contBlack++;
    }
    
    if(mat[i-1][j]==0){
        contWhite++;
    }
    else{
        contBlack++;
    }

    if(contWhite>contBlack){
        return 1;
    }
    else{
        return 0;
    }

}

void AmoC(int N, int mat[N][N]){

    for(int i=1;i<N;i++){
        for(int j=1;j<N;j++){
            mat[i][j]=LookAround(N,mat,i,j);
        }
    }   

}

int main(){

    int N;
    scanf("%d", &N);
    
    int mat[N][N];


    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            scanf("%d", &mat[i][j]);
        }
    }

    AmoC(N,mat);

    printf("%d\n", mat[N-1][N-1]);

}