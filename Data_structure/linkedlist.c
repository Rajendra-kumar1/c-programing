//linked list
#include<stdio.h>
#include<stdlib.h>
struct Node
{
int info;
struct Node *next;
};
struct Node *head=NULL , *tail =NULL, *temp;
void insert();
void delete();
void display();
int main()
{
int chc;
do
{
printf("\n Meno \n\t 1 To insert the element : ");
printf("\n\t 2 To delete the element : ");
printf("\n\t 3 To display the list : ");
printf("\n\t 4 To exit : ");
printf("\nEnter yourn choice : ");
scanf("%d",&chc);
switch(chc)
{
case 1:
 insert();
 break;
 case 2:
 delete();
 break;
 case 3:
 display();
 break;
 case 4:
 return 1;
 default :
 printf("\n Invalid choice: ");
 }
 }
 while(1);
 return 0;
 }
 void insert()
 {
 int  num;
 struct Node * newnode;
 newnode = (struct Node *)malloc(sizeof(struct Node));
 printf("/n Enter the node value : ");
 scanf("%d", &num);
 newnode->info=num;
 newnode->next = NULL;
 if(tail == NULL)
 head = tail =newnode;
 else
 {
 tail->next = newnode;
 tail = newnode;
 }
 tail ->next=head;
 }
 void delete()
 {
 temp=head;
 if(head==NULL)
 printf("\nUnderlow: ");
 else
 {
 if(head == tail)
 {
printf("\n The delete number is %d",head->info);
head = tail= NULL;
}
printf("\n The delete number is %d", head ->info);
head = head->next;
tail->next = head;
}
free(temp);
}

void display()
{
temp =head;
if(head == NULL)
printf("\n Empty");
else
{
printf("\n");
for(; temp!=tail; temp->next)
printf("\n %d\t", temp->info);
printf("\n%d\t",temp->info);
}
}
 
