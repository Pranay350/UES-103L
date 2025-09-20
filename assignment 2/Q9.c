#include<stdio.h>

int main() {
    int a, b;
    float c;
    printf("enter a and b: ");
    scanf("%d%d", &a, &b);
    c = (float)a / b;
    printf("division is: %f\n", c);

    return 0;
}