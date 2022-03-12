//a C program to perform the following operations on two strings using intrinsic functions.
#include <stdio.h> 
#include <string.h>
int main ()
 { 
char str1[20] = "Rajendra"; 
char str2[20] = "Kumar"; 
char str3[20]; 
int len ;
char str4[20]= "Sahu";
{
 strcpy(str3, str1); 
printf("strcpy( str3, str1) : %s\n", str3 ); 
}    
       // Copy string
strcat( str1, str2); 
printf("strcat( str1, str2): %s\n", str1 ); 
{         
       // Find the length of each string
len = strlen(str1);
 printf("strlen(str1) : %d\n", len );
 }
 {
            // Compare two strings
 int result;
 result = strcmp(str1, str2);
 printf("strcmp(str1 ,str2) = %d\n", result);
 
 result = strcmp(str1, str4);
 printf("strcmp(str1, str4) = %d\n", result);
 }
 {
     //string1 is the subset of the second string or not(strstr)
    if (strstr(str1, str2) == 0)
        printf("%s not in %s", str2, str1); 
    else 
        printf("%s", strstr(str1, str2)); 
    return 0; 
    }
    }
    
 
