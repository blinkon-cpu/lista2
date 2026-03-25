#include <stdio.h>

int main() {
    float lab, semestral, exame, media;
    char conceito;

    printf("Digite a nota do trabalho de laboratorio: ");
    scanf("%f", &lab);
    printf("Digite a nota da avaliacao semestral: ");
    scanf("%f", &semestral);
    printf("Digite a nota do exame final: ");
    scanf("%f", &exame);

    media = (lab * 2.0f + semestral * 3.0f + exame * 5.0f) / 10.0f;

    if (media >= 8.0f)
        conceito = 'A';
    else if (media >= 7.0f)
        conceito = 'B';
    else if (media >= 6.0f)
        conceito = 'C';
    else if (media >= 5.0f)
        conceito = 'D';
    else
        conceito = 'E';

    printf("Media ponderada: %.2f\n", media);
    printf("Conceito: %c\n", conceito);

    return 0;
}
