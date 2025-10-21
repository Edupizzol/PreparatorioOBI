#include <stdio.h>

int main(){

    int n,c,s;

    scanf("%d %d %d", &n, &c, &s);

    int mapa[n];

    int num=0,k=0,cont=0;

    if(k==s-1){ 
        
        cont++;

    }

    for(int i=0;i<n;i++){

        mapa[i]=i+1;

    }

    for(int i=0;i<c;i++){

        scanf("%d", &num);

        if(num==1 && k<n-1){

            k++;

        }
        else if(num==1 && k==n-1){

            k=0;

        }
        else if(num==-1 && k>0){

            k--;

        }
        else if(num==-1 && k==0){

            k=n-1;

        }

        if(k==s-1){

            cont++;

        }

        //printf("%d\n", cont);

    }

    printf("%d\n", cont);

    return 0;

}