#include <stdio.h>

int main(void) {
    float salario_minimo, valor_hora, salario_mes, valor_dependentes;
    float valor_hora_extra, valor_extras, salario_bruto, irrf;
    float salario_liquido, gratificacao, salario_receber;
    int horas_trabalhadas, dependentes, horas_extras;

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario_minimo);
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%d", &horas_trabalhadas);
    printf("Digite o numero de dependentes: ");
    scanf("%d", &dependentes);
    printf("Digite a quantidade de horas extras: ");
    scanf("%d", &horas_extras);

    valor_hora = salario_minimo / 5.0f;
    salario_mes = horas_trabalhadas * valor_hora;
    valor_dependentes = dependentes * 32.0f;
    valor_hora_extra = valor_hora * 1.5f;
    valor_extras = horas_extras * valor_hora_extra;
    salario_bruto = salario_mes + valor_dependentes + valor_extras;

    if (salario_bruto < 200.0f)
        irrf = 0.0f;
    else if (salario_bruto <= 500.0f)
        irrf = salario_bruto * 0.10f;
    else
        irrf = salario_bruto * 0.20f;

    salario_liquido = salario_bruto - irrf;

    if (salario_liquido <= 350.0f)
        gratificacao = 100.0f;
    else
        gratificacao = 50.0f;

    salario_receber = salario_liquido + gratificacao;

    printf("Valor da hora trabalhada: R$ %.2f\n", valor_hora);
    printf("Salario do mes: R$ %.2f\n", salario_mes);
    printf("Valor dos dependentes: R$ %.2f\n", valor_dependentes);
    printf("Valor das horas extras: R$ %.2f\n", valor_extras);
    printf("Salario bruto: R$ %.2f\n", salario_bruto);
    printf("IRRF: R$ %.2f\n", irrf);
    printf("Salario liquido: R$ %.2f\n", salario_liquido);
    printf("Gratificacao: R$ %.2f\n", gratificacao);
    printf("Salario a receber: R$ %.2f\n", salario_receber);

    return 0;
}
