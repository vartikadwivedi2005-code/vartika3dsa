#include<iostream>
#include<conio.h>

#include<stdlib.h>
using namespace std;
#define null 0
struct BST
{
    int data;
    BST *left,*right,*p;

};
BST *root,*temp,*ttemp,*p;
void init(){
    root=temp=ttemp=null;
}
void create_root(int x){
    root=new BST;
    root->data=x;
    root->left=root->right=null;
}
void AddNodes(int x){
    temp=root;
    while(temp!=null){
        ttemp=temp;
        if(temp->data<x)
            temp=temp->left;
        else
            temp=temp->right;
    }
    p=new BST;
    p->data=x;
    p->left=p->right=null;
    if(ttemp->data<x)
        ttemp->left=p;
    else
        ttemp->right=p;
}
void inorder(BST *p){
    if(p!=null){
        inorder(p->left);
        cout<<p->data<<" ";
        inorder(p->right);
    }
}
int main(){
    init();

    create_root(100);
    AddNodes(50);
    AddNodes(200);
    AddNodes(10);
    AddNodes(70);
    AddNodes(150);
    AddNodes(300);
    AddNodes(20);
    AddNodes(2);
    AddNodes(30);
    AddNodes(90);
    AddNodes(65);
    AddNodes(180);
    AddNodes(150);
    AddNodes(15);
    inorder(root);
    getch();
}