#include <stdio.h>

int main() {

    int n;

    scanf("%d", &n);

    int array[n];
    int distancia[n];

    for (int i=0;i<n;i++) {

        scanf("%d", &array[i]);

    }

    
    int uau = -100000; 
    for (int i=0;i<n;i++){

        if(array[i]==0){

            uau = i;
            distancia[i] = 0;

        }
        else{

            distancia[i] = i-uau;

        }
    }

    
    uau = 100000; 

    for(int i=n-1;i>=0;i--){

        if(array[i]==0){

            uau = i;

        } 
        else{
            int direita = uau-i;

            if(direita<distancia[i]){

                distancia[i] = direita;

            }
        }
    }

   
    for (int i=0;i<n;i++)
    {

        if(distancia[i]>9)distancia[i] = 9;
        
        printf("%d ", distancia[i]);

    }

    printf("\n");

    return 0;
}
