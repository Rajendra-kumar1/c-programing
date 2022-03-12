//a C Program to Reversing the 1-D Array Elements 
#include<stdio.h>  
  int main()  
{  
    int a[5], i;  
  
    printf("Enter 5 integer numbers\n");        //input 5 integer number
    for(i = 0; i < 5; i++)  
        scanf("%d", &a[i]);  
  
    printf("Array reverse elements are:\n");    // print reverse element 
    for(i = 4; i >= 0; i--)  
        printf("%d\n", a[i]);  
  
    return 0;  
}  
