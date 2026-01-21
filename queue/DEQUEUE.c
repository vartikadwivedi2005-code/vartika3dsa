#include<stdio.h>
#include<conio.h>
#define max 5
typedef struct Dequeue
{
  int data[max];
  int front,rear;
}dq;
dq q1,*p;
void init()
{
  p=&q1;
  p->front=p->rear=-1;
}
int Full()
{
 if(p->front==0 && p->rear==max-1)
 return 1;
 else
 return 0;
}
int Empty()
{
if(p->front==-1)
return 1;
else
return 0;

}

void Benq(int x)
{ int i;
 if(Full()==1)
 return;
 if(p->front==-1)
 { p->front=p->rear=0;  p->data[p->front]=x;
 }else if(p->front!=0)
 { --p->front;   p->data[p->front]=x;
 }else
{
for(i=p->rear;i>=p->front;i--)
p->data[i+1]=p->data[i];
 p->data[p->front]=x; p->rear++;
 }
}
void Eenq(int x)
{ int i;
 if(Full()==1)return;
 if(p->rear==-1)
 { p->front=p->rear=0; p->data[p->rear]=x;
 }
 else if(p->rear!=max-1)
 {++p->rear; p->data[p->rear]=x;
 }
else
{for(i=p->front;i<=p->rear;i++)
p->data[i-1]=p->data[i];
 p->data[p->rear]=x;p->front--;
 }
}
int Bdeq()
{
 int x;
 if(Empty()==1)
 return -1;
 x=p->data[p->front];
 if(p->front==p->rear)
 p->front=p->rear=-1;
 else
 p->front++;
 return x;
}
int Edeq()
{
 int x;
 if(Empty()==1)
 return -1;
 x=p->data[p->rear];
 if(p->front==p->rear)
 p->front=p->rear=-1;
 else
 p->rear--;
  return x;
}
int main()
{
  init();
  Benq(10);
  Benq(20);
  Eenq(30);
  Eenq(50);
  printf("\n%d",Bdeq());
  printf("\n%d",Edeq());
  printf("\n%d",Bdeq());
  printf("\n%d",Edeq());
  getch();


}
