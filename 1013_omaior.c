#include <stdio.h>

int main() {
    int a, b, c, maior;

    // Lendo os três valores
    scanf("%d %d %d", &a, &b, &c);

    // Calculando o maior entre a e b
    maior = (a + b + abs(a - b)) / 2;

    // Calculando o maior entre o resultado anterior e c
    maior = (maior + c + abs(maior - c)) / 2;

    // Imprimindo o maior valor seguido da mensagem
    printf("%d eh o maior\n", maior);

    return 0;
}