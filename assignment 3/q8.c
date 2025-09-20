#include<stdio.h>
#include<math.h>

int main() {
    int x,sum=0;
    printf("enter numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&x);
        sum = sum + x;
    }
    printf("average of numbers is: %d\n",sum/5);
    
    
    return 0;
}