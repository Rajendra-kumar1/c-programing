//linear search  
#include<stdio.h>
int main()
{
int a[20],n,key,flag=0, position,i;
printf("Enter the array size\t");
scanf("%d",&n);

printf("Enter thge array\t");
for(i=0; i<n; i++)
scanf("%d", &a[i]);
printf("Enter the key to be searched\t");
scanf("%d",&key);

for(i=0;i<n; i++)

if(key == a[i])
{
flag=1;
position=i;
break;
}

if(flag==1)
{

printf("the key %d is AT %d Position \n\n ", key, i+1);
}
else
printf("key Not found \n\n");
return 0;
}

