#include <stdio.h>

int main() {
    int A, B, C, D, DIFERENCA;

    // Lendo os quatro valores inteiros
    scanf("%d %d %d %d", &A, &B, &C, &D);

    // Calculando a diferença do produto de A e B pelo produto de C e D
    DIFERENCA = (A * B) - (C * D);

    // Imprimindo a diferença
    printf("DIFERENCA = %d\n", DIFERENCA);

    return 0;
}