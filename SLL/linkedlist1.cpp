
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
#define null 0
using namespace std;


struct node {
    int data;
    node* next;
};
node first,temp,ttemp,*p,*r,*q;


void init() {
    first = NULL;
}

void createfirst(int x) {
    first = new node;
    first->data = x;
    first->next = NULL;
}
void addafter( int y) {
    temp=first;
    while(temp->data != null) {
        temp = temp->next;
    }
    ttemp=temp->next;
    p = new node;
    p->data = y;
    temp->next=p;
    p->next = ttemp;
}



void disp() {
    node* temp = first;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}



int main() {
    init();
    createfirst(10);
    addafter(20);
    addafter(30);
    addafter(40);
    addafter(50);
    addafter(60);
    disp();
}