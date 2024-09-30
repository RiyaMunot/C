//Sort array in ascending order
#include<stdio.h>
int main()
{
    int a[10],i,n,j,temp;
    printf("\nHow many values you want=");
    scanf("%d",&n);
    printf("\n Enter the values of array=");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\n Array in ascending order=");
     for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}