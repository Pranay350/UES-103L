#include<stdio.h>
int main() {
    int a,b;
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    char op;
    printf("enter operator (+,-,*,/,%%): ");
    scanf(" %c",&op);
    
    switch (op)
    {
    case '+': 
        printf("%d\n", a + b);
        break;
    
    case '-':
        printf("%d\n", a - b);
        break;

        case '*':
        printf("%d\n", a*b);
        break;

        case '/':
        printf("%d\n", a/b);
        break;

        case '%':
        printf("%d\n", a%b);
        break;
        
    }

    return 0;
}