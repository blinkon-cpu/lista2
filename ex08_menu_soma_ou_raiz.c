#include <stdio.h>
#include <math.h>

int main() {
    int opcao;
    float a, b;

    printf("Menu de opcoes:\n");
    printf("1 - Somar dois numeros\n");
    printf("2 - Raiz quadrada de um numero\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite dois numeros: ");
            scanf("%f %f", &a, &b);
            printf("Soma: %.2f\n", a + b);
            break;
        case 2:
            printf("Digite um numero: ");
            scanf("%f", &a);
            if (a < 0)
                printf("Nao existe raiz quadrada real para numero negativo.\n");
            else
                printf("Raiz quadrada: %.2f\n", sqrt(a));
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}
