//write a program to find sum of 1-n numbers
#include<stdio.h>

int main(){

    int i,n,sum=0;
    printf("enter value upto which you want sum");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    } 
    printf("sum of %d numbers =%d",n,sum);
    return 0;
}