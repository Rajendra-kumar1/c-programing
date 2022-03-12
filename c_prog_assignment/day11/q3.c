//a structure “complex” (use typedef) to read two complex numbers and perform addition, subtraction of these two complex numbers and display the result

#include <stdio.h>
struct complex
{
   int real, img;
};

typedef union Data comp;              // using typedef union

int main()
{
   struct complex a, b, c;

   printf("Enter a and b where a + ib is the first complex number.\n");
   scanf("%d%d", &a.real, &a.img);
   printf("Enter c and d where c + id is the second complex number.\n");
   scanf("%d%d", &b.real, &b.img);
   
  // addition of two number complex
   c.real = a.real + b.real;
   c.img = a.img + b.img;

   printf("Sum of the complex numbers: (%d) + (%di)\n", c.real, c.img);
 
 // subtraction of two number copmelx   
   c.real = a.real - b.real;
   c.img = a.img - b.real;
   
   printf("sub of the complex number: (%d) - (%di)\n", c.real, c.img);

   return 0;
}              
