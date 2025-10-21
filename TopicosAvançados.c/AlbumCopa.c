#include <stdio.h>

int main(){

    int n, m;

    scanf("%d %d", &n, &m);

    int array[m],num,cont=0,ans=0;

    for(int i=0;i<m;i++){

        scanf("%d", &num);

        array[i]=num;

        ans++;

        for(int j=0;j<cont;j++){

            if(array[j]==num){

                ans--;

                break;

            }

        }

        cont++;

    }

    printf("%d\n", (n-ans));

    return 0;

}