#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define null 0
typedef struct Tree
{
int data,visited;
struct Tree *left,*right,*parent;
}node;
node *root,*temp,*ttemp,*p,*s,*dtemp;
int l,w;

void init()
{
 root=null;
}
void create_root(int x)
{
  root=(node*)malloc(sizeof(node));
  root->data=x;
  root->visited=0;
  root->parent=null;
  root->left=root->right=null;
}
void add_nodes(int x)
{
  temp=root;
  while(temp!=null)
  {
    ttemp=temp;
    if(temp->data>x)
    temp=temp->left;
    else
    temp=temp->right;
  }
   p=(node*)malloc(sizeof(node));
   p->data=x;
   p->visited=0;
   p->left=null;
   p->right=null;
   if(ttemp->data>x)
   ttemp->left=p;
   else
   ttemp->right=p;
   p->parent=ttemp;



}
int getLevel(node *p,int n)
{
 if(p!=null)
 {
   if(p->data==n)
   return l;
  l++;
  if(p->data>n)
 return getLevel(p->left,n);
 else
 return getLevel(p->right,n);
 }
// return l;
}
void getWidth(node *pt,int lev)
{     int s;
    if (pt!=null)
    {     l=0;
	s=getLevel(root,pt->data);
	if(s==lev)       {
	w++;
	 } 
	 getWidth(pt->left,lev); 
	 getWidth(pt->right,lev);

    }

}
node* Find_Node(node *t,int n)
{
	
	if(t->data==n)
	return t;
	else
	{
	
	if(t!=null)
	{
	 return Find_Node(t->left,n);
	 return Find_Node(t->right,n);
	 printf("\n%d",t->data);
    }
}
}

/*void Del_Root(node *p)
{
ttemp=temp;
if(temp->right!=null)
{
     s=temp->right;
     if(s->left==null)
     {
     temp->data=s->data;
     temp=s;
     ttemp->right=s->right;
     s->right->parent=ttemp;
     }
     else
     {
     while(s->left!=null)
     {
       ttemp=s;
       s=s->left;
     }
     temp->data=s->data;
     temp=s;
     if(temp->right!=null)
     {
     ttemp->left=temp->right;
     temp->right->parent=ttemp;
     }
     else
     ttemp->left=null;
     }
}
else if(temp->left!=null)
{
     s=temp->left;
     if(s->right==null)
     {

     temp->data=s->data;
     temp=s;
     ttemp->left=s->left;
     s->left->parent=ttemp;
     }
     else
     {
     while(s->right!=null)
     {
       ttemp=s;
       s=s->right;
     }
     temp->data=s->data;
     temp=s;
     if(temp->left!=null)
     {
     ttemp->right=temp->left;
     temp->left->parent=ttemp;
     }
     else
     ttemp->right=null;
     }
}
else
{
  root=null;
}
temp->left=temp->right=null;
free(temp);
} */
int get_LeftHeight(node *pl)
{      static int l;
  if(pl!=null)
  {   l++;
    return get_LeftHeight(pl->left);

  }
  return l;
}
int get_RightHeight(node *pr)
{      static int r;
  if(pr!=null)
  {   r++;
    return get_RightHeight(pr->right);

  }
  return r;
}
int get_Height(node *p)
{
    static int h,lh,rh;
    if(p!=null)
    {
    lh=get_LeftHeight(p->left);
    rh=get_RightHeight(p->right);
    }
    if(lh>=rh)
    h=lh;
    else
    h=rh;
    return h;


}
void vdelete(node *p)
{
  temp=p;
  ttemp=p->parent;
  /*if(ttemp==null)
  {
  Del_Root(temp);
  return;
  }*/

  if(temp->left!=null &&  temp->right!=null)
  {
     ttemp=temp;
     s=temp->right;
     while(s->left!=null)
     {
       ttemp=s;
       s=s->left;
     }
     temp->data=s->data;
     temp=s;
  }
  if(temp->left==null && temp->right==null)
  {
    if(ttemp->left==temp)
    ttemp->left=null;
    else
    ttemp->right=null;
  }
 else if(temp->left!=null &&
 temp->right==null)
  {


    if(ttemp->left==temp)
    {
    ttemp->left=temp->left;
    temp->left->parent=ttemp;
    }
    else
    {
    ttemp->right=temp->left;
    temp->left->parent=ttemp;


    }
  }
   else if(temp->left==null &&
   temp->right!=null)
  {
    if(ttemp->left==temp)
    {
    ttemp->left=temp->right;
    temp->right->parent=ttemp;
    }
    else
    {
    ttemp->right=temp->right;
    temp->right->parent=ttemp;


    }
  }
  temp->left=temp->right=temp->parent=null;
  free(temp);
}
void inorder(node *p)
{
 if(p!=null)
 {
  inorder(p->left);
  printf("\tdata=%d",p->data);
  //printf("\tparent=%d\n",p->parent->data);
  inorder(p->right);
 }
}
void preorder(node *p)
{
 if(p!=null)
 {
  printf("\t%d",p->data);
  preorder(p->left);
  preorder(p->right);
 }
}

void postorder(node *p)
{
 if(p!=null)
 {

  postorder(p->left);
  postorder(p->right);
  printf("\t%d",p->data);
 }
}
void Defoliation(node *p)
{
 if(p!=null)
 {
  if(p->left==null && p->right==null && p->visited==0)
  {
    dtemp=p->parent;
    dtemp->visited=1;
    printf("\tdeleting =%d\n",p->data);
   vdelete(p);
   p=dtemp;
  }
  Defoliation(p->left);
  //printf("\tdata=%d\n",p->data);
  //printf("\tparent=%d\n",p->parent->data);
  Defoliation(p->right);
 }
}
int main()
{
 int n;
 node *pt=null;
 //clrscr();
init();
create_root(50);
add_nodes(30);
add_nodes(70);
add_nodes(90);
add_nodes(20);
add_nodes(10);
add_nodes(100);
add_nodes(60);
add_nodes(80);
add_nodes(55);
add_nodes(85);
add_nodes(25);
add_nodes(15);
add_nodes(35);add_nodes(45);add_nodes(59);add_nodes(24);add_nodes(5);
printf("\nInorder\n");
inorder(root);
getch();
printf("\nPreorder\n");
preorder(root);
getch();
printf("\nPostorder\n");
postorder(root);
getch();
printf("\nEnter Data To Delete\n");
scanf("%d",&n);
pt=Find_Node(root,n);
if(pt==null)
printf("\nData Not Found");
else
{
vdelete(pt);
printf("\nNode Deleted Sucessfully");
printf("\nInorder\n");
inorder(root);
getch();
printf("\nPreorder\n");
preorder(root);
getch();
printf("\nPostorder\n");
postorder(root);
getch(); }

/*inorder(root);
Defoliation(root);
inorder(root);*/
//getch();
//inorder(root);
//getch();*/
/*printf("\nHeight=%d",get_Height(root));
l=0 ;
printf("\nLevel of 50=%d",getLevel(root,50)) ;
l=0 ;
printf("\nLevel of 55=%d",getLevel(root,25)) ;
l=0;
printf("\nLevel of 100=%d",getLevel(root,100))  ;

l=0;
w=0;
getWidth(root,3);

printf("\nWidth At 3rd  Level is =%d",w) ;

w=0;
getWidth(root,2);

printf("\nWidth At 2nd  Level is =%d",w) ;



//getch();*/
return 0;
}
