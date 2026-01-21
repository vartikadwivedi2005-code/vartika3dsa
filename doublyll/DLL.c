#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
#define null 0
using namespace std;
typedef struct LinkedList
{
  int data;
  struct LinkedList *next,*prev;
}node;
node *first,*temp,*ttemp,*p,*q,*r,*ptemp,*pttemp,
*ntemp,*nttemp;

void init()
{
 first=temp=ttemp=null;
}

/*void add_before_first(int val)
{
  temp=(node*)malloc(sizeof(node));
  temp->data=val;temp->next=first;
  temp->prev=null;first->prev=temp;
  first=temp;
}

void del_first()
{
  temp=first;
  first=first->next;
  first->prev=null;
  temp->next=temp->prev=null;
  free(temp);
}
int count()
{
int n=0;
if(first!=null)
{
  temp=first;
  while(temp!=null)
  {
  temp=temp->next;
  n++;
  }

}
return n;
}
int Data_Found(int n)
{
 temp=first;
 while(temp!=null)
 {
   if(temp->data==n)
   {
     return 1;
   }
 temp=temp->next;
 }
 return 0;
} */
void addnode(int val)
{
  temp=first;
  while(temp->next!=null)
  {
  temp=temp->next;

  }
  ttemp=(node*)malloc(sizeof(node));
  ttemp->data=val;
  ttemp->next=null;
  ttemp->prev=temp;
  temp->next=ttemp;
}

/*void swap_first_last()
{
  temp=first;
  p=temp->next;
  while(temp->next!=null)
  temp=temp->next;
  q=temp->prev;
  q->next=first;
  first->prev=q;
  first->next=null;
  temp->next=p;
  p->prev=temp;
  temp->prev=null
  first=temp;


}
void swap_first_second()
{

{
  temp=first;
  p=temp->next;
  q=p->next;
  p->next=temp;
  p->prev=null;
  temp->prev=p;
  temp->next=q;
  q->prev=temp;
  first=p;
  }


}
void swap_last_slast()
{
{
  temp=first;
  while(temp->next!=null)
  {
    temp=temp->next;
  }
  ttemp=temp->prev;
  q=ttemp->prev;
  q->next=temp;
  temp->prev=q;
  ttemp->next=null;
  ttemp->prev=temp;
  temp->next=ttemp;
  }

}
void addafter(int x,int y)
{
   temp=first;
   while(temp->data!=x)
   {

    temp=temp->next;
   }

   {
   ttemp=temp->next;
   p=(node*)malloc
   (sizeof(node));
   p->data=y;
   p->next=ttemp;
   ttemp->prev=p;
   temp->next=p;
   p->prev=temp;
   }

}
void addbefore(int x,int y)
{




{
   ttemp=temp=first;
   while(temp->data!=x)
   {

    temp=temp->next;
   }
   ttemp=temp->prev;
   p=(node*)malloc
   (sizeof(node));
   p->data=y;
   p->next=temp;
   temp->prev=p;
   ttemp->next=p;
   p->prev=ttemp;

}
}

void delafter(int x)
{
   temp=first;
   while(temp->data!=x )
   {
    temp=temp->next;
   }



  p=temp->next;
  q=p->next;
  temp->next=q;
  q->prev=temp;
  p->next=null;
  p->prev=null;
  free(p);


}*/

/*void delbefore(int x)
{    temp=first;
   while(temp->data!=x )
   {

    temp=temp->next;
   }
 p=temp->prev;
  ttemp=p->prev;
  ttemp->next=temp;
  temp->prev=ttemp;
 p->next=p->prev=null;
   free(p);
   }
*/
 

void createfirst(int val)
{
 first=(node*)malloc
 (sizeof(node));
  first->data=val;
  first->next=first->prev=null;
}


void disp()
{
 temp=first;
 while(temp!=null)
 {
   //cout("\n%d",temp->data);
   cout<<"\n"<<temp->data;
   temp=temp->next;
 }

 }

 int main()
 {
   int i,ch=12,j,m,n;

   //clrscr();
   init();
   cout<<"\nEnter Data For First Node\n";
   //scanf("%d",&i);
   cin>>i;
   createfirst(i);
   cout<<"\n First Node Created\n";
   disp();
   cout<<"\nPress Enter To Continue";
   getch();


   while(1)
   {
   //clrscr();
   cout<<"\nEnter Choice\n";
   cout<<"1.Add Node At end\n";
   cout<<"2.Add Node  After A Given Data\n";
   cout<<"3.Add Node  Before A Given Data\n";
   cout<<"4.Del Node  After A Given Data\n";
   cout<<"5.Del Node  Before A Given Data\n";
   cout<<"6.Display Linked List\n";
 //  cout("7.Reverse Linked List\n");
   cout<<"8.Swap First Last\n";
   cout<<"9.Swap Last And Second Last\n";
   cout<<"10.Swap First And Second\n";
  // cout("11.Swap mth And nth Node\n");
   cout<<"12.Quit\n";
   //scanf("%d",&ch);
   cin>>ch;
   switch(ch)
   {
      case 1:
     // clrscr();
      cout<<"\nNow Enter Data For New Node\n";
      //scanf("%d",&i);
      cin>>i;
      addnode(i);
      cout<<"\nNode Created Successfully\n";
      cout<<"\nPress Enter To Continue";
      //disp();
      getch();

      break;
    /*  case 2:
      //clrscr();
      cout<<"\nNow Enter Data For Targer Node\n";
      //scanf("%d",&i);
      cin>>i;
      cout<<"\nNow Enter Data For New Node\n";
      scanf("%d",&j);
      addafter(i,j);

      cout<<"\nNode Created Successfully\n";
       cout<<"\nPress Enter To Continue";
       getch();

      break;
      case 3:
      clrscr();
      cout<<"\nNow Enter Data For Targer Node\n";
      //scanf("%d",&i);
      cin>>i;
      cout<<"\nNow Enter Data For New Node\n";
      //scanf("%d",&j);
      cin>>j
      addbefore(i,j);
      cout<<"\nNode Created Successfully\n";
       cout<<"\nPress Enter To Continue";
       getch();

      break;
      case 4:
      clrscr();
      cout<<"\nNow Enter Data For Target Node\n";
      //scanf("%d",&i);
      cin>>i;
      delafter(i);
      cout<<"\nNode Deleted Successfully\n";
       cout<<"\nPress Enter To Continue";
       getch();

      break;
      case 5:
      clrscr();
      cout<<"\nNow Enter Data For Target Node\n";
      //scanf("%d",&i);
      cin>>i
      delbefore(i);
      cout<<"\nNode Deleted Successfully\n";
      cout<<"\nPress Enter To Continue";
      getch();
      break;
*/
      case 6:
      //clrscr();
      disp();
      getch();
      cout<<"\nPress Enter To Continue";
      getch();
      break;
  /*    case 7:
      clrscr();
      reverse();
      cout<<"\nPress Enter To Continue";
      getch();
      break;
      case 8:
      swap_first_last();
      cout<<"\nFirst And Last Node Swapped Successfully";
      cout<<"\nPress Enter To Continue";
      getch();
      break;


      case 9:
      swap_last_slast();
      cout<<"\nLast And Second Last Node Swapped Successfully";
      cout<<"\nPress Enter To Continue";
      getch();
      break;

      case 10:
      swap_first_second();
      cout<<"\nFirst And Second Node Swapped Successfully";
      cout<<"\nPress Enter To Continue";
      getch();
      break;
      case 11:
      cout<<"\nEnter mth Value:  ";
      //scanf("%d",&m);
      cin>>m;
      cout("\nEnter nth Value:  ");
      //scanf("%d",&n);
      cin>>n;
      swap_mth_nth(m,n);
      cout<<"\nPress Enter To Continue";
      getch();
      break; */

      case 12:
      exit(1);
      default:
      //clrscr();
      cout<<"\nWrong Choice\n";
      cout<<"\nPress Enter To Continue";
      getch();

      break;

   }






   }

   getch();
 }





