//a program to print the prime Fibonacci numbers in a given range.
#include <stdio.h>
int main ( )
{
long a,b,c,i,n,j;
printf ("\n Enter the number to print fibnocciprime number\t");               // user enter input  number 
scanf ("%ld",&n);
a=0;
b=1;
for (i=1; i<n; i++)
{
c=a+b;
a=b;
b=c;
  //printf ("\n fibnoci series is : %ld\t",c);
for(j=2;j<c;j++)
{
if(c%j==0)
break;
}
if(c==j)
printf(" fibnocci prime number is : %ld\n",c);
}
return 0;
}

