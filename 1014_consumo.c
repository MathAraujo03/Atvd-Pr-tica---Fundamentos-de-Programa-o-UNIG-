#include <stdio.h>

int main() {
    int distancia_total;
    double combustivel_gasto, consumo_medio;

    // Lendo a distância total percorrida e o total de combustível gasto
    scanf("%d %lf", &distancia_total, &combustivel_gasto);

    // Calculando o consumo médio
    consumo_medio = distancia_total / combustivel_gasto;

    // Imprimindo o consumo médio com 3 casas decimais seguido da mensagem
    printf("%.3lf km/l\n", consumo_medio);

    return 0;
}
