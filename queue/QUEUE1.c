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
  p->front=p->rear=-1 ;
}
int Empty()
{
  if(p->front==-1)
  return 1;
  else
  return 0;
}
int Full()
{
  if(p->rear==max-1)
  return 1;
  else
  return 0;
}
void Enq(int x)
{
  if(Full()==1)
  return;
  p->rear++;
  p->data[p->rear]=x;
  if(p->front==-1)
  p->front=0;
}
int Deq()
{
  int x;
  if(Empty()==1)
  return 0;
   x=p->data[(p->front)];
   if(p->front==p->rear)
   p->front=p->rear=-1;
   else
   p->front++;
   return x ;

}
int main()
{
init();
Enq(10);
Enq(20);
Enq(30);
printf(" \n%d",Deq());
printf(" \n%d",Deq());
printf(" \n%d",Deq());
getch();
}