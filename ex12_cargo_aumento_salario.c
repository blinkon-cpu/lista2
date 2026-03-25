#include <stdio.h>

int main() {
    int codigo;
    float salario, percentual = 0.0f, aumento, novo_salario;
    char cargo[20];

    printf("Digite o codigo do cargo: ");
    scanf("%d", &codigo);
    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    switch (codigo) {
        case 1:
            percentual = 50.0f;
            sprintf(cargo, "Escriturario");
            break;
        case 2:
            percentual = 35.0f;
            sprintf(cargo, "Secretario");
            break;
        case 3:
            percentual = 20.0f;
            sprintf(cargo, "Caixa");
            break;
        case 4:
            percentual = 10.0f;
            sprintf(cargo, "Gerente");
            break;
        case 5:
            percentual = 0.0f;
            sprintf(cargo, "Diretor");
            break;
        default:
            printf("Codigo invalido.\n");
            return 0;
    }

    aumento = salario * (percentual / 100.0f);
    novo_salario = salario + aumento;

    printf("Cargo: %s\n", cargo);
    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novo_salario);

    return 0;
}
