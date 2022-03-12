//* a program in C to find the prime numbers within a range of numbers.
#include <stdio.h>

void main(){
    int num,i,ctr,stno,enno;

    printf("Input starting number of range: ");  
                                  //*staring i/p first no.
    scanf("%d",&stno);

    printf("Input ending number of range : ");      //* last i/p no.
    scanf("%d",&enno);
    printf("The prime numbers between %d and %d are : \n",stno,enno);

    for(num = stno;num<=enno;num++)                //* use in for loop
       {
         ctr = 0;

         for(i=2;i<=num/2;i++)
            {
             if(num%i==0)                  //* use 'if' condition
             {
                 ctr++;
                 break;
             }
        }

         if(ctr==0 && num!= 1)
             printf("%d ",num);
    }
printf("\n");
}                            //* o\p : Input starting number of range: 1
                               //* Input ending number of range : 20
                             //* The prime numbers between 1 and 20 are :
                              //* 2 3 5 7 11 13 17 19
