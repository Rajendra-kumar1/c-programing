//a program to reverse an integer number. Use recursion

#include<stdio.h>
int main(){
   int num,reverse_number;

                                            // input the integer number
   printf("\nEnter any integer number:");
   scanf("%d",&num);

                                    //Calling defined function to perform reverse
   reverse_number = reverse_function(num);
   printf("\nAfter reverse the no is :%d",reverse_number);
   return 0;
}
int sum=0,rem;
reverse_function(int num)
{
   if(num)                // using recursion 
    {
      rem=num%10;
      sum=sum*10+rem;
      reverse_function(num/10);
   }
   else
      return sum;
   return sum;
}

