#include <stdio.h>

int main(void) {
    float preco_atual, venda_mensal, novo_preco;

    printf("Digite o preco atual do produto: ");
    scanf("%f", &preco_atual);
    printf("Digite a venda mensal media do produto: ");
    scanf("%f", &venda_mensal);

    if (venda_mensal < 500.0f || preco_atual < 30.0f)
        novo_preco = preco_atual * 1.10f;
    else if ((venda_mensal >= 500.0f && venda_mensal < 1200.0f) || (preco_atual >= 30.0f && preco_atual < 80.0f))
        novo_preco = preco_atual * 1.15f;
    else if (venda_mensal >= 1200.0f || preco_atual >= 80.0f)
        novo_preco = preco_atual * 0.80f;
    else
        novo_preco = preco_atual;

    printf("Novo preco: R$ %.2f\n", novo_preco);

    return 0;
}
