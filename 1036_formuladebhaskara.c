#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C;
    double delta, R1, R2;

    // Lendo os valores A, B e C
    scanf("%lf %lf %lf", &A, &B, &C);

    // Calculando o delta
    delta = B * B - 4 * A * C;

    // Verificando se é possível calcular as raízes
    if (A == 0 || delta < 0) {
        printf("Impossivel calcular\n");
    } else {
        // Calculando as raízes
        R1 = (-B + sqrt(delta)) / (2 * A);
        R2 = (-B - sqrt(delta)) / (2 * A);
        
        // Imprimindo as raízes
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }

    return 0;
}
