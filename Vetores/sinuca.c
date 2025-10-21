#include <stdio.h>

int main(){

    int n;

    scanf("%d",&n);

    int vetor[n];

    for(int i=0;i<n;i++){

        scanf("%d", &vetor[i]);

    }

    int temp=n,isaac;

    while(vetor[1]!=0){    
    
        for(int i=0;i<temp;i++){

                if(vetor[i] == vetor[i+1]){

                    vetor[i]=-1;

                }
                else{

                    vetor[i]=1;

                }

                isaac=i;

            }

            vetor[isaac]=0;

            /*for(int j=0;j<temp-1;j++){

                printf("%d ", vetor[j]);

            }
            printf("\n");*/

            temp--;

        }

        if(vetor[0]==1){

            printf("branca\n");

        }
        else{

            printf("preta\n");

        }


    return 0;
    
}