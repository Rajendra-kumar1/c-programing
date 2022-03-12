//a C program to count the frequency of each number in a 1-D array.

#include <stdio.h>
int main()
{
int arr[100], freq[100];
int size, i, j, count;
                                  // input size of array
printf("Enter size of array: ");
scanf("%d", &size);
                                      // input element array
printf("Enter elements in array: ");
for(i=0; i<size; i++)
{
scanf("%d", &arr[i]);
                               //Initially initialize frequencies to -1
        freq[i] = -1;
    }

    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {                          //If duplicate element is found
           if(arr[i]==arr[j])
            {
                count++;
 freq[j] = 0;
            }
        }
                            //If frequency of current element is not counted      
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }                   //* Print frequency of each element
    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<size; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}

