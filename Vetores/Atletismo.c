#include <stdio.h>

int main(){

    int N;

    scanf("%d", &N);

    int array[N],ranking[N];

    for(int i=0;i<N;i++){

        ranking[i]=i+1;

    }

    for(int i=0;i<N;i++){

        scanf("%d", &array[i]);

    }

    int temp;

    for(int i=0;i<N;i++){

        temp=array[i];

        ranking[temp-1]=i+1;

    }
    
    for(int i=0;i<N;i++){

        
        printf("%d\n", ranking[i]);

    }

    return 0;

}