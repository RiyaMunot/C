//Reverse digit
#include<stdio.h>
int main()
{
    int n,digit,sum,*p,*q,*r;
    p=&n;
    q=&digit;
    r=&sum;
    printf("Enter number to reverse it=");
    scanf("%d",p);
    while(*p!=0)
    {
        *q=*p%10;
        *p=*p%10;
        *r=*r*10+*q;
    }
    printf("Reverse digit=%d",*r);
}