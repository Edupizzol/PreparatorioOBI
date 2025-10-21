#include <stdio.h>

int main(void) {
    char tab[7][8];
    for (int i = 0; i < 7; i++) {
        scanf("%7s", tab[i]);
    }

    int movimentos = 0;
    int dx[4] = {-1, 1, 0, 0}; 
    int dy[4] = {0, 0, -1, 1};

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (tab[i][j] == 'o') {
                for (int k = 0; k < 4; k++) {
                    int nx1 = i + dx[k];
                    int ny1 = j + dy[k];
                    int nx2 = i + 2*dx[k];
                    int ny2 = j + 2*dy[k];
                    if (nx2 >= 0 && nx2 < 7 && ny2 >= 0 && ny2 < 7) {
                        if (tab[nx1][ny1] == 'o' && tab[nx2][ny2] == '.') {
                            movimentos++;
                        }
                    }
                }
            }
        }
    }

    printf("%d\n", movimentos);
    return 0;
}
