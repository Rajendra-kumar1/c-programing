//a C Program to display two-dimensional array elements with addresses

#include<stdio.h>
int main()
{
int i=0,j=0;
int arr[3][2]={{1,9},{2,5},{3,4}};
                     //traversing 2D array
for(i=0;i<3;i++)
{
 for(j=0;j<2;j++){
 
   printf("arr[%d] [%d] = %d \n",i,j,arr[i][j]);
 }         //end of j
}          //end of i
return 0;
}

