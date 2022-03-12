//*a C program to display the pattern like right angle triangle .

#include <stdio.h>
void main()
{
   int i,j,rows,k=1;                 //*integer constant
   printf("Input number of rows : ");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++)          //* using for loop
   {
	for(j=1;j<=i;j++)
	   printf("%d ",k++);
	printf("\n");
   }
}           //* Input number of rows : 4

