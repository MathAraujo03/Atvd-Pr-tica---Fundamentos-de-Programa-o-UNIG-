#include <stdio.h>

int main() {
    int valor, resto;
    int notas[7] = {100, 50, 20, 10, 5, 2, 1};

    // Lendo o valor
    scanf("%d", &valor);

    // Imprimindo o valor lido
    printf("%d\n", valor);

    // Calculando a quantidade mínima de notas de cada tipo necessárias
    for (int i = 0; i < 7; i++) {
        printf("%d nota(s) de R$ %d,00\n", valor / notas[i], notas[i]);
        resto = valor % notas[i];
        valor = resto;
    }

    return 0;
}