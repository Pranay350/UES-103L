#include<stdio.h>
#include<math.h>

int main() {
    float compound_interest,principal,rate,time,amount;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate: ");
    scanf("%f", &rate);

    printf("Enter time(in years): ");
    scanf("%f", &time);

    amount = principal * pow(1 + rate/100,time);
    compound_interest = amount - principal;

    printf("Compound Interest = %f\n", compound_interest);
    
    return 0;
}