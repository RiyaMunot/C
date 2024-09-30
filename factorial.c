//factorial of number
//n=5 fact........  5*4*3*2*1
#include<stdio.h>

int main(){

    int fact=1,n,i,x;
    printf("enter a number which factorial you want");
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
        fact=fact*n;
        n--;
    }
    printf("factorial of %d =%d",x,fact);
    return 0;
}