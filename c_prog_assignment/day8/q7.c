//A C program contains the following declaration 
//int x[8]= {10,20,30,40,50,60,70,80}; 

#include<stdio.h>
int main()
{
int x[8]={10,20,30,40,50,60,70,80};
printf("\n value of x = %p", x);                //value of x = 000000000061FE00
printf("\n value of (x+2) = %p", (x+2));         //value of (x+2) = 000000000061FE08
printf("\n value of *x = %d", *x);                //value of *x = 10
printf("\n value of (*x+2) = %d", (*x+2));          // value of (*x+2) = 12
printf("\n value of *(x+2) = %d", *(x+2));         //// value of *(x+2) = 30
}     
             

