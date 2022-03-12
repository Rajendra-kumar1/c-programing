//a C program to keep records and perform statistical analysis for a class of  5 students. The information of each student contains: 

#include <stdio.h>
#include <stdlib.h>

struct stu                         //structure student
{
int rollno;
char name[20];
char gender;
int score;
};//s={01,"Rajendra",'M',80};
int main()
{                                       
int choice, count=0,i,min=99,max=0,index;
struct stu sarr[10];
while(1)
{                                              // student all record show 
printf("1 For add a record\n2for show the all records\n3 for high score\n4 for low scorer\n5 for exit :");
scanf("%d",&choice);

switch(choice)
{
case 1:
printf("Enter the student Roll no, Name, Gender and Score : ");                  // enter student details
scanf("%d %s %c %d",&sarr[count].rollno,sarr[count].name,&sarr[count].gender,&sarr[count].score);
count++;
break;
case 2:
i=0;
printf("The details are \n ");
while(i < count)
{
printf("%d\t%s\t%c\t%d\n",sarr[i].rollno, sarr[i].name, sarr[i].gender, sarr[i].score);
i++;
}
break;
case 3:
i=0;
while(i<count)
{
if(max < sarr[i].score)
{
max = sarr[i].score;
index=i;
}
i++;
}

printf("%s got maximum score = %d\n ",sarr[index].name,max);       // find maximum score

break;
case 4:
i=0;
while(i<count)
{
if(min > sarr[i].score)
{
min = sarr[i].score;
index=i;
}
i++;
}

printf("%s got minimum score = %d\n ",sarr[index].name,min);       //find minimum socre 

break;
case 5:
exit(0);
break;
}
}
return 0;
}
