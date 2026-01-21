#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct poly
{
  int pow,coff;
  struct poly *next;
}node;
node *first,*temp,*ttemp
,*between,*last,*befor_first
,*templ1,*templ2;
void init()
{

 first=NULL;
}
node* create_List
(int p,int c)
{
  if(first==NULL)
  {
    first=(node*)malloc
    (sizeof(node));
    first->pow=p;
    first->coff=c;
    first->next=NULL;
  }
  else
  {
 ttemp=temp=first;
  while(temp!=NULL
  && temp->pow>p)
  {
   ttemp=temp;
   temp=temp->next;
  }
  if(temp==first)
  {
   befor_first=(node*)
   malloc(sizeof(node));
   befor_first->pow=p;
   befor_first->coff=c;
   befor_first->next=first;
   first=befor_first;
  }
  else if(temp==NULL)
  {
   last=(node*)malloc
   (sizeof(node));
   last->pow=p;
   last->coff=c;
   last->next=NULL;
   ttemp->next=last;

  }
  else if(ttemp->pow>p
  && temp->pow<p)
  {
   between=(node*)malloc
   (sizeof(node));
   between->pow=p;
   between->coff=c;
   between->next=temp;
   ttemp->next=between;

  }
  else
  {
     temp->coff=temp->coff
     +c;
  }

  }
  return first;
}
void disp(node *t)
{
  first=t;
  temp=first;
  while(temp!=NULL)
  {
      printf("\npow=%d\tcoff\
      =%d" ,temp->pow
      ,temp->coff);
      temp=temp->next;
  }
}
node * add_lists(node *l1
,node *l2)
{     node *final;
      int c;
      templ1=l1;
      templ2=l2;
      while(templ1!=NULL
      && templ2!=NULL)
      {
      if(templ1->pow>templ2->pow)
	{
          final=create_List(templ1->pow,templ1->coff);
           templ1=templ1->next;

	}
         else if(templ2->pow>templ1->pow)
	{
	    final=create_List(templ2->pow,templ2->coff);
	    templ2=templ2->next;

	}
	else
	{
	 c=templ2->coff+templ1->coff;
	 final=create_List(templ2->pow,c);
	 templ1=templ1->next;
	 templ2=templ2->next;

	}

      }
      while(templ1!=NULL)
      {
      final=create_List
      (templ1->pow
      ,templ1->coff);
      templ1=templ1->next;
      }
      while(templ2!=NULL)
      {
      final=create_List(templ2->pow,templ2->coff);
      templ2=templ2->next;
      }
      return final;

}
int main()
{ node  *l1,*l2,*l3;
  //clrscr();
  init();
  l1=create_List(2,4);
  l1=create_List(5,7);
  l1=create_List(4,6);
  l1=create_List(7,9);


   init();
  l2=create_List(2,4);
  l2=create_List(3,2);
  l2=create_List(6,3);
  l2=create_List(5,1);

  disp(l1);
   getch();
   printf("\n\n\n\n\n");
  disp(l2);
   getch();

   printf("\n\n\n");

     init();
  l3=add_lists(l1,l2);
  disp(l3);


  getch();
}
