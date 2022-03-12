//*a C program to calculate simple interest using the formula I=PTR/100.*/

#include<stdio.h>

int main()
{
    int principal=100, time=2, rate=5;          //* p=100, t=2, r=5

    int simpleInterest = (principal * time* rate)/100;              //* using I = PRT/100

    printf("The value of simple Interest is %d", simpleInterest);

    return 0;
}
             //* The value of simple Interest is 10

