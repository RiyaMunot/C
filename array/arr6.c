//to insert element at given pos in array
#include<stdio.h>
int main()
{
    int a[10],i,pos,n,no;
    printf("\nHow many values you want=");
    scanf("%d",&n);
    printf("Enter the values of array=");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("At which position do you want to add value=");
    scanf("%d",&pos);
    printf("\n Enter value to be add=");
    scanf("%d",&no);
    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=no;
    printf("\n After insert");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}