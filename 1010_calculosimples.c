#include <stdio.h>

int main() {
    int codigo_peca1, codigo_peca2, num_peca1, num_peca2;
    double valor_unitario_peca1, valor_unitario_peca2, total;

    // Lendo os dados da primeira peça
    scanf("%d %d %lf", &codigo_peca1, &num_peca1, &valor_unitario_peca1);

    // Lendo os dados da segunda peça
    scanf("%d %d %lf", &codigo_peca2, &num_peca2, &valor_unitario_peca2);

    // Calculando o valor total a ser pago
    total = (num_peca1 * valor_unitario_peca1) + (num_peca2 * valor_unitario_peca2);

    // Imprimindo o valor total a ser pago
    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}
