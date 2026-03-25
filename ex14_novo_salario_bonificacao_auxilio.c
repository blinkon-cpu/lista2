#include <stdio.h>

int main() {
    float salario, bonificacao, auxilio, novo_salario;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if (salario <= 500.0f)
        bonificacao = salario * 0.05f;
    else if (salario <= 1200.0f)
        bonificacao = salario * 0.12f;
    else
        bonificacao = 0.0f;

    if (salario <= 600.0f)
        auxilio = 150.0f;
    else
        auxilio = 100.0f;

    novo_salario = salario + bonificacao + auxilio;

    printf("Bonificacao: R$ %.2f\n", bonificacao);
    printf("Auxilio-escola: R$ %.2f\n", auxilio);
    printf("Novo salario: R$ %.2f\n", novo_salario);

    return 0;
}
