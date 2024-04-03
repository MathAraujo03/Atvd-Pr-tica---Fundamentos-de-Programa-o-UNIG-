#include <stdio.h>

int main() {
    int tempo, velocidade_media;
    double litros, distancia, consumo;

    // Lendo o tempo gasto na viagem (em horas) e a velocidade média (em km/h)
    scanf("%d %d", &tempo, &velocidade_media);

    // Calculando a distância percorrida
    distancia = tempo * velocidade_media;

    // Calculando o consumo de combustível
    consumo = 12.0;

    // Calculando a quantidade de litros necessária
    litros = distancia / consumo;

    // Imprimindo a quantidade de litros necessária com 3 casas decimais após o ponto
    printf("%.3lf\n", litros);

    return 0;
}