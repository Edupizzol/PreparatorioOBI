#include <stdio.h>

typedef struct {
    int tempo;
    int atleta;
} Nadador;

int main(){
    Nadador v[3];

    for (int i = 0; i < 3; i++) {
        scanf("%d", &v[i].tempo);
        v[i].atleta = i + 1; 
    }

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (v[j].tempo < v[i].tempo) {
                Nadador tmp = v[i];
                v[i] = v[j];
                v[j] = tmp;
            }
        }
    }

    printf("%d\n%d\n%d\n", v[0].atleta, v[1].atleta, v[2].atleta);

    return 0;
}
