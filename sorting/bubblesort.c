#include<stdio.h>
#include<conio.h>
int main()
{
  int a[5],i,j,temp,check=1;
  printf("Enter Array\n");
  for(i=0;i<5;i++)
  scanf("%d",&a[i]);
  for(i=0;i<=5-1&&check==1;i++)
  {  check=0;
  for( j=0;j<5-i-1;j++)
  {    if(a[j]>a[j+1])
    {
     check=1;
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
    }

  }

  }
  printf("\nSorted Array Is\n");
    for(i=0;i<5;i++)
  printf("\n%d",a[i]);
  getch();
}
