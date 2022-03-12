//* a C program to display the first n terms of Fibonacci series. 
#include <stdio.h>

void main()
{
   int prv=0,pre=1,trm,i,n;
   printf("Input number of terms to  display : ");
   scanf("%d",&n);
   printf("the Fibonacci series upto  to %d terms : \n",n);
   printf("% 5d % 5d", prv,pre);

  for(i=3;i<=n;i++)
   {
     trm=prv+pre;
     printf("% 5d",trm);
     prv=pre;
     pre=trm;
   }
   printf("\n");
}                        //* Input number of terms to  display : 11
                         //* the Fibonacci series upto  to 11 terms : 
                          //* 0     1    1    2    3    5    8   13   21   34   55

