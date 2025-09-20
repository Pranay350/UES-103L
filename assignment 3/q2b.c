#include<stdio.h>
int main() {
    int x,y,z;
    printf("enter x,y,z : ");
    scanf("%d%d%d",&x,&y,&z); 
   ( x>y && x>z) ? printf("%d is greatest",x) : ( y>x && y>z) ? printf("%d is greatest",y) : printf("%d is greatest",z);

    return 0;
}