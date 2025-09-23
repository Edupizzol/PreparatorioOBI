#include <stdio.h>

int main(void) {
    long long inicio, r, desire;
    scanf("%lld %lld %lld", &inicio, &r, &desire);

    long long total = inicio;   
    long long novos = inicio;   
    int dias = 0;

    while (total < desire) {
        novos *= r;              
        total += novos;          
        dias++;
    }

    printf("%d\n", dias);
    return 0;
}