// a C Program to Count the Number of Vowels, Consonants, digits and remaining characters in given string.

#include<stdio.h>
void main()
{
    char str[200];
    int i,vowels=0,consonants=0,digits=0,spaces=0,specialCharacters=0;
    
    printf("Enter a string\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]=='o' || str[i]=='u' || str[i]=='A' ||str[i]=='E' || str[i]=='I' || str[i]=='O' ||str[i]=='U')
        {
            vowels++;                  // vowels+=
        }
        else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
        {
            consonants++;               //consonants++
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digits++;                 //digits+=
        }
        else if (str[i]==' ')
        {
            spaces++;                // spaces++
        }
        else
        {
            specialCharacters++;     //specialcharacter++
        }
    }
 
    printf("\nVowels = %d",vowels);      // input string vowel
    printf("\nConsonants = %d",consonants);   //input string any consonants
    printf("\nDigits = %d",digits);          //input string any digit
    printf("\nWhite spaces = %d",spaces);     // input string space
    printf("\nSpecial characters = %d",specialCharacters);  //input string any special character
    
}            
             
            
