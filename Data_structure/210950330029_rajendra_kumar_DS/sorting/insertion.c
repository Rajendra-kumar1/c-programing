//write a program to insertion sort.
#include<stdio.h>

void main()
{
        int A[20], N, temp, i, j;               //declaration globle variables

        printf("\n ENTER THE NUMBER OF TERMS: ");
        scanf("%d", &N);
        printf("\n ENTER THE ELEMENTS OF THE ARRAY:");
        for(i=0; i<N; i++)                         
        {
         scanf("\n%d", &A[i]);
        }

	for(i=1; i<N; i++)                     //using for loop
        {
                temp = A[i];
                j = i-1;
                while(j>=0 && A[j]>temp)           //using while loop
                {
                   A[j+1] = A[j];
                   j--;
                }
                A[j+1] = temp;
        }

        printf("\nTHE ASCENDING ORDER LIST IS...:\n");
        for(i=0; i<N; i++)
        printf("%d \t", A[i]);
 	printf("\n");
}


