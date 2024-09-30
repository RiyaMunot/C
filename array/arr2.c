//Find max no from array
#include<stdio.h>
int main()
{
    int a[10],n,i,max=0,pos=0;
    printf("\n how many values you want=");
    scanf("%d",&n);
    printf("Enter the values of array=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            pos=i;
        }
    }
    printf("Maximun value %d is present %d position",max,pos);
}
