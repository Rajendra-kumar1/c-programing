//a C Program to display three-dimensional array elements 
#include <stdio.h>
#include<stdlib.h>
int main()
{
int c[2][4][3];
int i,j,k,num;
printf("Enter elements into 3-D array: ");      //input enter elements
for(i=0;i<2;i++)
{
for(j=0;j<4;j++)
{
for(k=0;k<3;k++)
{
scanf("%d",&c[i][j][k]);
}
}
}
c[1][1][1] = 85;
for(i=0;i<2;i++)
{
for(j=0;j<4;j++)
{
for(k=0;k<3;k++)
{
printf("\t%d",c[i][j][k]);    //print i,j,k 3-D dimensional array  elemenmts
}
printf("\n", );
}
printf("\n",);
}
return 0;
}
