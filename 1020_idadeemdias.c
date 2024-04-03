#include <stdio.h>

int main() {
    int idade_dias, anos, meses, dias;

    // Lendo a idade em dias
    scanf("%d", &idade_dias);

    // Calculando anos, meses e dias
    anos = idade_dias / 365;
    idade_dias %= 365;
    meses = idade_dias / 30;
    idade_dias %= 30;
    dias = idade_dias;

    // Imprimindo a idade no formato anos, meses e dias
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}
