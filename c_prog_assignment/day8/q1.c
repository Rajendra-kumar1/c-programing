//a C program that declares and initializes (to any value you like) a char, an int, a double and a float. Your program should then print the address of, and value stored in, each of the variables.  

#include <stdio.h>

int main()
{
    int a, b;
    a = 10;
    b =20;
    int *p = &a;
    char *c = &b;
    double *d = &a;
    float *f =&b;
                         // declaring and initializing the pointer

                        // print user value and address
    printf("the value: %u\n & address: %p\n", *p);
    printf("the value: %u\n & address: %p\n", *&a);
    printf("the value: %u\n & address: %p\n", *&b);
    printf("the value: %u\n & address: %p\n", *c);
    printf("the value: %f\n & address: %p\n", **&d);

    return 0;
}

