//write a program to Linear Search .
#include<stdio.h>   
void main ()  
{  
    int a[10] = {10, 23, 40, 1, 2, 0, 14, 13, 50, 9};         //using array
    int item, i,flag;  
    printf("\nEnter Item which is to be searched\n");  
    scanf("%d",&item);  
    for (i = 0; i< 10; i++)         //for loop
    {  
        if(a[i] == item)               //if else statement
        {  
            flag = i+1;  
            break;                 // break statement
        }   
        else   
        flag = 0;  
    }   
    if(flag != 0)  
    {  
        printf("\nItem found at location %d\n",flag);  
    }  
    else  
    {  
        printf("\nItem not found\n");   
    }  
}   
