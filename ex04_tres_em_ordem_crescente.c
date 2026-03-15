#include <stdio.h>

int main(void) {
    float a, b, c, aux;

    printf("Digite tres numeros: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a > b) { aux = a; a = b; b = aux; }
    if (a > c) { aux = a; a = c; c = aux; }
    if (b > c) { aux = b; b = c; c = aux; }

    printf("Ordem crescente: %.2f %.2f %.2f\n", a, b, c);

    return 0;
}
