#include<stdio.h>
int main()
{
    int a[40];
    int val,i,pos,n;
    printf("\n how many values you want=");
    scanf("%d",&n);
    printf("Enter array elements=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("At which position value to be inserted=");
    scanf("%d",&pos);
    printf("\n enter value tto be inserted");
    scanf("%d",&val);
    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=val;
    printf("Array=\n");
    for(i=0;i<n+1;i++)
    printf("%d\t",a[i]);
}