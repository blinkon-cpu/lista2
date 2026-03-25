#include <stdio.h>

int main() {
    float a, b;

    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);

    if (a > b)
        printf("Maior numero: %.2f\n", a);
    else if (b > a)
        printf("Maior numero: %.2f\n", b);
    else
        printf("Os numeros sao iguais: %.2f\n", a);

    return 0;
}
