#include <stdio.h>

int main() {
    float principal,rate,time;
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    
    printf("Simple Interest = %f\n", (principal * rate * time) / 100);

    return 0;
}