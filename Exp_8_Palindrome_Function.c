
#include <stdio.h>

int is_palindrome(int num) {
    int reversed = 0, original = num;

    while(num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(is_palindrome(n))
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
