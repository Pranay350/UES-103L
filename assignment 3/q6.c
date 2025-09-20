#include <stdio.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x % 8 == 0 && x % 5 == 0) {
        printf("%d is divisible by both\n", x);
    } else if (x % 8 == 0) {
        printf("%d is divisible by 8\n", x);
    } else if (x % 5 == 0) {
        printf("%d is only divisible by 5\n", x);
    } else {
        printf("%d is neither divisible by 5 or 8\n", x);
    }
    return 0;
}