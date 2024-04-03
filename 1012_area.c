#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C, area_triangulo, area_circulo, area_trapezio, area_quadrado, area_retangulo;
    const double pi = 3.14159;

    // Lendo os valores A, B e C
    scanf("%lf %lf %lf", &A, &B, &C);

    // Calculando a área do triângulo retângulo
    area_triangulo = (A * C) / 2.0;

    // Calculando a área do círculo
    area_circulo = pi * pow(C, 2);

    // Calculando a área do trapézio
    area_trapezio = ((A + B) * C) / 2.0;

    // Calculando a área do quadrado
    area_quadrado = pow(B, 2);

    // Calculando a área do retângulo
    area_retangulo = A * B;

    // Imprimindo as áreas com 3 dígitos após o ponto decimal
    printf("TRIANGULO: %.3lf\n", area_triangulo);
    printf("CIRCULO: %.3lf\n", area_circulo);
    printf("TRAPEZIO: %.3lf\n", area_trapezio);
    printf("QUADRADO: %.3lf\n", area_quadrado);
    printf("RETANGULO: %.3lf\n", area_retangulo);

    return 0;
}