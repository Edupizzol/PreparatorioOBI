#include <stdio.h>

int main(void) {

    int J, P, V, E, D;
    
    scanf("%d %d %d %d %d", &J, &P, &V, &E, &D);

    int changed = 1;
    while (changed) {
        changed = 0;

        if (P == -1 && V != -1 && E != -1) {
            P = 3 * V + E; changed = 1;
        }

        if (J == -1 && V != -1 && E != -1 && D != -1) {
            J = V + E + D; changed = 1;
        }

        if (V == -1) {
            if (P != -1 && E != -1 && (P - E) % 3 == 0) {
                V = (P - E) / 3; changed = 1;
            } else if (P != -1 && J != -1 && D != -1 && (P + D - J) % 2 == 0) {
                V = (P + D - J) / 2; changed = 1;
            } else if (J != -1 && E != -1 && D != -1) {
                V = J - E - D; changed = 1;
            }
        }

        if (E == -1) {
            if (P != -1 && V != -1) {
                E = P - 3 * V; changed = 1;
            } else if (J != -1 && V != -1 && D != -1) {
                E = J - V - D; changed = 1;
            }
        }

        if (D == -1) {
            if (J != -1 && V != -1 && E != -1) {
                D = J - V - E; changed = 1;
            }
        }
    }

    printf("%d %d %d %d %d\n", J, P, V, E, D);
    return 0;
}
