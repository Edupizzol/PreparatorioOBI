#include <stdio.h>

int main(){

    int N;
    scanf("%d", &N);
    getchar();

    int temp=N,start=0,num=1,divisao;
    int mat[N][N];
    
    if(N%2==0){
        divisao = N/2;
    }
    else{
        divisao=N/2+1;
    }

    for(int k=0;k<divisao;k++){
        for(int i=start;i<temp;i++){
            for(int j=start;j<temp;j++){
                if(i==start || i==temp-1 || j==start || j==temp-1){
                    mat[i][j]=num;
                }
            }
        }
        num++;
        temp--;
        start++;
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }

    return 0;

}