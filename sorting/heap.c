#include<stdio.h>
#include<conio.h>
void heap_sort(int a[],int n)
{
  int i,f,s,x,t;
  for(i=1;i<n;i++)
  {
       s=i;
       f=(s-1)/2;
       x=a[i];
       while(s>0 && a[f]<x)
       {
         a[s]=a[f];
         s=f;
         f=(s-1)/2;
       }
       a[s]=x;
  }
 //sorting
  for(i=n-1;i>0;i--)
  {  x=a[i];
     a[i]=a[0];
     f=0;
     if(i>1)s=1;
     else
     s=-1;
     if(i>2 && a[s+1]>a[s])
     s=2;
     while(s>=0 && a[s]>x)
     {a[f]=a[s];
     f=s;s=2*f+1;
     if(a[s+1]>a[s]&&s+1<=i-1)s=s+1;
     if(s>i-1)s=-1;
     }a[f]=x;
  }
}
int main()
{
  int a[7],i;
  printf("Enter Array to Be Sorted\n");
  for(i=0;i<7;i++)
  scanf("%d",&a[i]);
  heap_sort(a,7);
  printf("\nSorted Array is\n");
  for(i=0;i<7;i++)
  printf("\n%d",a[i]);
  getch();

}
