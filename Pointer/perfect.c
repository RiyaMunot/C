#include<stdio.h>
int main()
{
  int no,i,s=0,x;
  int *n,*sum;
  n=&no;
  sum=&s;
  printf("Enter number to check");
  scanf("%d",n);
  x=*n;
  for(i=1;i<*n;i++)
  {
    if(*n%i==0)
    {
      *sum=*sum+i;
    } 
  }
  if(*sum==x)
  printf("No. is perfect");
  else
  printf("No is not perfect");
}