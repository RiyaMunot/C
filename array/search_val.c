//Search given value in array
#include<stdio.h>
int main()
{
    int a[10];
    int i,val,n,flag=0,pos;
    printf("\n how many values you want=");
    scanf("%d",&n);
    printf("\n Enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter the value to be search=");
    scanf("%d",&val);
    for(i=0;i<=n;i++)
    {
        if (a[i]==val)
        {
            flag=1;
            pos=i;
            break;
        }
    }
        if (flag)
       printf("\n value is present at %d position",pos);
       else
       printf("\n value is not present");           
}