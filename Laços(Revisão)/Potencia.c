#include <stdio.h>
#include <math.h>

int main(){

    int n;
    int temp=0,ans=0;

    scanf("%d", &n);

    int array[n];

    for(int i=0;i<n;i++){

        scanf("%d", &array[i]);

        temp = array[i]%10;
        
        array[i] = pow(array[i]/10,temp);

    }

    for(int i=0;i<n;i++){

        ans+=array[i];

    }

    printf("%d\n", ans);

    return 0;

}