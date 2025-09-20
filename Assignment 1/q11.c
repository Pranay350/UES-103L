#include <stdio.h>
#include<math.h>

int main() {
    float x,n;
    printf("enter the number: ");
    scanf("%f",&x);
    printf("enter root: ");
    scanf("%f",&n);
    printf("nth root of x is: %f\n", pow(x,1/n));

    return 0;
}