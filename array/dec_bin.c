//decimal to binary
#include<stdio.h>
int main()
{
    int a[50];
    int n,j,i=0;
    printf("\n Enter decimal number=");
    scanf("%d",&n);
    while(n!=0)
    {
        a[i]=n%2;
        n=n/2;
        i++;
    }
    printf("\n dec to binary=\n");
    for(j=i-1;j>=0;j--)
    printf("%d",a[j]);
}