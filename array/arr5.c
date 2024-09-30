//convert decimal number into binary
#include<stdio.h>
int main()
{
    int a[10],n,i=0,j;
    printf("\nEnter Deccimal number=");
    scanf("%d",&n);
    while (n!=0)
    {
        a[i]=n%2;
        n=n/2;
        i++;
    }
    printf("Decimal to Binary");
    for(j=i-1;j>=0;j--)
    printf("%d",a[j]);
    
}
