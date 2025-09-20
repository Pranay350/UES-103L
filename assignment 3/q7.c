#include <stdio.h>

int main() {
    int days;
    printf("Enter number of days late: ");
    scanf("%d", &days);

    if (days <= 5 && days > 0) {
        printf("Fine: 50 paisa\n");
    } else if (days > 5 && days <= 10) {
        printf("Fine: 1 rupee\n");
    } else if (days >10 && days<= 30) {
        printf("Fine: 5 rupees\n");
    } else if (days > 30) {
        printf("Membership will be canceled\n");
    } else {
        printf("No fine\n");
    }

    return 0;
}