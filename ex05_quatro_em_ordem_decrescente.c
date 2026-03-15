#include <stdio.h>

int main(void) {
    float n1, n2, n3, n4, aux;

    printf("Digite tres numeros em ordem crescente: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Digite o quarto numero: ");
    scanf("%f", &n4);

    if (n1 < n2 && n2 < n3) {
        if (n1 < n2) { aux = n1; n1 = n2; n2 = aux; }
        if (n1 < n3) { aux = n1; n1 = n3; n3 = aux; }
        if (n1 < n4) { aux = n1; n1 = n4; n4 = aux; }
        if (n2 < n3) { aux = n2; n2 = n3; n3 = aux; }
        if (n2 < n4) { aux = n2; n2 = n4; n4 = aux; }
        if (n3 < n4) { aux = n3; n3 = n4; n4 = aux; }

        printf("Ordem decrescente: %.2f %.2f %.2f %.2f\n", n1, n2, n3, n4);
    } else {
        printf("Os tres primeiros numeros nao foram digitados em ordem crescente.\n");
    }

    return 0;
}
