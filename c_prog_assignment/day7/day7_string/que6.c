//a C program to remove characters in a given string except alphabets

#include <stdio.h>
#include <string.h>
int main()
{
char str[150];
int i,j;

printf("\n\nRemove characters in a given String Except Alphabets :\n");             //remove any number symble in given string character

printf("Input the string : ");        // user inter string
fgets(str,sizeof str,stdin);
for(i=0; str[i]!='\0'; ++i)
{
while (!((str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z' || str[i]=='\0')))
{
for(j=i;str[j]!='\0';++j)
{
str[j]=str[j+1];
}
str[j]='\0';
}
}
printf("After removing the Output String : %s\n\n",str);
}     
             //Remove characters in a given String Except Alphabets :
            // Input the string : raj@23#$65%,:endra
           // After removing the Output String : rajendra

