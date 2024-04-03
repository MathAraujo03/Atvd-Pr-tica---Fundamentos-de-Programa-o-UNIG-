#include <stdio.h>

int main() {
    double A, B, C, media;

    // Leitura das notas
    scanf("%lf %lf %lf", &A, &B, &C);

    // Cálculo da média ponderada
    media = (A * 2 + B * 3 + C * 5) / 10;

    // Exibição do resultado com 1 casa decimal
    printf("MEDIA = %.1lf\n", media);

    return 0;
}