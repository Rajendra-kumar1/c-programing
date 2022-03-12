//a C Program to sort elements in 1-D Array
#include<stdio.h>  
  
#define N 5  
  
int main()  
{  
int a[N], i, sort, pos;               // user a[N] ,i, sort, pos
  
printf("Enter %d integer numbers\n", N);      //input integer number
for(i = 0; i < N; i++)  
{  
scanf("%d", &a[i]);  
  
if(i == 0 || sort > a[i])  
{  
sort = a[i];  
pos   = i + 1;  
}  
}  
                            // print Smallest number with position
printf("Sortest Number: %d, at position %d.\n", sort, pos);  
  
return 0;  
}  
