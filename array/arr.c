#include<stdio.h>
int main()
{
   int n,i,a[10],b[10],c[10];
   printf("How many values you want in arry :");
   scanf("%d",&n);
   printf("Enter the values of first array : ");
   for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     printf("Enter the values of second array :");
   for(i=0;i<n;i++)
     scanf("%d",&b[i]);
   for(i=0;i<n;i++)
{
     c[i]=a[i]+b[i];
}
     printf("After addition array is : ");
   for(i=0;i<n;i++)
     printf("%d\t",c[i]);
   
}