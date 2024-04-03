#include <stdio.h>

int main() {
    double pi = 3.14159;
    double raio, area;

    // Leitura do raio
    scanf("%lf", &raio);

    // Cálculo da área
    area = pi * raio * raio;

    // Exibição do resultado com 4 casas decimais
    printf("A=%.4lf\n", area);

    return 0;
}