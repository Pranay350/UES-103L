#include <stdio.h>

int main() {
    int x;
    printf("enter a number:  ");
    scanf("%d",&x);
    if (x % 2 == 0)
    {
        printf("number is even \n");
    } 
    else {
        printf("number is odd \n");
    }

    //using ternary operators
    //x % 2 == 0 ? printf("number is even \n") : printf("number is odd \n");
    

    return 0;
}
    