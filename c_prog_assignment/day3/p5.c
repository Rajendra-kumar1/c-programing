//* a program to check whether the given number is perfect number or not.

#include <stdio.h>

int main()
{
 int i, Number, Sum = 0 ;

 printf("\n Please Enter any number \n") ;
 scanf("%d", &Number) ;

 for(i = 1 ; i < Number ; i++)
  {
   if(Number % i == 0)
     Sum = Sum + i ;
  }

 if (Sum == Number)
    printf("\n %d is a Perfect Number", Number) ;                 // Please Enter any number 6 , is a Perfect Number

 else
    printf("\n%d is not the Perfect Number", Number) ;            //lease Enter any number 14 ,is not the Perfect Number

return 0 ;
}
