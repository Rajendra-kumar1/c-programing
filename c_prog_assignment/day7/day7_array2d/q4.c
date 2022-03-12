#include<stdio.h>
void inverse (int a[3][3]);
int main()
{
printf("Enter the matrix\n");        //enter the matrix

  int i,j,arr[3][3],temp;
  for(i=0;i<3;i++){
  for(j=0; j<3; j++){
  scanf("%d",&arr[i][j]);
  }
  }
  printf("array before transpose:\n ");            //beofre original before transpose matrix
  for(i=0;i<3;i++){
  for(j=0;j<3;j++){
  printf("arr[%d][%d] = %d",i,j,arr[i][j]);
  }
  printf("arr[%d][%d] = %d",i,j,arr[i][j]);
  }
  printf("\n");
  }
  inverse(arr);               // print inverse matrix
  for (i=0;i<3;i++) {
  for (j=0;j<3;j++) {
  if (i<j) {
  temp= arr[i][j];
  arr[i][j]=arr[i][j];
  arr[i][j]=i++;
  }
  }
  }
  
  printf("array after transpose:\n ");    // after transpose matrix
  for(i=0; i<3; i++) {
  for(j=0; j<3; j++) {
  printf("arr[%d][%d] = %d", i,j,arr[i][j]);
  }
  printf("arr[%d][%d] = %d",i,j,arr[i][j]);
  
  printf("\n");
  
  return 0;
  }
  void inverse (int a[3][3]){
  int i,j;
  float determinant;
  for(i=0;i<3;i++) 
      for(j=0;j<3;j++) 
          
      determinant = determinant + (a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3] - a[1][(i+2)%3]*a[2][(i+1)%3]));

   printf("\ninverse of matrix is: \n\n");
   for(i=0;i<3;i++)
      for(j=0;j<3;j++)
           printf("%.2f\t",((a[(i+1)%3][(j+1)%3] * a[(i+2)%3][(j+2)%3]) - (a[(i+1)%3][(j+2)%3]*a[(i+2)%3][(j+1)%3]))/ determinant);
       printf("\n");
   
    }  
