
#include <stdio.h>

int main() {
    float num1, num2;

    printf("\nEnter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("\nSum: %.2f\n", num1 + num2);
    printf("\nDifference: %.2f\n", num1 - num2);
    printf("\nProduct: %.2f\n", num1 * num2);

    if (num2 != 0)
        printf("\nQuotient: %.2f\n", num1 / num2);
    else
        printf("\nDivision by zero is not allowed.\n");

    return 0;
}
