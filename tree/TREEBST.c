#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define null 0
typedef struct Tree
{
int data;
struct Tree *left,*right;
}node;
node *root,*temp,*ttemp,*p,*s;
void init()
{
 root=null;
}
void create_root(int x)
{
  root=(node*)malloc(sizeof(node));
  root->data=x;
  root->left=root->right=null;
}
void add_nodes(int x)
{  temp=root;
  while(temp!=null)
  { ttemp=temp;
    if(temp->data>x)
    temp=temp->left;
    else
    temp=temp->right;
  }
   p=(node*)malloc(sizeof(node));
    p->data=x; p->left=null;
   p->right=null; 
   if(ttemp->data>x)
    ttemp->left=p;
   else
    ttemp->right=p;

}
void inorder(node *p)
{
 if(p!=null)
 {
  inorder(p->left);
  printf("\t%d",p->data);
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
main()
{
 int n;
 node *pt;
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
add_nodes(85);  add_nodes(25); add_nodes(15);
add_nodes(35); add_nodes(45);add_nodes(59);
add_nodes(24);
printf("\nInorder\n");
inorder(root);
getch();
printf("\nPreorder\n");

preorder(root);
getch();
printf("\nPostorder\n");
postorder(root);
getch();


}
