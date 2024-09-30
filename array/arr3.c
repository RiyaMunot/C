//Reverse given array
#include<stdio.h>
int main()
{
    int a[10],i,n;
    printf("\nHow many values you want=");
    scanf("%d",&n);
    printf("\n Enter the values of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
}
