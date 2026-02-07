#include <stdio.h>

int main() {
    double value;

    printf("Enter a decimal number: ");
    scanf("%lf", &value);

    printf("Default Precision: %lf\n", value);

    printf("2 Decimal Places:  %.2lf\n", value);

    printf("5 Decimal Places:  %.5lf\n", value);

    return 0;
}
