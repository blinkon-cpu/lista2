#include <stdio.h>

int main(void) {
    int codigo_estado, codigo_carga;
    float peso_ton, peso_kg, preco_quilo, preco_carga, percentual_imposto, imposto, total;

    printf("Digite o codigo do estado de origem (1 a 5): ");
    scanf("%d", &codigo_estado);
    printf("Digite o peso da carga em toneladas: ");
    scanf("%f", &peso_ton);
    printf("Digite o codigo da carga (10 a 40): ");
    scanf("%d", &codigo_carga);

    peso_kg = peso_ton * 1000.0f;

    if (codigo_carga >= 10 && codigo_carga <= 20)
        preco_quilo = 100.0f;
    else if (codigo_carga <= 30)
        preco_quilo = 250.0f;
    else
        preco_quilo = 340.0f;

    preco_carga = peso_kg * preco_quilo;

    switch (codigo_estado) {
        case 1: percentual_imposto = 0.35f; break;
        case 2: percentual_imposto = 0.25f; break;
        case 3: percentual_imposto = 0.15f; break;
        case 4: percentual_imposto = 0.05f; break;
        case 5: percentual_imposto = 0.0f; break;
        default:
            printf("Codigo de estado invalido.\n");
            return 0;
    }

    imposto = preco_carga * percentual_imposto;
    total = preco_carga + imposto;

    printf("Peso da carga em quilos: %.2f kg\n", peso_kg);
    printf("Preco da carga: R$ %.2f\n", preco_carga);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Valor total transportado: R$ %.2f\n", total);

    return 0;
}
