
#include <stdio.h>

int main() {
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    if (num > 0)
        printf("\nPositive\n");
    else if (num < 0)
        printf("\nNegative\n");
    else
        printf("\nZero\n");

    return 0;
}
