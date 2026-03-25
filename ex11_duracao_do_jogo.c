#include <stdio.h>

int main() {
    int hi, mi, hf, mf;
    int inicio, fim, duracao, horas, minutos;

    printf("Digite a hora e o minuto de inicio: ");
    scanf("%d %d", &hi, &mi);
    printf("Digite a hora e o minuto de fim: ");
    scanf("%d %d", &hf, &mf);

    inicio = hi * 60 + mi;
    fim = hf * 60 + mf;

    if (fim < inicio)
        fim += 24 * 60;

    duracao = fim - inicio;
    horas = duracao / 60;
    minutos = duracao % 60;

    printf("Duracao do jogo: %d hora(s) e %d minuto(s)\n", horas, minutos);

    return 0;
}
