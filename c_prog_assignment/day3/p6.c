//*a program to find the sum of numbers in a given range.

#include<stdio.h>
main()
{
int num, i ;
long int sum=0;
printf("Enter value of num : " );
scanf("%d", & num);
for(i=0; i <=num; i++)
{
if(i%5 ==0)
       continue;
else sum+=i;
}
printf("sum of 1 to %d is = ");
return 0;
}              //* Enter value of num ... 12 
                //* sum of 1 to 10
