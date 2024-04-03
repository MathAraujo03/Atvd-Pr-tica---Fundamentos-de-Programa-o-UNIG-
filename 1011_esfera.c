#include <stdio.h>
#include <math.h>

int main() {
    double raio, volume;
    const double pi = 3.14159;

    // Lendo o raio da esfera
    scanf("%lf", &raio);

    // Calculando o volume da esfera
    volume = (4.0 / 3.0) * pi * pow(raio, 3);

    // Imprimindo o volume com 3 casas decimais
    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
