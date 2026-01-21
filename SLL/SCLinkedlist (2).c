#include<stdio.h>
#include<conio.h>
#define null 0
typedef struct LinkedList
{
  int data;
  struct LinkedList *next;
}node;
node *first,*temp,*ttemp,*p,*
q,*r,*ptemp,*pttemp,
*ntemp,*nttemp;

void init()
{
 first=temp=ttemp=null;
}

void add_before_first(int val)
{
   p=first;
   while(p->next!=first)
   p=p->next;
  temp=(node*)malloc(sizeof(node));
  temp->data=val;temp->next=first;
  p->next=temp;
  first=temp;
}

void del_first()
{
   p=first;
   while(p->next!=first)
   p=p->next;
  temp=first;
  first=first->next;
  p->next=first;
  temp->next=null;
  free(temp);
}


void addnode(int val)
{
  temp=first;
  while(temp->next!=first)
  {
  temp=temp->next;

  }
  ttemp=(node*)malloc
  (sizeof(node));
  ttemp->data=val;
  ttemp->next=first;
  temp->next=ttemp;
}

void swap_first_last()
{
  temp=first;
  p=temp->next;
 while(temp->next->next!=first)
  temp=temp->next;
  q=temp->next;
  q->next=p;
  temp->next=first;
  first->next=q;
  first=q;


}
void swap_first_second()
{
  {
   r=first;
   while(r->next!=first)
   r=r->next;
  temp=first;
  p=temp->next;
  q=p->next;
  p->next=temp;
  temp->next=q;
  r->next=p;
  first=p;
  }


}
void swap_last_slast()
{


  temp=first;
while(temp->next->next!=first)
  {
  ttemp=temp;
  temp=temp->next;
  }
  q=temp->next;
  q->next=temp;
  ttemp->next=q;
  temp->next=first;
  }

void createfirst(int val)
{
 first=(node*)malloc
 (sizeof(node));
  first->data=val;
  first->next=first;
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

 void main()
 {
   int i,ch=12,j,m,n;

   clrscr();
   init();
   printf("\nEnter Data For First Node\n");
   scanf("%d",&i);
   createfirst(i);
   printf("\n First Node Created\n");
   printf("\nPress Enter To Continue");
   getch();


   while(1)
   {
   clrscr();
   printf("\nEnter Choice\n");
   printf("1.Add Node At end\n");
  // printf("2.Add Node  After A Given Data\n");
  // printf("3.Add Node  Before A Given Data\n");
  // printf("4.Del Node  After A Given Data\n");
 //  printf("5.Del Node  Before A Given Data\n");
   printf("6.Display Linked List\n");
  // printf("7.Reverse Linked List\n");
   printf("8.Swap First Last\n");
   printf("9.Swap Last And Second Last\n");
   printf("10.Swap First And Second\n");
   //printf("11.Swap mth And nth Node\n");
   printf("12.Quit\n");
   scanf("%d",&ch);
   switch(ch)
   {
      case 1:
      clrscr();
      printf("\nNow Enter Data For New Node\n");
      scanf("%d",&i);
      addnode(i);
      printf("\nNode Created Successfully\n");
      printf("\nPress Enter To Continue");
      getch();
      break;
      case 6:
      clrscr();
      disp();
      getch();
      printf("\nPress Enter To Continue");
      getch();
      break;
      case 8:
      swap_first_last();
      printf("\nFirst And Last Node Swapped Successfully");
      printf("\nPress Enter To Continue");
      getch();
      break;


      case 9:
      swap_last_slast();
      printf("\nLast And Second Last Node Swapped Successfully");
      printf("\nPress Enter To Continue");
      getch();
      break;

      case 10:
      swap_first_second();
      printf("\nFirst And Second Node Swapped Successfully");
      printf("\nPress Enter To Continue");
      getch();
      break;

      case 12:
      exit(1);
      default:
      clrscr();
      printf("\nWrong Choice\n");
      printf("\nPress Enter To Continue");
      getch();

      break;

   }






   }

   getch();
 }




