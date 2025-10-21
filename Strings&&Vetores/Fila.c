#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int fila[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &fila[i]);
    }

    int M;
    scanf("%d", &M);

    static char saiu[100001] = {0};
    for (int i = 0; i < M; i++) {
        int x;
        scanf("%d", &x);
        saiu[x] = 1;
    }

    int primeiro = 1;
    for (int i = 0; i < N; i++) {
        if (!saiu[fila[i]]) {
            if (!primeiro) printf(" ");
            printf("%d", fila[i]);
            primeiro = 0;
        }
    }
    printf("\n");
    return 0;
}
