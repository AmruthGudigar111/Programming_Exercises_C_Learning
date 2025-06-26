
#include <stdio.h>

int main() {
    int n, i, flag = 0;
    printf("\nEnter a positive integer: ");
    scanf("%d", &n);

    for(i = 2; i <= n/2; ++i) {
        if(n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (n <= 1)
        printf("\nNot a prime number\n");
    else if (flag == 0)
        printf("\nPrime number\n");
    else
        printf("\nNot a prime number\n");

    return 0;
}
