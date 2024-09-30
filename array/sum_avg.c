//c program to find sum and avg of givven array
#include<stdio.h>
int main()
{
    int a[10],i,s=0,n,avg=0;
    printf("\n how many values you want=");
    scanf("%d",&n);
    printf("enter values=\n");
     for ( i = 0; i < n; i++)
      scanf("%d",&a[i]);
      for ( i = 0; i < n; i++)
      {
          s=s+a[i];
      }
      avg=s/n;
      printf("\n Sum of array elements=%d",s);
      printf("\nAverage=%d",avg);

}