//a C Program to Find Greatest Element in Array in one dimensional array 
#include<stdio.h>
int main()
{
int i,n;
int arr[100];
int largest;
printf("enter total number of element(1 to 100): ");
scanf("%d", &n);
printf("\n");
for(i=0; i<n; ++i)
{
printf("Enter number %d: " ,i+1);
scanf("%d", &arr[i]);
}
printf("number's entered by user is  ");
for(i=0; i<n; ++i)
{
printf("Number %d: \n", arr[i]);
}
largest=arr[0];
for(i=1; i<n; ++i)
{
if(largest<arr[i])
   largest=arr[i];
   }
   printf("largest element = %d\n", largest);
   return 0;
   }

