#include <stdio.h>

int main() {

    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    if ((A + B) < C || (A < B && B < C)) {

        printf("1\n");

    } else if (A == B && B == C) {
        
        printf("3\n");

    } else {

        printf("2\n");

    }

    return 0;
}
