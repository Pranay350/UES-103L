#include<stdio.h>
#include<math.h>

int main() {
    char vandan_gupta;
    int Rollnumber = 1025030171;

    int n,sum=0;
    printf("enter numbers: ");
    do
    {
        scanf("%d",&n);
        if (n != 999)
        {
            sum = sum + n;
        }
    } while (n != 999);
    
    printf("sum is %d \n", sum);
    
    return 0;
}