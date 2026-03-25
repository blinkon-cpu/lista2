#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    printf("Digite os coeficientes a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0.0f) {
        printf("O valor de a deve ser diferente de zero.\n");
        return 0;
    }

    delta = b * b - 4.0f * a * c;

    if (delta < 0.0f) {
        printf("Nao existe raiz real.\n");
    } else if (delta == 0.0f) {
        x1 = -b / (2.0f * a);
        printf("Existe uma raiz real: %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2.0f * a);
        x2 = (-b - sqrt(delta)) / (2.0f * a);
        printf("Existem duas raizes reais: %.2f e %.2f\n", x1, x2);
    }

    return 0;
}
