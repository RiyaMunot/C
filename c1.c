#include<stdio.h>
int main()
{
  int n,digit=0,s=0;
  printf("Enter your number");
  scanf("%d",&n);
  while(n!=0)
  {
     digit=n%10;
     n=n/10;
     s=s*10+digit;
  }
  while(s!=0)
  {
    digit=s%10;
    s=s/10;  
    switch(digit)
  {
    case 0:printf("Zero");
           break;
    case 1:printf("one");
           break;
    case 2:printf("two");
           break;
    case 3:printf("Three");
           break;
    case 4:printf("four");
           break;
    case 5:printf("five");
           break;
    case 6:printf("six");
           break;
    case 7:printf("seven");
           break;
    case 8:printf("eight");
           break;
    case 9:printf("Nine");
           break;
  }
}
}