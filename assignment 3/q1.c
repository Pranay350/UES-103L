//Name --> Pranay Jain 
//batch --> A32
#include<stdio.h>

int main() {
    char pranay_jain[]="Pranay Jain";
    int rollnumber=1025030168;

    char ch;
    
    printf("enter a character: ");
    scanf("%c",&ch);
    int x = (int)ch;
    if (ch >= 65 && ch<= 90 )
    {
        printf("Capital letter /n");
    }
    else if (ch >= 97 && ch <= 122) 
    {
        printf("small letter /n");
    }
    else if (x>=48 && x<=57)
    {
        printf("number /n");
    }
    else {
        printf("special symbol /n");
    }
    
    
    
    return 0;
}