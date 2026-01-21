#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct Lstack
{
int data;
struct Lstack *next;
}LS;
LS *top,*temp;
void init()
{
  top=temp=NULL;
}
void push(int x)
{
  temp=(LS*)malloc(sizeof(LS));
  if(temp==NULL)
  return;
  temp->data=x;
  temp->next=top;
  top=temp;
}
 int pop()
 {    int x;
   if( top==NULL)
   return 0;
   temp=top;
   top=top->next;
   x=temp->data;
   temp->next=NULL;
   free(temp);
   return x;
 }
 int main()
 {init();
  push(10);
  push(20);
  push(30);
  printf("\n%d",pop());
  printf("\n%d",pop());
  printf("\n%d",pop());
  getch();
 }