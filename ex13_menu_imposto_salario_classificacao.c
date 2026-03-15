#include <stdio.h>

int main(void) {
    int opcao;
    float salario, imposto, novo_salario;

    printf("Menu de opcoes:\n");
    printf("1 - Imposto\n");
    printf("2 - Novo Salario\n");
    printf("3 - Classificacao\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    printf("Digite o salario: ");
    scanf("%f", &salario);

    switch (opcao) {
        case 1:
            if (salario < 500.0f)
                imposto = salario * 0.05f;
            else if (salario <= 850.0f)
                imposto = salario * 0.10f;
            else
                imposto = salario * 0.15f;
            printf("Valor do imposto: R$ %.2f\n", imposto);
            break;
        case 2:
            if (salario > 1500.0f)
                novo_salario = salario + 25.0f;
            else if (salario >= 750.0f)
                novo_salario = salario + 50.0f;
            else if (salario >= 450.0f)
                novo_salario = salario + 75.0f;
            else
                novo_salario = salario + 100.0f;
            printf("Novo salario: R$ %.2f\n", novo_salario);
            break;
        case 3:
            if (salario <= 700.0f)
                printf("Classificacao: Mal remunerado\n");
            else
                printf("Classificacao: Bem remunerado\n");
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}
