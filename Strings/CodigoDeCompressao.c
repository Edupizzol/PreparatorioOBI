#include <stdio.h>

int main(){

    int n;

    scanf("%d", &n);
    getchar();

    char line[n+1],answer[2*n + 1];

    scanf("%[^\n]", line);

    int i=0,j=0,cont=0,k=0;

    char str[10];

    while(line[i]!='\0'){

        j=i;
        cont=1;

        if(line[j+1]==line[j]){

            while(line[j+1]==line[j]){

                cont++;

                j++;

            }

            sprintf(str, "%d", cont);
            
            for (int m=0;str[m]!='\0';m++){

                answer[k] = str[m];

                k++;
            
            }

            answer[k] = line[j];

            k++;

        }
        else{

            answer[k] = cont + '0';

            k++;

            answer[k] = line[j];

            k++;

        }

        i=j+1;

    }

    answer[k]='\0';

    int p=0;

    while(answer[p]!='\0'){

        if((answer[p]>='0' && answer[p]<='9') && (answer[p+1]>='0' && answer[p+1]<='9')){

            printf("%c", answer[p]);

        }
        else{

            printf("%c ", answer[p]);

        }

        p++;

    }

    printf("\n");

    return 0;

}