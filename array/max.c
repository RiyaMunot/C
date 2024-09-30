//to find max number from array
#include<stdio.h>
int main()
{
    int max,a[20],n,i;
    printf("\n how many values you want=");
    scanf("%d",&n);
    printf("\nEnter values");
    for ( i = 0; i < n; i++)
    scanf("%d",&a[i]);
    max=a[0];
    for ( i = 0; i < n; i++)
    {
    if(a[i]>max)
    {
        max=a[i];
    }
    }
    printf("\n max value=%d",max);

    

}