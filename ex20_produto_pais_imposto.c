#include <stdio.h>

int main(void) {
    int codigo_produto, codigo_pais;
    float peso_kg, peso_g, preco_grama, preco_total, percentual_imposto, imposto, valor_total;

    printf("Digite o codigo do produto (1 a 10): ");
    scanf("%d", &codigo_produto);
    printf("Digite o peso do produto em quilos: ");
    scanf("%f", &peso_kg);
    printf("Digite o codigo do pais de origem (1 a 3): ");
    scanf("%d", &codigo_pais);

    peso_g = peso_kg * 1000.0f;

    if (codigo_produto >= 1 && codigo_produto <= 4)
        preco_grama = 10.0f;
    else if (codigo_produto <= 7)
        preco_grama = 25.0f;
    else
        preco_grama = 35.0f;

    preco_total = peso_g * preco_grama;

    if (codigo_pais == 1)
        percentual_imposto = 0.0f;
    else if (codigo_pais == 2)
        percentual_imposto = 0.15f;
    else
        percentual_imposto = 0.25f;

    imposto = preco_total * percentual_imposto;
    valor_total = preco_total + imposto;

    printf("Peso em gramas: %.2f g\n", peso_g);
    printf("Preco total: R$ %.2f\n", preco_total);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Valor total: R$ %.2f\n", valor_total);

    return 0;
}
