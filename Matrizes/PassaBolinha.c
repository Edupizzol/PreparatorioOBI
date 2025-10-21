#include <stdio.h>

#define MAX 100

int N;
int camiseta[MAX][MAX];
int visitado[MAX][MAX];

int dx[4] = {-1, 0, 1, 0}; 
int dy[4] = {0, 1, 0, -1};

void dfs(int x, int y) {
    visitado[x][y] = 1;
    for (int k = 0; k < 4; k++) {
        int nx = x + dx[k];
        int ny = y + dy[k];
        if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
            if (!visitado[nx][ny] && camiseta[nx][ny] >= camiseta[x][y]) {
                dfs(nx, ny);
            }
        }
    }
}

int main(void) {
    int I, J;
    scanf("%d", &N);
    scanf("%d %d", &I, &J);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &camiseta[i][j]);
        }
    }

    dfs(I - 1, J - 1);

    int conta = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (visitado[i][j]) conta++;

    printf("%d\n", conta);
    return 0;
}
