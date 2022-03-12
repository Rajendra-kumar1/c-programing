//a C program to demonstrate double pointer.
 
#include<stdio.h>  
void main ()  
{  
int x = 25;  
int *a;  
int **aa;   
a = &x;               // pointer a is pointing to the address of x  
aa = &a;               // pointer aa is x double pointer pointing to the address of pointer a  
printf("address of x: %p\n",a);           // Address of x will be printed   
printf("address of a: %p\n",aa);         // Address of a will be printed  
printf("value stored at a: %d\n",*a);      // value stoted at the address contained by the pointer stored at a
printf("value stored at aa: %d\n",**aa);     // value stored at the address contained by the pointer stored at aa  
}  
