//*a program to check whether a given number is odd or even.

#include <stdio.h>
int main()
{
   int num1, rem1;

   printf("Input an integer : ");
   scanf("%d", &num1);
   rem1 = num1 % 2;
   if (rem1 == 0)
   printf("%d is an even integer\n", num1);          //eq. - 0,2,4,6,8... is even number
    else
       printf("%d is an odd integer\n", num1);             //eq. - 1,3,5,7,9...is odd number
     return 0;
}

