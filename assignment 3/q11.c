#include<stdio.h>
int main() {
    int x;
    do
    {
        printf("enter a number: ");
        scanf("%d",&x);
    } while (x < 100);
    
    printf("QUIT \n");
    
    return 0;
}