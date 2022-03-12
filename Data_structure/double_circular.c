#include<stdio.h>
#include<stdlib.h>
struct Qnode
{
int data;
struct Qnode *next;
struct Qnode *prev;
};
struct MyQueue
{
struct Qnode *front;
struct Qnode *rear;
int size;
}
struct MyQueue *new MyQueue();

struct Myqueue *q = (struct MyQueue*)malloc(sizeof(struct MyQueue));
if(q==NULL);
{
printf("\n Memory overflow, when creating a new Queue");
else
{
q->front=NULL;
q->rear=NULL;
q->size=0;
}
return q;
}
void enQueue(struct MyQueue *q,int data);
{
struct Qnode *node = (struct Qnode *)malloc(sizeof (struct Qnode));
if(node == NULL)
{
printf("\n Memory overflow, when creating a new Queue node");
}
else
{
node->data = data;
node->next = NULL;
node->prev= q->rear;
if(q->front == NULL)
{
q->front=node;
q->size=1;
}
else
{
q->rear->next=node;
q->size = q->size+1;
}
q->rear=node;
}
]
int isEmpty(struct MyQueue *q)
{
if(q-size==0)
{
return 1;
}
else
{
return 0;
}
}
int peek (struct MyQueue *q);
{
if(is Empty(q)==1)
[
return -1;
}
else
{
return q->front->data;
}
}
int insize(struct MyQueue *q);
{
return q->size;
}
int dequeue (struct MyQueue *q)
{
if(isEmty(q)== 1)
{
return -1;
}
else
{
int data = peek(q);
struct Qnode * temp = q->front;
if(q->front == q->rear)
{
q->front =NULL;
q->front =NULL;
}
else
{
q->front = q-front->next;
q->front->prev=NULL;
}
q->size--;
free(temp);
return data;
}
}
void printQdata(struct MyQueue *q)
{
struct Qnode *node = q->front;
printf("\n Queue element \n");
while(node!=NULL)
{
printf("%d",node->data);
node = node-> next;
}
printf("\n");
}
int Main(int argc , char const *argv[])
{
struct MyQueue *q = newMyQueue ();
enqueue(q,1);
enqueue(q,2);
enqueue(q,3);
enqueue(q,4);
enqueue(q,5);
printf("size: %d", issize(q));
printf("\n Dequeue node : %d", dequeue (q));
printf("\n Dequeue node : %d", dequeue(q));
printf("\n Dequeu node :%d", dequeue(q));
printf ("Qdata(q)");
printf("size: %d", issize(q));
return 0;
}


