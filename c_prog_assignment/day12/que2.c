// Write a program to find the smallest and greatest integers among all integers, which are provided through the command line.

#include<stdio.h> 
#include<limits.h> 
void main(int argc, char *argv[])     //integer arguments in main function 
{ 
int min,max,i,n; 
max = argv[1];                  
min = argv[0]; 
    	 
printf("How many numbers do you want to enter: ");         // enter input number 
scanf("%d",&n); 
    	 
for(i=0; i<n; i++) 
{ 
printf("Number-%d: ",i+1); 
scanf("%d",&argc); 
    	                                             
if(argc>max)	
max = argc; 
if(argc<min)	
min = argc; 
}   
printf("Smallest number = %d\n greatest number = %d",min,max);   // find greatest and smallest number
    } 

