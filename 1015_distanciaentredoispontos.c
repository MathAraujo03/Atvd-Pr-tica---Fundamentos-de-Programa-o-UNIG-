#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, distancia;

    // Lendo as coordenadas dos dois pontos
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    // Calculando a distância entre os pontos
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Imprimindo a distância com 4 casas decimais
    printf("%.4lf\n", distancia);

    return 0;
}