#include<stdio.h>
int main()
{
    int a,b,add,*p,*q,*r;
    p=&a;
    q=&b;
    r=&add;
    printf("\nEnter two values to be add");
    scanf("%d%d",p,q);
    *r=*p+*q;
    printf("\nAddition=%d",add);
}