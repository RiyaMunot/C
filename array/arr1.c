#include<stdio.h>
int main()
{
  int n,i,sum=0,a[10];
  float avg;
  printf("\n Enter how many values you want :\n");
  scanf("%d",&n);
  printf("\nEnter the values of array :\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++)
{
     sum=sum+a[i];
     printf("sum=%d",sum);
}
  avg=(float)sum/n;
  printf("\n sum of array is : %d",sum);
  printf("\n average of array is : %f",avg);
}