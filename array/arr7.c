//to delete element at given pos
#include<stdio.h>
int main()
{
    int a[10],i,pos,n,no;
    printf("\nHow many values you want=");
    scanf("%d",&n);
    printf("Enter the values of array=");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("From which position do you want to Remove value=");
    scanf("%d",&pos);
     for(i=pos;i<n;i++)
    {
        a[i]=a[i+1];
    }
    printf("\n After Delete");
    for(i=0;i<n-1;i++)
    printf("%d\t",a[i]);
}