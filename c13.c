#include <stdio.h>

int main()
{
    int a, b, multiplication, subtraction, division;

    printf("Enter a, b values: ");
    scanf("%d %d", &a, &b);

    multiplication = a * b;
    subtraction = a - b;
    division = a / b;

    printf("Multiplication = %d\n", multiplication);
    printf("Subtraction = %d\n", subtraction);
    printf("Division = %d\n", division);

    return 0;
}