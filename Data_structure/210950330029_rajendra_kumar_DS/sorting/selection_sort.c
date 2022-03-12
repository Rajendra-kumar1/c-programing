//write a program to selection sort.
#include <stdio.h>

int main()
{
   int arr[100], n, i, j, temp, minimum;

   printf("Enter number of elements\n");
   scanf("%d", &n);

   printf("Enter %d integers\n", n);
//using for loop
   for ( i = 0 ; i < n ; i++ )
      scanf("%d", &arr[i]);

       for ( i = 0 ; i < n-1 ; i++ )   
        {
	       minimum=i;
                for ( j = i + 1 ; j < n ; j++ )
                {
                        if ( arr[j] < arr[minimum] )
                        {
			   minimum=j;                 //minimum : campairing and select the smallest
			}
		}
			if(minimum!=i)
			{
                                temp = arr[minimum] ;
                                arr[minimum] = arr[i] ;
                                arr[i] = temp ;
                        }
                
        }
// sorted in ascending order
   printf("Sorted list in ascending order:\n");

   for ( i = 0 ; i < n ; i++ )
      printf("%d\t", arr[i]);

      printf("\n");
      return 0;
}

