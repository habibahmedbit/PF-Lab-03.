#include <stdio.h>

int main() {
    double value;

    printf("Enter a decimal number: ");
    scanf("%lf", &value);

    // Default precision (usually 6 decimal places)
    printf("Default Precision: %lf\n", value);

    // %.2lf limits output to 2 decimal places
    printf("2 Decimal Places:  %.2lf\n", value);

    // %.5lf limits output to 5 decimal places
    printf("5 Decimal Places:  %.5lf\n", value);

    return 0;
}