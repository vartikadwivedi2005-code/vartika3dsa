#include<stdio.h>
#include<conio.h>
void quick_sort(int a[],int lb,int ub)
{
 int x,l,r,t;
if(lb>=ub)
return ;
l=lb;r=ub;x=a[lb];
while(l<r)
{
while(a[l]<=x && l<r)
l++ ;
while(a[r]>x)
r--;
if(l<r)
{
  t=a[l];
  a[l]=a[r];
  a[r]=t;
}
}
a[lb]=a[r];
a[r]=x;
quick_sort(a,lb,r-1);
quick_sort(a,r+1,ub);

}
int main()
{
  int a[7],i;
  printf("Enter Array to Be Sorted\n");
  for(i=0;i<7;i++)
  scanf("%d",&a[i]);
  quick_sort(a,0,6);
  printf("\nSorted Array is\n");
  for(i=0;i<7;i++)
  printf("\n%d",a[i]);
  getch();

}
