#include<stdio.h>
int main() {
    int x,y,z;
    printf("enter x,y,z : ");
    scanf("%d%d%d",&x,&y,&z);
    if (x>y && x>z)
    {
        printf("%d is greatest\n",x);
    }
    else if (y>x && y>z)
    {
        printf("%d is greatest \n",y);
    }
    if (z>y && x<z)
    {
        printf("%d is greatest \n",z);
    }
    return 0;
    
}
