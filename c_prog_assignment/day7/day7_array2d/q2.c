//a C program to copy the elements of one 2-D array to another 2-D array.
#include <stdio.h>
void main()
{
int arr1[100], arr2[100];
int i, n;
printf("\n\nCopy the elements one array into 2-D array :\n");

printf("Input the number of elements to be stored in the array :");
scanf("%d",&n);

printf("Input %d elements in the array :\n",n);
for(i=0;i<n;i++)
{
printf("element - %d : ",i);
scanf("%d",&arr1[i]);
}
for(i=0; i<n; i++)
{
arr2[i] = arr1[i];
}
                // Prints the elements of first array  
printf("\nThe elements stored in the first array are :\n");
for(i=0; i<n; i++)
{
printf("% 5d", arr1[i]);
}
           // Prints the elements copied into the second array.
printf("\n\nThe elements copied into the second array are :\n");
for(i=0; i<n; i++)
{
printf("% 5d", arr2[i]);
}
printf("\n\n");
}

