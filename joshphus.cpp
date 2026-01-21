
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <iostream>
#define null 0
using namespace std;
typedef struct LinkedList
{
  int data;
  struct LinkedList *next;
}node;
node *first,*temp,*ttemp,*p,*
q,*r,*ptemp,*pttemp,
*ntemp,*nttemp;
int count;
void init()
{
 first=temp=ttemp=null;
}

void addnode(int val)
{  temp=first;
  while(temp->next!=first)
  {
  temp=temp->next;

  }
  ttemp=(node*)malloc(sizeof(node));
  ttemp->data=val;
  ttemp->next=first;
  temp->next=ttemp;
  count++;
}


void createfirst(int val)
{
 first=(node*)malloc
 (sizeof(node));
  first->data=val;
  first->next=first;
  count=1;
}


void disp()
{
 temp=first;
 do
 {
   printf("\n%d",temp->data);
   temp=temp->next;
 } while(temp!=first);

 }

void JOSH(int n)
{
	int c;
 temp=first;
 while(count>1)
 {
 	c=1;
 	while(c<n)
 	{   ttemp=temp;
 		temp=temp->next;
 		c++;
	 }
	 if(temp==first)
	 first=first->next;
	 ttemp->next=temp->next;
	 temp->next=NULL;
	 free(temp);
	 count--;
 }
 cout<<"\n"<<ttemp->data<<" will go\n";
 

 }

 int main()
 {
   int i,ch=12,j,m,n,lnum;

   
   init();
   printf("\nEnter Data For First Node\n");
   scanf("%d",&i);
   createfirst(i);
   printf("\n First Node Created\n");
   printf("\nPress Enter To Continue");
   getch();


   while(1)
   {
   
   printf("\nEnter Choice\n");
   printf("1.Add Node At end\n");
   printf("5.JOSH\n");   
   printf("6.Display Linked List\n");
  printf("12.Quit\n");
   scanf("%d",&ch);
   switch(ch)
   {
      case 1:
      
      printf("\nNow Enter Data For New Node\n");
      scanf("%d",&i);
      addnode(i);
      printf("\nNode Created Successfully\n");
      printf("\nPress Enter To Continue");
      getch();
      break;
      case 5:
    cout<<"Enter Lucky Number Less Than "<<count<<endl;
    cin>>lnum;
      JOSH(lnum);
      getch();
      printf("\nPress Enter To Continue");
      getch();
      break;
      case 6:
    
      disp();
      getch();
      printf("\nPress Enter To Continue");
      getch();
      break;
  
      case 12:
      exit(1);
      default:
       printf("\nWrong Choice\n");
      printf("\nPress Enter To Continue");
      getch();

      break;

   }






   }

   getch();
 }




