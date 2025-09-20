#include <stdio.h>

int main() {
    char ch;
    printf("enter the number: ");
    scanf("%c", &ch); 
    printf("left shift %d\n", ch << 1);   // LEFT SHIFT
    printf("right shift %d\n", ch >> 1);  // RIGHT SHIFT

    return 0;
}