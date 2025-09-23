#include <stdio.h>

void swap(int* a, int* b){

    int temp = *a;
    *a = *b;
    *b = temp;

}

int partition(int array[], int low, int high){

    int pivot = array[high];

    int j = low-1;

    for(int i=low;i<high;i++){

        if(array[i]<pivot){
            j++;
            swap(&array[i],&array[j]);
        }

    }

    swap(&array[j+1],&array[high]);

    return j+1;

}

int quicksort(int array[],int low, int high, int order){

    if (low > high) {     
    return -1;
    }

    int j = partition(array,low,high);

    if(j == order-1){
        return array[j+1];
    }
    else if(j<order-1){
        return quicksort(array,j+1,high,order);
    }
    else if(j>order-1){
        return quicksort(array,low,j-1,order);
    }

}

int main(){

    int N,K;

    scanf("%d %d", &N, &K);

    int array[N];

    for(int i=0;i<N;i++){
        scanf("%d", &array[i]);
    }

    printf("%d\n", quicksort(array,0,N-1,(N-K)));

}