//print array in reverse order
#include<stdio.h>
int main()
{
    int a[20];
    int n,i,j,temp=0;
    printf("\nHow many values you want=");
    scanf("%d",&n);
    printf("\n Enter array Elements=\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=n-1;i<=n/2;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("After reverse array=");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}