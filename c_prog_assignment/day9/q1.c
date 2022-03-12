//c program to search element in array (1-d) using pointer
#include<stdio.h>
int i,l;
int search(int ,int *,int);    //integer pointer
int main(){
   int n,m;
   printf("enter the size of array:");          //user enter the size of array
   scanf("%d",&n);
   int a[n];
   printf("enter the elements:\n");           // enter the elements
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   printf("enter the element to be searched:");
   scanf("%d",&m);
   search(n,a,m);
   return 0;
}
int search(int n,int *a,int m)          //search pointer integer element 
{
   for(i=0;i<n;i++){
      if(m==a[i]){
         l=1;
         break;
      }
   }
   if(l==1){
      printf("%d is present in the array",m);
   } else {
      printf("%d is not present in the array",m);
   }
}      
          //output : enter the size of array:5
           //enter the elements: 6 7 8 4 3 
        //enter the element to be searched:4
         //4 is present in the array

