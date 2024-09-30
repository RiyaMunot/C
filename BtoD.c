#include<stdio.h>
int main()
{
  int n,digit=0,s=0,b=1;
  printf("Enter number");
  scanf("%d",&n);
  while(n!=0)
  {
    digit=n%10;
    n=n/10;
    s=s+digit*b;
    b=b*16;
  }
  printf("Decimal number=%d",s);
}