#include<stdio.h>
#include<conio.h>
void merge(int a[],int l,int mid,int h)
{
  int i=l,j=mid+1,temp[9],k=l,s=0;
  while(i<=mid && j<=h)
  {
  if(a[i]<a[j])
  {
    temp[k]=a[i];
    i++;
  }
  else
  {
   temp[k]=a[j];
   j++;
  }
  k++;
  }
if(j>h)
{
  for( ;i<=mid;i++)
  {
    temp[k]=a[i];
    k++;
  }
}
 if(i>mid)
 {
  for( ;j<=h;j++)
  {
    temp[k]=a[j];
    k++;
  }
  }

  for(s=l;s<=h;s++)
  {
    a[s]=temp[s];
  }
  return;
}


void merge_sort(int a[],int l,int h)
{
   int mid=0;

  if(l<h)
  {

    mid=(l+h)/2;
    merge_sort(a,l,mid);
    merge_sort(a,mid+1,h);
    merge(a,l,mid,h);
  }
  return;
}

int main()
{
  int a[9],i;
  printf("Enter Array to Be Sorted\n");
  for(i=0;i<9;i++)
  scanf("%d",&a[i]);
  merge_sort(a,0,8);
  printf("\nSorted Array is\n");
  for(i=0;i<9;i++)
  printf("\t%d",a[i]);
  getch();

}
