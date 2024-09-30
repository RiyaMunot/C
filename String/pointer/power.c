//calculate x^h using pointer
#include<stdio.h>
int main()
{
    int x,n,sum=1,*p,*q,*r;
    p=&x;
    q=&n;
    r=&sum;
    printf("\nEnter value of x and n");
    scanf("%d%d",p,q);
    while(*q>0)
    {
       *r=(*r)* x;
       (*q)--;       
    }
    printf("\nx^n=%d",*r);
}