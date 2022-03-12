//a C program to store ‘n’ student records entered by user.  allocate memory dynamically using malloc()/calloc() function and print the records grade level(based on percentage)
#include<stdio.h>
#include<stdlib.h>
struct student
{
int id;
char name[40];
float percentage;
};

int main()
{
struct student *ptr;
    int i,n;
    printf("Enter number of student");
    scanf("%d",&n);
    // dinamic memory allocation using malloc
    ptr = (struct student*)malloc(n*sizeof(struct student));
	for(i=0; i<n; i++) {
printf("%d student details\n", i+1);     //student details name ,id ,percentage
scanf("%s\n%d\n%f", (ptr+i)->name,&(ptr+i)->id,&(ptr+i)->percentage);
}
for(i=0; i<n; i++) {
if ((ptr+i)->percentage<=100&&(ptr+i)->percentage>=75){
printf("%s\t %d\t %.2f\n",(ptr+i)->name,(ptr+i)->id,(ptr+i)->percentage);
printf("distinction\n");
}
else if ((ptr+i)->percentage<75&&(ptr+i)-> percentage>=60){
printf("%s\t %d\t %.2f\n",(ptr+i)->name,(ptr+i)->id,(ptr+i)->percentage);
printf("first grade\n");
}
else if ((ptr+i)->percentage<60&&(ptr+i)-> percentage>=50){
printf("%s\t %d\t %.2f\n",(ptr+i)->name,(ptr+i)->id,(ptr+i)->percentage);
printf("second grade\n");
}
else if ((ptr+i)->percentage<50&&(ptr+i)->percentage>=40){
printf("%s\t %d\t %.2f\n",(ptr+i)->name,(ptr+i)->id,(ptr+i)->percentage);
printf("third grade\n");
}
else {
printf("%s\t %d\t %.2f\n",(ptr+i)->name,(ptr+i)->id,(ptr+i)->percentage);
printf("fail\n");
 }
 }
return 0 ;
}
