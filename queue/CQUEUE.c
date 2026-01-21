#include<stdio.h>
#include<conio.h>
#define max 5
typedef struct Queue
{
 int data[max];
 int front,rear;
}s;
s s1,*p;
void init()
{
  p=&s1;
  p->front=p->rear=max-1 ;
}
int Empty()
{
  if(p->front==p->rear)
  return 1;
  else
  return 0;
}
int Full()
{
  int nxt_rear;
  if(p->rear==max-1)
  nxt_rear=0;
  else
  nxt_rear=p->rear+1;
  if(nxt_rear==p->front)
  return 1;
  else
  return 0;
}
void Enq(int x)
{
  if(Full()==1)
  return;
  if(p->rear==max-1)
  p->rear=0;
  else
  p->rear=p->rear+1;
  p->data[p->rear]=x;

}
int Deq()
{
  int x;
  if(Empty()==1)
  return -1;
  if(p->front==max-1)
  p->front=0;
  else
  p->front=p->front+1;
   x=p->data[(p->front)];
   return x ;

}
int main()
{
init();
Enq(10);
Enq(20);
Enq(30);
Enq(50);

printf(" \n%d",Deq());
printf(" \n%d",Deq());
printf(" \n%d",Deq());
Enq(70);
Enq(80);
printf(" \n%d",Deq());
printf(" \n%d",Deq());
printf(" \n%d",Deq());
getch();
}


