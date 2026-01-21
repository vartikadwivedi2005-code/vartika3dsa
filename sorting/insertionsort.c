#include<stdio.h>
#include<conio.h>
void insertion(int a[],int n)
{   int i,j,temp=0;
   for(i=1;i<=n-1;i++)
   {     
   if(a[i]<a[i-1])
     {j=i;
       temp=a[i];
       do
       {a[j]=a[j-1];
         j--;
       }while(j>0 && a[j-1]>temp);
a[j]=temp;
     }
   }
}
int main()
{
  int a[10],i;
  printf("Enter Array\n");
  for(i=0;i<10;i++)
  scanf("%d",&a[i]);
  insertion(a,10);
  printf("\nsorted Array\n");
  for(i=0;i<10;i++)
  printf("\n%d",a[i]);
  getch();
 }
