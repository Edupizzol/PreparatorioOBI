#include <stdio.h>

void swap(int* a, int* b){

    int temp = *a;
    *a = *b;
    *b = temp;

}

int position(char* start){

    if(*start =='A'){

        return 0;

    }
    else if(*start == 'B'){

        return 1;

    }
    else if(*start == 'C'){

        return 2;

    }

}

int main(){

    int n;

    scanf("%d", &n);

    getchar();

    char start;

    scanf("%c", &start);

    int pos = position(&start), play;

    int array[3] = {0,0,0};

    array[pos] = 1;

    for(int i=0;i<n;i++){

        scanf("%d", &play);

        if(play==1){

            swap(&array[0],&array[1]);

        }
        else if(play==2){

            swap(&array[1],&array[2]);

        }
        else{

            swap(&array[0],&array[2]);

        }

    }

    int local;

    for(int i=0;i<3;i++){

        if(array[i]==1){

            local = i;

        }

    }

    if(local==0){

        printf("A\n");

    }
    else if(local==1){

        printf("B\n");

    }
    else{

        printf("C\n");

    }

    return 0;

}