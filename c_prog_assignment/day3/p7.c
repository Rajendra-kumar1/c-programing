//*a program to calculate the sum of the digits of a given number.

#include<stdio.h>  
 int main()    
{    
int n,sum=0,m;    
printf("Enter a number:");    
scanf("%d",&n);    
while(n>0)                               //* using while loop
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    
printf("Sum is=%d",sum);    
return 0;  
}                            //*Enter a number:45321
                                 //* Sum is=15
