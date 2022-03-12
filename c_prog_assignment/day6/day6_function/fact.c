// a recursive function to find factorial of a number. 
#include<stdio.h>
long int fact(int f);
int main()
{
long int fval;
int n;
printf("Enter n value:");           // enter the value
scanf("%d", &n);
fval = fact(n); 
printf("Factorial=%ld", fval);         // print factorial value
return 0;
}
long int fact(int f)
{
if (f==1 || f==0)     
  return 1;
return (f*fact(f-1));

}
             //Enter n value:4
              //Factorial=24
