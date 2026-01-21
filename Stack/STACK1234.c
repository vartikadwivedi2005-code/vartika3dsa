#include<stdio.h>
#include<conio.h>
#define max 20
typedef struct stack
{
 int data[max];
 int top;
}s;

void init(s *p)
{
  p->top=-1 ;
  
}
int Empty(s *p)
{
  if(p->top==-1)
  return 1;
  else
  return 0;
}


int Full(s *p)
{
  if(p->top==max-1)
  return 1;
  else
  return 0;
}


void push(s *p,int x)
{
	 
  if(Full(p)==1)
  return;
  p->top=p->top+1;
  p->data[p->top]=x;
 
}


int pop(s *p)
{
  int x;
  if(Empty(p)==1)
  return 0;
   x=p->data[p->top];
   p->top=p->top-1;
      return x;
}


int main()
{
	int flag=0;
	s s1,s2,s3;
init(&s1);
init(&s2);
init(&s3);
push(&s1,1);
push(&s1,3);
push(&s1,5);
push(&s1,7);
push(&s2,2);
push(&s2,4);
push(&s2,6);
push(&s2,8);
while(!Empty(&s1) || !Empty(&s2))
{
	if(flag==0)
	push(&s3,pop(&s1));
	else
	push(&s3,pop(&s2));
	flag=!flag;
	
}


printf("\n%d",pop(&s3));
printf("\n%d",pop(&s3));
printf("\n%d",pop(&s3));
printf("\n%d",pop(&s3));
printf("\n%d",pop(&s3));
printf("\n%d",pop(&s3));
printf("\n%d",pop(&s3));
printf("\n%d",pop(&s3));

getch();
}