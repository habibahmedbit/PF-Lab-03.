#include <stdio.h>

int main() {
    int id;
    float salary;
    char section;

    printf("Enter ID: ");
    scanf("%d", &id);

    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("Enter Section (A/B): ");
    scanf(" %c", &section);

    printf("\n | Your Details | \n");
    printf("ID: %d\n", id);
    printf("Salary: %.2f\n", salary);
    printf("Section: %c\n", section);

    return 0;
}