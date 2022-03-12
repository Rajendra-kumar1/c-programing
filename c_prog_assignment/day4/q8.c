//* (8) a C program to display the pattern like right angle triangle.

#include <stdio.h>
void main()
{
   int i,j,rows;              //* intiger constant

   printf("Input number of rows : ");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++)                 //* for loop
   {
	for(j=1;j<=i;j++)
	   printf("%d",i);
	printf("\n");
   }
}                     //* Input number of rows : 4

