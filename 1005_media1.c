#include <stdio.h>

int main() {
    double A, B;
    scanf("%lf %lf", &A, &B);

    // Calculate the weighted average
    double weightedSum = (A * 3.5 + B * 7.5);
    double totalWeight = 3.5 + 7.5;
    double media = weightedSum / totalWeight;

    printf("MEDIA = %.5lf\n", media);
    return 0;
}
