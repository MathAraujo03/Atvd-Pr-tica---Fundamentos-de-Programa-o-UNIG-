#include <stdio.h>

int main() {
    double valor;
    int reais, centavos;
    int notas100, notas50, notas20, notas10, notas5, notas2;
    int moedas1, moedas50, moedas25, moedas10, moedas5, moedas1centavo;

    // Lê o valor de ponto flutuante
    scanf("%lf", &valor);

    // Separa a parte inteira (reais) e a parte decimal (centavos)
    reais = (int)valor;
    centavos = (int)((valor - reais) * 100);

    // Calcula as notas e moedas
    notas100 = reais / 100;
    reais %= 100;
    notas50 = reais / 50;
    reais %= 50;
    notas20 = reais / 20;
    reais %= 20;
    notas10 = reais / 10;
    reais %= 10;
    notas5 = reais / 5;
    reais %= 5;
    notas2 = reais / 2;
    reais %= 2;

    moedas1 = reais;
    moedas50 = centavos / 50;
    centavos %= 50;
    moedas25 = centavos / 25;
    centavos %= 25;
    moedas10 = centavos / 10;
    centavos %= 10;
    moedas5 = centavos / 5;
    centavos %= 5;
    moedas1centavo = centavos;

    // Exibe a quantidade de notas e moedas
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notas100);
    printf("%d nota(s) de R$ 50.00\n", notas50);
    printf("%d nota(s) de R$ 20.00\n", notas20);
    printf("%d nota(s) de R$ 10.00\n", notas10);
    printf("%d nota(s) de R$ 5.00\n", notas5);
    printf("%d nota(s) de R$ 2.00\n", notas2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moedas1);
    printf("%d moeda(s) de R$ 0.50\n", moedas50);
    printf("%d moeda(s) de R$ 0.25\n", moedas25);
    printf("%d moeda(s) de R$ 0.10\n", moedas10);
    printf("%d moeda(s) de R$ 0.05\n", moedas5);
    printf("%d moeda(s) de R$ 0.01\n", moedas1centavo);

    return 0;
}