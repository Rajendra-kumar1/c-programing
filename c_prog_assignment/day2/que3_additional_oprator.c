//*a C program to add two operands and store the result in one of the operand using addition assignment operator.

#include<stdio.h>
int main()
{
 int a=0,b=5;
  char c;
  printf ("Enter any one operator += ");   //* the operand using addition assignment operator.//
  scanf("%c", &c);
  printf ("Enter one numbers\n");
  scanf ("%d, %d",&a, &b);
  {
  
  a+=b;                                    //* sum a = a+b
   printf("value of a+b = %d\n",a);          
    
  }
  return 0;
} 
