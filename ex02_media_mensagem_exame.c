#include <stdio.h>

int main() {
    float n1, n2, n3, media, nota_exame;

    printf("Digite as tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3.0f;

    printf("Media aritmetica: %.2f\n", media);

    if (media >= 7.0f) {
        printf("Mensagem: Aprovado\n");
    } else if (media >= 3.0f) {
        printf("Mensagem: Exame\n");
        nota_exame = 12.0f - media;
        if (nota_exame < 0.0f)
            nota_exame = 0.0f;
        printf("Nota necessaria no exame para aprovacao: %.2f\n", nota_exame);
    } else {
        printf("Mensagem: Reprovado\n");
    }

    return 0;
}
