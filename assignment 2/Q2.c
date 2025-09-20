#include<stdio.h>
#include<math.h>

int main() {
    int a,b,c,d;
    printf("enter coefficient of x2: ");
    scanf("%d",&a);
    printf("enter coefficient of x: ");
    scanf("%d",&b);
    printf("enter constant term: ");
    scanf("%d",&c);
    d = pow(b,2) - 4*a*c;
    if (d < 0)
    {
        printf("roots does not exist");
    }
    else {
    int x;
    x = (-b + sqrt(pow(b,2) - 4*a*c))/2*a;
    int y;
    y = (-b - sqrt(pow(b,2) - 4*a*c))/2*a;
    printf("Roots are %d,%d \n", x,y);
    }
    return 0;
}