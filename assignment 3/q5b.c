
#include <stdio.h>

int main() {
   
    int x;
    printf("enter a number:  ");
    scanf("%d",&x);
    if (x > 0)
    {
        printf("number is positive \n");
    } 
    else if (x == 0)
    {
        printf("number is neither negative nor positive \n");
    }
    
    else {
        printf("number is negative \n");
    }

    //using ternary operators
    //x > 0 ? printf("number is positive \n") : printf("number is negative \n");
    

    return 0;
}
