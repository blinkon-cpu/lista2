#include <stdio.h>

int main(void) {
    int i;
    float a, b, c, aux;

    printf("Digite o valor de I (1, 2 ou 3): ");
    scanf("%d", &i);
    printf("Digite A, B e C: ");
    scanf("%f %f %f", &a, &b, &c);

    if (i == 1) {
        if (a > b) { aux = a; a = b; b = aux; }
        if (a > c) { aux = a; a = c; c = aux; }
        if (b > c) { aux = b; b = c; c = aux; }
        printf("Ordem crescente: %.2f %.2f %.2f\n", a, b, c);
    } else if (i == 2) {
        if (a < b) { aux = a; a = b; b = aux; }
        if (a < c) { aux = a; a = c; c = aux; }
        if (b < c) { aux = b; b = c; c = aux; }
        printf("Ordem decrescente: %.2f %.2f %.2f\n", a, b, c);
    } else if (i == 3) {
        if (a > b) { aux = a; a = b; b = aux; }
        if (a > c) { aux = a; a = c; c = aux; }
        if (b > c) { aux = b; b = c; c = aux; }
        printf("Maior no meio: %.2f %.2f %.2f\n", a, c, b);
    } else {
        printf("Valor de I invalido.\n");
    }

    return 0;
}
