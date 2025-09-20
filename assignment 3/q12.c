#include<stdio.h>

int main() {
    int n,count = 0;

    printf("Enter 20 integers:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            count++;
        }
    }
    printf("Total even numbers: %d\n", count);

    return 0;
}