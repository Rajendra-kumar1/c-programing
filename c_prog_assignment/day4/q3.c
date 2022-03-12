//* a C program to find sum of all odd numbers upto N using while loop. 

#include<stdio.h>

int main()
{
    int num, count = 1, sum = 0;

    printf("Enter a integer number\n");
    scanf("%d", &num);

    while(count <= num)                 //* using while loop
    {
        if(count%2 != 0)                     //* if statement

        {
            sum = sum + count;
        }
        count++;
    }

    printf("Sum of ODD integer number is %d\n", sum);

    return 0;                   
}                               //* Enter a integer number ...14

                                  //* Sum of ODD integer number is 49
