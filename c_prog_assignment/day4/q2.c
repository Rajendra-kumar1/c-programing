//* A C program to find factorial of a number N using for loop. 

#include<stdio.h>
int main()
{
int i, fact=1, number;
printf("Enter a number");
scanf("%d",&number);
for(i=1; i<=number; i++)            //using for loop ,  i++ is increment
{
 fact=fact*i;
 }
 printf("factorial of %d is: %d\n", number,fact);

 return 0;
 }                          //* Enter a number..4
                               //*factorial of 4 is: 24

