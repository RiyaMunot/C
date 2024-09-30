//3!=3*2*1
//Factorial of given number
#include<stdio.h>
int main()
{
    int n,fact=1,*p,*q;
    p=&n;
    q=&fact;
    printf("\nEnter value which factorial do you want=");
    scanf("%d",p);
    while(*p>0)
    {
        *q=((*q)*(*p));
        (*p)--;
    }
    printf("\nFactorial=%d",*q);
}