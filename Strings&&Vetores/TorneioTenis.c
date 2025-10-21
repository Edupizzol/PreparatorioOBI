#include <stdio.h>

int main(){

    char Game,cont=0;

    for(int i=0;i<6;i++){

        scanf("%c", &Game);
        getchar();

        if(Game=='V'){
            cont++;
        }


    }

    if(cont==1 || cont ==2){
        printf("3\n");
    }
    else if(cont==3 || cont ==4){
        printf("2\n");
    }
    else if(cont==5 || cont ==6){
        printf("1\n");
    }
    else{
        printf("-1\n");
    }


    return 0;

}