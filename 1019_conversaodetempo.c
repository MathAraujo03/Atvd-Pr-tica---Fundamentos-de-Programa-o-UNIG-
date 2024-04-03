#include <stdio.h>

int main() {
    int duracao, horas, minutos, segundos;

    // Lendo o tempo de duração em segundos
    scanf("%d", &duracao);

    // Calculando horas, minutos e segundos
    horas = duracao / 3600;
    duracao %= 3600;
    minutos = duracao / 60;
    duracao %= 60;
    segundos = duracao;

    // Imprimindo o tempo no formato horas:minutos:segundos
    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}
