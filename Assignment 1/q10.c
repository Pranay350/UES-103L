#include <stdio.h>

int main() {
    float a,b;
    printf("enter a: ");
    scanf("%f",&a);
    printf("enter b: ");
    scanf("%f",&b);

    printf("sum is: %f \n", a + b);
    printf("difference is: %f \n", a - b);
    printf("product is: %f \n", a * b);
    printf("quotient is: %f \n", a / b);
    printf("remainder is: %f \n", (int)a % (int)b);

    return 0;
}