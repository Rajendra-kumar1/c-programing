//*a C program to find the maximum of 2 numbers using Conditional operator.*//

  #include <stdio.h>
   int main()
    {
    int a, b, maximum;
    printf("Enter Two Integers\n");     // enter teo number
    scanf("%d %d", &a, &b);
     if(a == b)
    {
    printf("Both Equal\n");             // * Additional condition check for equality */
   return 0;
    }
    maximum = (a > b) ? a : b;
    printf("%d is Maximum\n", maximum);
    return 0;
}

