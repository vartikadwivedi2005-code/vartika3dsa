#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
  int a[5];
  int n=0,i,s;
     printf("Enter 4 ints\n");
  for(i=0;i<4;i++)
  scanf("%d",&a[i]);
  cout<<"Enter Position TO Insert"<<endl;
  cin>>n;
  for(i=4;i>n;i--)
  a[i]=a[i-1];
  cout<<"Enter Element TO Insert"<<endl;
  cin>>s;
  a[n]=s;
  cout<<"One Element Inserted"<<endl;
  for(i=0;i<5;i++)
  printf("\n%d",a[i]);
  getch();

}
