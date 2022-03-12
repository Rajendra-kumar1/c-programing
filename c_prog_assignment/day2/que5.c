//* A C program contains the following declarations and initial assignments: 

#include<stdio.h>
int main()
{
int i=8,j=5, q1, q2, q3, q4, q5;
float x = 0.005, y = 0.01;
char c='c', d= 'd';

q1=(3*i*j)%(2*d);
    printf("q1 = %d\n", q1);      //* q1 = 120

q2=(i*j)%(c+2*d) / (x*y);
    printf("q2 = %d\n", q2);       //* q2 = 800000

q3= 5 * (i + j) > 'c';
  printf("q3 = %d\n", q3);        //* q3 = 0

q4=2*x+ (y== 0);
 printf("q4 = %d\n", q4);          //* q4 = 0

q5=(x > y) && (i> 0) || (j < 5);
printf("q5 = %d\n", q5);            //* q5 = 0

    return 0;
}

