// 2.	Write a C program to declare an integer and an integer pointer to it. Initialize the integer variable. Print the value of the int variable using pointer variable.

#include<stdio.h>
int main()  
{  
//integer initialize the integer variable
 int x=10;  
 int *ptr;       //integer pointer
 ptr=&x;  
 *ptr=12;  
 printf("value of x is : %d", x);  
 return 0;
  }  




