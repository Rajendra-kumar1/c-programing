//* Write a C program to find the sum of all array elements.

#include<stdio.h>
int main()
{
                                    //let's assume the maximum array size as 100. ,sum=0;
int arr[100], size, i, sum = 0;
    
 printf("Enter array size\n");           //Get size input from user
    scanf("%d",&size);
 
    printf("Enter array elements\n");   //Get all elements using for loop and store it in array
    for(i = 0; i < size; i++)
          scanf("%d",&arr[i]);
         
    for(i = 0; i < size; i++)              //add all elements to the variable sum.
          sum = sum + arr[i];          // same as sum += arr[i];
   
    printf("Sum of the array = %d\n",sum);
    
    return 0;
}                      //
