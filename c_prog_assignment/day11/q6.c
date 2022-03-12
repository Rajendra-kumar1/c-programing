//a program to demonstrate integer, float, character and string constants

#include <stdio.h>
#include<string.h>
int main()
{                //constant variable int ,float,char, string
 const int x=10;
 const char ch= 'r';
  const float y=30.9;
 const char str[20] = "rajendra";
  
    // print to all integer, char float, string constant.
  printf(" \n The value of integer constant x: = %d\n", x);
  printf(" \n The value of char constant ch: = %c\n", ch);
  printf(" \n The value of float constant ch: = %f\n", y);
  printf(" \n the value of string constant str: = %s", str);

  return 0;
}
