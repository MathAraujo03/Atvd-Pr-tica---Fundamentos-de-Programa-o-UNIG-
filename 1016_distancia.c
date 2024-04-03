#include <stdio.h>

int main() {
    int distancia, tempo;

    // Lendo a distância em quilômetros
    scanf("%d", &distancia);

    // Calculando o tempo necessário em minutos
    tempo = distancia * 2;

    // Imprimindo o tempo necessário seguido da mensagem "minutos"
    printf("%d minutos\n", tempo);

    return 0;
}
