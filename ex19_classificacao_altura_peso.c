#include <stdio.h>

int main() {
    float altura, peso;
    char classificacao;

    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("Digite o peso: ");
    scanf("%f", &peso);

    if (altura < 1.20f) {
        if (peso <= 60.0f)
            classificacao = 'A';
        else if (peso <= 90.0f)
            classificacao = 'D';
        else
            classificacao = 'G';
    } else if (altura <= 1.70f) {
        if (peso <= 60.0f)
            classificacao = 'B';
        else if (peso <= 90.0f)
            classificacao = 'E';
        else
            classificacao = 'H';
    } else {
        if (peso <= 60.0f)
            classificacao = 'C';
        else if (peso <= 90.0f)
            classificacao = 'F';
        else
            classificacao = 'I';
    }

    printf("Classificacao: %c\n", classificacao);

    return 0;
}
