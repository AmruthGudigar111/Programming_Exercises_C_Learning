
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("\nEnter an integer: ");
    scanf("%d", &n);

    for(i = 1; i <= n; ++i) {
        factorial *= i;
    }

    printf("\nFactorial of %d = %llu\n", n, factorial);
    return 0;
}
