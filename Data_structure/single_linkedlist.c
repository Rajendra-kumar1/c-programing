//single_linkedlist
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;

int  main()
{
    int i,num,loc;
    struct node *n;
    head=NULL;

    while(1)
    {
    printf("\n List Operations\n");
    printf("===============\n");
    printf("1.Insert at beginning\n");
    printf("2.Insert at end\n");
    printf("3.Insert at specified location \n");
    printf("4.Display\n");
    printf("5.Size\n");
    printf("6.Delete\n");
    printf("7.Exit\n");
    printf("Enter your choice : ");
    if(scanf("%d",&i)<=0){
        printf("Enter only an Integer\n");
        exit(0);
    } else {
        switch(i)
        {
        case 1:  printf("Enter the number to insert at the beginning : ");
                 scanf("%d",&num);
                 insert(num);
                 break;
        case 2:  printf("Enter the number to insert at the end : ");
                 scanf("%d",&num);
                 insert_end(num);
                 break;
        case 3:  printf("Enter the number and location to insert : ");
                 scanf("%d %d",&num, &loc);
                 insert_loc(num, loc);
                 break;
        case 4: printf("Element(s) in the list are : ");
                display(n);
                break;
        case 5:    printf("Size of the list is %d\n",count());
                   break;
        case 6:     if(head==NULL)
                printf("List is Empty\n");
                else{
                printf("Enter the number to delete : ");
                scanf("%d",&num);
                if(delete(num))
                    printf("%d deleted successfully\n",num);
                else
                    printf("%d not found in the list\n",num);
                }
                break;

        case 7: return 0;
        default: printf("Invalid option\n");
        }
    }
}
    return 0;
}

int insert(int num)
{
    struct node *temp;
    temp= (struct node *)malloc(sizeof(struct node));
    temp->data = num;
    if (head == NULL)
    {
       //List is Empty
       head=temp;
       head->next=NULL;
    }
    else
    {
       temp->next=head;
       head=temp;
    }
}

int insert_end(int num)
     {
        struct node *temp1, *temp2;

        temp1=(struct node *)malloc(sizeof(struct node));
        temp1->data=num;

        // Copying the Head location into another node.
        temp2=head;

        if(head == NULL)
        {
           // If List is empty we create First Node.
           head=temp1;
           head->next=NULL;
        }
        else
        {
           // Traverse down to end of the list.
           while(temp2->next != NULL)
           temp2=temp2->next;

           // Append at the end of the list.
           temp1->next=NULL;
           temp2->next=temp1;
        }
     }

int insert_loc(int num, int loc)
 {
    int i;
    struct node *temp, *prev, *curr;
    curr = head;
    if(loc > (count()+1) || loc <= 0)
    {
       printf("\nInsertion at given location is not possible\n ");
    }
    else
    {  if (loc == 1)
        {
            insert(num);        
	}
        else if(loc == count()+1)
	{
	    insert_end(num);
	}	
	else
        {
            for(i=1;i<loc;i++)
            {
                prev = curr;
                curr = curr->next;
            }
            temp = (struct node *)malloc(sizeof(struct node));
            temp->data = num;
            prev->next=temp;
            temp->next=curr;
        }
    }
 }

int delete(int num)
{
    struct node *curr, *prev;
    curr=head;
    while(curr!=NULL)
    {
    if(curr->data==num)
    {
        if(curr==head)
        {
        head=curr->next;
        free(curr);
        return 1;
        }
        else
        {
        prev->next=curr->next;
        free(curr);
        return 1;
        }
    }
    else
   {
        prev=curr;
        curr = curr->next;
   }
   }
    return 0;
}

int display(struct node *n)
{
    n=head;
    if(n==NULL)
    {
    printf("List is empty\n");
    return;
    }
    while(n!=NULL)
    {
    printf("%d\t",n->data);
    n=n->next;
    }
    printf("\n");
}

int count()
{
    struct node *n;
    int c=0;
    n=head;
    while(n!=NULL)
    {
    n=n->next;
    c++;
    }
    return c;
}







