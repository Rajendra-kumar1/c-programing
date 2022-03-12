//* a C program which adds all numbers from 1 to N, except those which are divisible by 5.

#include<stdio.h>
int main()
{
  int num, i;
  long int sum=0;
  printf("Enter value of num : ");
  scanf("%d", &num);
  for(i=1; i<=num; i++)      //* use in for loop
  {
  if(i%5 == 0)
        continue;               //* use in continue statement
        else
            sum+=i;
        }
        printf("%d");
        return 0;
        }                     //* Enter value of num: ....
