#include <stdio.h>

int main() {
    int d1, m1, a1, d2, m2, a2;

    printf("Digite a primeira data (dd mm aaaa): ");
    scanf("%d %d %d", &d1, &m1, &a1);
    printf("Digite a segunda data (dd mm aaaa): ");
    scanf("%d %d %d", &d2, &m2, &a2);

    if (a1 > a2 || (a1 == a2 && m1 > m2) || (a1 == a2 && m1 == m2 && d1 > d2)) {
        printf("Data cronologicamente maior: %02d/%02d/%04d\n", d1, m1, a1);
    } else if (a2 > a1 || (a2 == a1 && m2 > m1) || (a2 == a1 && m2 == m1 && d2 > d1)) {
        printf("Data cronologicamente maior: %02d/%02d/%04d\n", d2, m2, a2);
    } else {
        printf("As duas datas sao iguais: %02d/%02d/%04d\n", d1, m1, a1);
    }

    return 0;
}
