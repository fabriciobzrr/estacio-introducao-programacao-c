#include <stdio.h>

int main() {
    double n1, n2, soma;

    printf("N1: ");
    scanf("%lf", &n1);

    printf("N2: ");
    scanf("%lf", &n2);

    soma = n1 + n2;
    printf("Total: %.2f", soma);

    return 0;
}