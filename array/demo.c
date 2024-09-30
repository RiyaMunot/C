#include<stdio.h>
int main()
{
    int a[10],n,i;
    printf("\n how many vslues you want=");
    scanf("%d",&n);
    printf("\n Enter the values of array=");
    for (i=0;i<n;i++)
    {
       scanf("%d",&a[i]); 
    }
    printf("array elements=\n");
     for (i=0;i<n;i++)
     {
         printf("%d\t",a[i]);
     }
    



}