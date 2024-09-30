#include<stdio.h>
int main()
{
  int a,b,c,d;
  printf("Enter value of a and b");
  scanf("%d%d",&a,&b);
  c=a;
  d=b;
  while(a!=b)
  {
    if(a<b)
      a=a+c;
   else
      b+=d;
  }
  printf("LCM is =%d",a);
}