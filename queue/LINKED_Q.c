#define null 0
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
typedef struct lqueue
{
  int data;
  struct lqueue *next;
}lq;
lq *front,*rear,*temp;

void init()
{
   rear=front=null;
}
void Enq(int x)
{
  temp=(lq*)malloc(sizeof(lq));
  if(temp==null)
  return;
  temp->data=x;
   temp->next=null;
  if(rear==null)
  {
   rear=front=temp;
  }
  else
  {
  rear->next=temp;
  rear=temp;
  }

}
int  Deq()
{
 int x;
 if(front==null)
 return 0;
 temp=front;
 if(front==rear)
 front=rear=null;
 else
 front=front->next;
 x=temp->data;
 temp->next=null;
 free(temp);
 return x;
}
int main()
{
init();
Enq(10);
Enq(20);
Enq(30);
Enq(40);
Enq(50);
printf("\n%d",Deq());
printf("\n%d",Deq());
printf("\n%d",Deq());
printf("\n%d",Deq());
getch();

}
