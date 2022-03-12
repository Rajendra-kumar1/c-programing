//*a program to create a simple calculator to perform Addition, Subtraction, Multiplication and Division using switch statement.

# include <stdio.h>
int main()
{
char calculate;
float num1, num2, num3;                                    //num is three number
printf("Select an operator either + , - , * , / \n");
scanf("%c",&calculate);
printf("Enter three operands: ");
scanf("%f%f%f",&num1,&num2,&num3);
switch(calculate)
{
case '+':                                                            //addition '+'
printf("%f + %f + %f= %f",num1, num2, num3, num1+num2+num3);
break;
case '-':                                                             //subtraction '-'
printf("%f - %f - %f= %f",num1, num2, num3, num1-num2-num3);
break;
case '*':                                                              // multiplication '*'
printf("%f * %f + %f= %f",num1, num2, num3, num1*num2*num3);
break;
case '/':                                                               // division '/'
printf("%f / %f / %f = %f",num1, num2, num3, num1/num2/num3);
break;
default:                                                             // If operator is other than +, -,* or /, error message
printf("Error! operator is not correct");
break;
}
return 0;
}               

