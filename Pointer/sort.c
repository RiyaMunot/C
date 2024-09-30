#include<stdio.h>
int main()
{
   int a[10],i,j,n,temp=0;
   int *p;
   p=a;
   printf("Enter how many values you want");
   scanf("%d",&n);
   printf("Enter values of array");
   for(i=0;i<n;i++)
   {
     scanf("%d",&p[i]);
   }
   for(i=0;i<n;i++)
   {
    for(j=0;j<n-1-i;j++)
    {
      if(p[j]>p[j+1])
      {
        temp=p[j];
        p[j]=p[j+1];
        p[j+1]=temp;
      }
    }
   }
  printf("Array values\n");
   for(i=0;i<n;i++)
   {
     printf("%d\t",p[i]);  
   }

}