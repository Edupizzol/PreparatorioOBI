#include <stdio.h>
#include <stdbool.h>

int main(){

    int n;

    scanf("%d", &n);

    int mat[n][n],row,collumn;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            scanf("%d", &mat[i][j]);

            if(mat[i][j]==0){
                row=i+1;
                collumn=j+1;
            }

        }
    }
    
    int sum;

    for(int i=0;i<n;i++){

            if(i!=row-1){

                sum=0;
            
                for(int j=0;j<n;j++){

                    sum+=mat[i][j];

                }

                break;

            }

    }

    int sum2=0;

    for(int i=0;i<n;i++){
        
        if(i==row-1){

            for(int j=0;j<n;j++){

                sum2+=mat[i][j];

            }

        }

    }

    printf("%d\n%d\n%d\n", (sum - sum2), row, collumn);
    


    return 0;

}
/*

3 3 3 
3 3 3 
3 3 3 


*/