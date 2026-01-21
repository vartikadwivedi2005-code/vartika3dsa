#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
  int a[5];
  int n=0,i,s;
     printf("Enter 5 ints\n");
  for(i=0;i<5;i++)
  scanf("%d",&a[i]);
  cout<<"Enter Position TO Update"<<endl;
  cin>>n;
  cout<<"Enter New Value"<<endl;
  cin>>s;
  a[n]=s;
  cout<<"One Element Updated"<<endl;
  for(i=0;i<5;i++)
  printf("\n%d",a[i]);
  getch();

}
