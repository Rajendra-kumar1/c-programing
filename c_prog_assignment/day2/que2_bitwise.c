//*a program to demonstrate bitwise operators
#include <stdio.h>
int main()
{
int x = 0, y = 10, z = 2, k =6;
int a = x ^ y & z | k; //using bitwise operator '^' – Exclusive OR , '&' – AND operator, | – OR operator
printf("%d \n", a);
return 0;
}
 // output 6
