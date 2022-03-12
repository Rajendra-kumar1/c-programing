//Lower case to Uppercase: Convert a string from lower case to uppercase using pointers. Write a separate function to do the conversion. Do not use intrinsic functions. 


#include <stdio.h>
#include<string.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
 char str[MAX_SIZE];
 char * s = str;
 
     /* Input string from user */
 printf("Enter your text : ");
 gets(str);

 while(*s) 
 {
  *s = (*s > 'a' && *s <= 'z') ? *s-32 : *s;
 s++;   
 }
 printf("lowercase to Uppercase string : %s",str);
    
 return 0;
}                       // Enter the text ..  deeksh
                       // lowercase to uppwecase string : DEEKSH
