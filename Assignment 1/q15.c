#include <stdio.h>

int main() {
    int x,gross_salary,data,ta,basic;
    printf("enter basic salary : ");
    scanf("%d",&basic);

    data = basic/10;
    ta = 12*(basic)/100;
    gross_salary = basic + data + ta;
    printf("gross salary of person is: %d \n", gross_salary);


    return 0;
}