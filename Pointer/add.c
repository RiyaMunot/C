#include<stdio.h>
int main()
{
  int a,b,s;
  int *n1,*n2,*sum;
  n1=&a;
  n2=&b;
  sum=&s;
  printf("Enter 2 values");
  scanf("%d%d",n1,n2);
  *sum=*n1+*n2;
   printf("Addition is=%d",*sum);
}