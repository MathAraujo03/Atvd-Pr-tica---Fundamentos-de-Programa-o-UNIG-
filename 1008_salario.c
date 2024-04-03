#include <stdio.h>

int main() {
    int numero, horas_trabalhadas;
    double valor_por_hora, salario;

    // Lendo o número do funcionário, as horas trabalhadas e o valor por hora
    scanf("%d %d %lf", &numero, &horas_trabalhadas, &valor_por_hora);

    // Calculando o salário
    salario = horas_trabalhadas * valor_por_hora;

    // Imprimindo o número do funcionário e o salário com duas casas decimais
    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2lf\n", salario);

    return 0;
}
