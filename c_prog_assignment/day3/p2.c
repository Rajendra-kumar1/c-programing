//*  a program to test given character  is-

#include<stdio.h>
int main()
{
char ch;
printf("Enter any number or alphabet :");
scanf("%c", &ch);
if(ch>=65 && 90>=ch)
printf("%c is uppercase letter\n",ch);                //*upper caselater is A-Z
else if (ch>=97 && 122>=ch)
printf("%c is lowercase lettet\n",ch);             //* lowercase letter is a-z

else if(ch>=48 && 57>=ch)
printf("%c is a digit\n", ch);                 //* press and digit as eq.- 0,1,2,3......

else if (ch>=32)
printf("%c is white space \n", ch);              //* press sapce key & any special character key

else if(ch>=9)
 printf("%c is tab\n", ch);                 //* press tab kay , 9 is ascii code

 else if(ch>=10)
    printf("%c is new line\n",ch);               //* new line  press key \n , 10 is ascii code
return 0;
}

