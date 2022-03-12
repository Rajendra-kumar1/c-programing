//a program to read the name and marks of a student and store it in a file.
#include<stdio.h>
#include<stdlib.h>
int main() 
{
char name[100];
int marks,i,n;
printf("Enter number of students: ");               //user input number of students
scanf("%d",&n);
FILE *fptr;
fptr=(fopen("C:\\student.txt","w"));
if(fptr==NULL) 
{
printf("Error!");
exit(1);
}
for (i=0;i<n;++i) 
{
printf("For student%d\nEnter name: ",i+1);          // enter name of student
scanf("%s",name);
printf("Enter marks: ");                       // enter marks
scanf("%d",&marks);
fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);
}
fclose(fptr);
return 0;
}                         
                     /*  Name: raju 
                   Marks=45 

                 Name: rajendra 
                 Marks=65 

              Name: rahit 
             Marks=76 

             Name: kajal 
            Marks=50 /*
