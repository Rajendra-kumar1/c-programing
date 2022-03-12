//*a program in C to display the pattern like right angle triangle 

#include<stdio.h>
int main()
{
int i,j, rows;
printf("input number of rows; ");
scanf("%d", &rows);

for(i=1; i<=rows; i++)
{
for(j=1; j<=i; j++)
printf("%d", j);

printf("\n");
}
}                  //* Input number of rows : 4
